//-----------------------------------------------------------------------------
#include "PrecompiledHeader.h"
//-----------------------------------------------------------------------------
#include <string.h>
//-----------------------------------------------------------------------------
S3DX_IMPLEMENT_AIVARIABLE_STRING_POOL   ( 524288 ) ;
S3DX_IMPLEMENT_AIENGINEAPI              ( ShiVa_Awesomium ) ;
S3DX_IMPLEMENT_PLUGIN                   ( ShiVa_Awesomium ) ;

//-----------------------------------------------------------------------------
//  AI Packages
//-----------------------------------------------------------------------------
#include "SmanAW.h"
#include "Browser.h"

bool gShutdown = false;

//-----------------------------------------------------------------------------
//  Constructor / Destructor
//-----------------------------------------------------------------------------

ShiVa_Awesomium::ShiVa_Awesomium ( )
{
    S3DX_REGISTER_PLUGIN  ( "com.shaderman.awesomium" ) ;
    aContentsDirectory[0] = '\0' ;
	
	//Instanciate AI Packages
    S3DX::uint32 iAIPackageIndex = 0 ;
    if ( iAIPackageIndex < PLUGIN_AIPACKAGES_COUNT ) aAIPackages [iAIPackageIndex++] = new SmanAWPackage ( ) ;

	for ( ; iAIPackageIndex < PLUGIN_AIPACKAGES_COUNT; iAIPackageIndex ++ )
	{
        aAIPackages[iAIPackageIndex] = NULL  ;		
	}

}

//-----------------------------------------------------------------------------

ShiVa_Awesomium::~ShiVa_Awesomium ( )
{
	for ( S3DX::uint32 iAIPackageIndex = 0 ; iAIPackageIndex < PLUGIN_AIPACKAGES_COUNT; iAIPackageIndex ++ )
	{
		if ( aAIPackages [iAIPackageIndex] )
		{
			delete aAIPackages [iAIPackageIndex] ; 
			aAIPackages[iAIPackageIndex] = NULL  ;
		}
	}
}

// SMAN
void ShiVa_Awesomium::OnEngineEvent ( S3DX::uint32 _iEventCode, S3DX::uint32 _iArgumentCount, S3DX::AIVariable *_pArguments )
{
    switch ( _iEventCode )
	{
		case eEngineEventApplicationStart:
			SB = new ShiVaBrowser();
			SB->init();
			break;

		case eEngineEventApplicationStop:
			gShutdown = true;
			SB->shutdown();
			delete SB;
			break;

		case eEngineEventFrameUpdateBegin:
			if ( !gShutdown )
				SB->m_WebCore->Update(); // TODO pause updates if site is loaded?
			break;
		case eEngineEventFrameUpdateEnd:
			if ( !gShutdown ) {
				SB->updatePixelmaps();
			}
			break;
	}
}

//-----------------------------------------------------------------------------
//  Plugin content directory
//-----------------------------------------------------------------------------

        void                    ShiVa_Awesomium::SetContentsDirectory  ( const char *_pDirectory ) { strcpy ( aContentsDirectory, _pDirectory ) ; }

//-----------------------------------------------------------------------------
//  AI packages
//-----------------------------------------------------------------------------

        S3DX::uint32            ShiVa_Awesomium::GetAIPackageCount     ( )                      const { return PLUGIN_AIPACKAGES_COUNT ; }
const   S3DX::AIPackage        *ShiVa_Awesomium::GetAIPackageAt        ( S3DX::uint32 _iIndex ) const { return (_iIndex < PLUGIN_AIPACKAGES_COUNT) ? aAIPackages[_iIndex] : NULL ; }

