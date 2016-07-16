//-----------------------------------------------------------------------------
#include "PrecompiledHeader.h"
#include "SmanAW.h"
//-----------------------------------------------------------------------------


#ifdef S3DX_DLL
	SmanAWAPI SmanAW ;
#endif

#include "Browser.h"

#include <Awesomium/STLHelpers.h>

using namespace Awesomium;


extern ShiVaBrowser* SB;

//-----------------------------------------------------------------------------
//  Callbacks
//-----------------------------------------------------------------------------

int Callback_SmanAW_shutdown ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.shutdown" ) ;

	SB->shutdown();

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_zoomOut ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.zoomOut" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->zoomOut(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_zoomIn ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.zoomIn" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->zoomIn(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_getURL ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.getURL" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

    // Output Parameters 
    S3DX::AIVariable sURL = SB->getURL(sPixelmap.GetStringValue()).c_str();

    // Return output Parameters 
    int iReturnCount = 0 ;
    _pOut[iReturnCount++] = sURL ;

    S3DX_API_PROFILING_STOP( ) ;
    return iReturnCount;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_getTitle ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.getTitle" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

    // Output Parameters 
	S3DX::AIVariable sTitle = SB->getTitle(sPixelmap.GetStringValue()).c_str();

    // Return output Parameters 
    int iReturnCount = 0 ;
    _pOut[iReturnCount++] = sTitle ;

    S3DX_API_PROFILING_STOP( ) ;
    return iReturnCount;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_stop ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.stop" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->stop(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setZoom ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setZoom" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixemap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nZoom    = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setZoom(sPixemap.GetStringValue(), nZoom);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setTransparent ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setTransparent" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap    = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable bTransparent = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setTransparent(sPixelmap.GetStringValue(), bTransparent);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_resetZoom ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.resetZoom" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->resetZoom(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_reload ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.reload" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap    = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable bIgnoreCache = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->reload(sPixelmap.GetStringValue(), bIgnoreCache);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_reduceMemoryUsage ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.reduceMemoryUsage" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->reduceMemoryUsage(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_resumeRendering ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.resumeRendering" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->resumeRendering(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_pauseRendering ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.pauseRendering" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->pauseRendering(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_goToHistoryOffset ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.goToHistoryOffset" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nOffset   = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->goToHistoryOffset(sPixelmap.GetStringValue(), int(nOffset.GetNumberValue()));

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_getZoom ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.getZoom" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

    // Output Parameters 
    S3DX::AIVariable nZoom = SB->getZoom(sPixelmap.GetStringValue());

    // Return output Parameters 
    int iReturnCount = 0 ;
    _pOut[iReturnCount++] = nZoom ;

    S3DX_API_PROFILING_STOP( ) ;
    return iReturnCount;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setFocus ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setFocus" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setFocus(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_goForward ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.goForward" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	if ( SB->canGoForward(sPixelmap.GetStringValue()) )
		SB->goForward(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_getCanGoForward ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.getCanGoForward" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

    // Output Parameters 
    S3DX::AIVariable bVal = SB->canGoForward(sPixelmap.GetStringValue());

    // Return output Parameters 
    int iReturnCount = 0 ;
    _pOut[iReturnCount++] = bVal ;

    S3DX_API_PROFILING_STOP( ) ;
    return iReturnCount;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_goBack ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.goBack" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	if ( SB->canGoBack(sPixelmap.GetStringValue()) )
		SB->goBack(sPixelmap.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_getCanGoBack ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.getCanGoBack" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

    // Output Parameters 
    S3DX::AIVariable bVal = SB->canGoBack(sPixelmap.GetStringValue());

    // Return output Parameters 
    int iReturnCount = 0 ;
    _pOut[iReturnCount++] = bVal ;

    S3DX_API_PROFILING_STOP( ) ;
    return iReturnCount;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_onMouseWheel ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.onMouseWheel" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nDelta    = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->onMouseWheel(sPixelmap.GetStringValue(), nDelta);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_onMouseButtonUp ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.onMouseButtonUp" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nButton   = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->onMouseButtonUp(sPixelmap.GetStringValue(), nButton);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_onMouseButtonDown ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.onMouseButtonDown" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nButton   = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->onMouseButtonDown(sPixelmap.GetStringValue(), nButton);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_onMouseMove ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.onMouseMove" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nX        = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nY        = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->onMouseMove(sPixelmap.GetStringValue(), nX.GetNumberValue(), nY.GetNumberValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_onKeyboardKeyDown ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.onKeyboardKeyDown" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable kKeyCode  = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->onKeyboardKeyDown(sPixelmap.GetStringValue(), static_cast<int>(kKeyCode.GetNumberValue()));

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_loadURL ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.loadURL" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable sURL      = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->loadURL(sPixelmap.GetStringValue(), sURL.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_init ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.init" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sAIModel = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setAIModel(sAIModel.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_createWebView ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.createWebView" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPixelmap = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nWidth    = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;
    S3DX::AIVariable nHeight   = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->createWebView(sPixelmap.GetStringValue(), nWidth, nHeight);

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setAdditionalOption ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setAdditionalOption" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sOption = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setAdditionalOption(sOption.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setUserStylesheet ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setUserStylesheet" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sString = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setUserStylesheet(sString.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_createWebSession ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.createWebSession" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sPath = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->createWebSession(sPath.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableJavascript ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableJavascript" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableJavascript(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableLocalStorage ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableLocalStorage" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableLocalStorage(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enablePlugins ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enablePlugins" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enablePlugins(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableRemoteFonts ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableRemoteFonts" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableRemoteFonts(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableSmoothScrolling ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableSmoothScrolling" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableSmoothScrolling(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableWebAudio ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableWebAudio" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableWebAudio(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableWebGL ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableWebGL" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableWebGL(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableWebSecurity ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableWebSecurity" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableWebSecurity(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableLoadImagesAutomatically ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableLoadImagesAutomatically" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableLoadImagesAutomatically(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableShrinkStandaloneImagesToFit ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableShrinkStandaloneImagesToFit" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableShrinkStandaloneImagesToFit(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableDart ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableDart" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableDart(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableDatabases ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableDatabases" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableDatabases(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableGPUAcceleration ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableGPUAcceleration" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableGPUAcceleration(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_enableAppCache ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.enableAppCache" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEnable = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->enableAppCache(bEnable.GetBooleanValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setDefaultEncoding ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setDefaultEncoding" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable bEncoding = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setDefaultEncoding(bEncoding.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_setProxyConfig ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.setProxyConfig" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable sProxy = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->setProxyConfig(sProxy.GetStringValue());

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------

int Callback_SmanAW_onKeyboardKeyUp ( int _iInCount, const S3DX::AIVariable *_pIn, S3DX::AIVariable *_pOut )
{
    S3DX_API_PROFILING_START( "SmanAW.onKeyboardKeyUp" ) ;

    // Input Parameters 
    int iInputCount = 0 ;
    S3DX::AIVariable kKeyCode = ( iInputCount < _iInCount ) ? _pIn[iInputCount++] : S3DX::AIVariable ( ) ;

	SB->onKeyboardKeyUp(static_cast<int>(kKeyCode.GetNumberValue()));

    S3DX_API_PROFILING_STOP( ) ;
    return 0;
}

//-----------------------------------------------------------------------------
//  Constructor / Destructor
//-----------------------------------------------------------------------------

SmanAWPackage::SmanAWPackage ( )
{
#ifdef S3DX_DLL
    SmanAW.pfn_SmanAW_shutdown                          = Callback_SmanAW_shutdown                          ;
    SmanAW.pfn_SmanAW_zoomOut                           = Callback_SmanAW_zoomOut                           ;
    SmanAW.pfn_SmanAW_zoomIn                            = Callback_SmanAW_zoomIn                            ;
    SmanAW.pfn_SmanAW_getURL                            = Callback_SmanAW_getURL                            ;
    SmanAW.pfn_SmanAW_getTitle                          = Callback_SmanAW_getTitle                          ;
    SmanAW.pfn_SmanAW_stop                              = Callback_SmanAW_stop                              ;
    SmanAW.pfn_SmanAW_setZoom                           = Callback_SmanAW_setZoom                           ;
    SmanAW.pfn_SmanAW_setTransparent                    = Callback_SmanAW_setTransparent                    ;
    SmanAW.pfn_SmanAW_resetZoom                         = Callback_SmanAW_resetZoom                         ;
    SmanAW.pfn_SmanAW_reload                            = Callback_SmanAW_reload                            ;
    SmanAW.pfn_SmanAW_reduceMemoryUsage                 = Callback_SmanAW_reduceMemoryUsage                 ;
    SmanAW.pfn_SmanAW_resumeRendering                   = Callback_SmanAW_resumeRendering                   ;
    SmanAW.pfn_SmanAW_pauseRendering                    = Callback_SmanAW_pauseRendering                    ;
    SmanAW.pfn_SmanAW_goToHistoryOffset                 = Callback_SmanAW_goToHistoryOffset                 ;
    SmanAW.pfn_SmanAW_getZoom                           = Callback_SmanAW_getZoom                           ;
    SmanAW.pfn_SmanAW_setFocus                          = Callback_SmanAW_setFocus                          ;
    SmanAW.pfn_SmanAW_goForward                         = Callback_SmanAW_goForward                         ;
    SmanAW.pfn_SmanAW_getCanGoForward                   = Callback_SmanAW_getCanGoForward                   ;
    SmanAW.pfn_SmanAW_goBack                            = Callback_SmanAW_goBack                            ;
    SmanAW.pfn_SmanAW_getCanGoBack                      = Callback_SmanAW_getCanGoBack                      ;
    SmanAW.pfn_SmanAW_onMouseWheel                      = Callback_SmanAW_onMouseWheel                      ;
    SmanAW.pfn_SmanAW_onMouseButtonUp                   = Callback_SmanAW_onMouseButtonUp                   ;
    SmanAW.pfn_SmanAW_onMouseButtonDown                 = Callback_SmanAW_onMouseButtonDown                 ;
    SmanAW.pfn_SmanAW_onMouseMove                       = Callback_SmanAW_onMouseMove                       ;
    SmanAW.pfn_SmanAW_onKeyboardKeyDown                 = Callback_SmanAW_onKeyboardKeyDown                 ;
    SmanAW.pfn_SmanAW_loadURL                           = Callback_SmanAW_loadURL                           ;
    SmanAW.pfn_SmanAW_init                              = Callback_SmanAW_init                              ;
    SmanAW.pfn_SmanAW_createWebView                     = Callback_SmanAW_createWebView                     ;
    SmanAW.pfn_SmanAW_setAdditionalOption               = Callback_SmanAW_setAdditionalOption               ;
    SmanAW.pfn_SmanAW_setUserStylesheet                 = Callback_SmanAW_setUserStylesheet                 ;
    SmanAW.kFocusedElementType_None            = 0 ; 
    SmanAW.kFocusedElementType_Text            = 1 ; 
    SmanAW.kFocusedElementType_Link            = 2 ; 
    SmanAW.kFocusedElementType_Input           = 3 ; 
    SmanAW.kFocusedElementType_TextInput       = 4 ; 
    SmanAW.kFocusedElementType_EditableContent = 5 ; 
    SmanAW.kFocusedElementType_Plugin          = 6 ; 
    SmanAW.kFocusedElementType_Other           = 7 ; 
    SmanAW.kCursor_Pointer                  = 0 ; 
    SmanAW.kCursor_Cross                    = 1 ; 
    SmanAW.kCursor_Hand                     = 2 ; 
    SmanAW.kCursor_IBeam                    = 3 ; 
    SmanAW.kCursor_Wait                     = 4 ; 
    SmanAW.kCursor_Help                     = 5 ; 
    SmanAW.kCursor_EastResize               = 6 ; 
    SmanAW.kCursor_NorthResize              = 7 ; 
    SmanAW.kCursor_NorthEastResize          = 8 ; 
    SmanAW.kCursor_NorthWestResize          = 9 ; 
    SmanAW.kCursor_SouthResize              = 10 ; 
    SmanAW.kCursor_SouthEastResize          = 11 ; 
    SmanAW.kCursor_SouthWestResize          = 12 ; 
    SmanAW.kCursor_WestResize               = 13 ; 
    SmanAW.kCursor_NorthSouthResize         = 14 ; 
    SmanAW.kCursor_EastWestResize           = 15 ; 
    SmanAW.kCursor_NorthEastSouthWestResize = 16 ; 
    SmanAW.kCursor_NorthWestSouthEastResize = 17 ; 
    SmanAW.kCursor_ColumnResize             = 18 ; 
    SmanAW.kCursor_RowResize                = 19 ; 
    SmanAW.kCursor_MiddlePanning            = 20 ; 
    SmanAW.kCursor_EastPanning              = 21 ; 
    SmanAW.kCursor_NorthPanning             = 22 ; 
    SmanAW.kCursor_NorthEastPanning         = 23 ; 
    SmanAW.kCursor_NorthWestPanning         = 24 ; 
    SmanAW.kCursor_SouthPanning             = 25 ; 
    SmanAW.kCursor_SouthEastPanning         = 26 ; 
    SmanAW.kCursor_SouthWestPanning         = 27 ; 
    SmanAW.kCursor_WestPanning              = 28 ; 
    SmanAW.kCursor_Move                     = 29 ; 
    SmanAW.kCursor_VerticalText             = 30 ; 
    SmanAW.kCursor_Cell                     = 31 ; 
    SmanAW.kCursor_ContextMenu              = 32 ; 
    SmanAW.kCursor_Alias                    = 33 ; 
    SmanAW.kCursor_Progress                 = 34 ; 
    SmanAW.kCursor_NoDrop                   = 35 ; 
    SmanAW.kCursor_Copy                     = 36 ; 
    SmanAW.kCursor_None                     = 37 ; 
    SmanAW.kCursor_NotAllowed               = 38 ; 
    SmanAW.kCursor_ZoomIn                   = 39 ; 
    SmanAW.kCursor_ZoomOut                  = 40 ; 
    SmanAW.kCursor_Grab                     = 41 ; 
    SmanAW.kCursor_Grabbing                 = 42 ; 
    SmanAW.kCursor_Custom                   = 43 ; 
    SmanAW.pfn_SmanAW_createWebSession                  = Callback_SmanAW_createWebSession                  ;
    SmanAW.pfn_SmanAW_enableJavascript                  = Callback_SmanAW_enableJavascript                  ;
    SmanAW.pfn_SmanAW_enableLocalStorage                = Callback_SmanAW_enableLocalStorage                ;
    SmanAW.pfn_SmanAW_enablePlugins                     = Callback_SmanAW_enablePlugins                     ;
    SmanAW.pfn_SmanAW_enableRemoteFonts                 = Callback_SmanAW_enableRemoteFonts                 ;
    SmanAW.pfn_SmanAW_enableSmoothScrolling             = Callback_SmanAW_enableSmoothScrolling             ;
    SmanAW.pfn_SmanAW_enableWebAudio                    = Callback_SmanAW_enableWebAudio                    ;
    SmanAW.pfn_SmanAW_enableWebGL                       = Callback_SmanAW_enableWebGL                       ;
    SmanAW.pfn_SmanAW_enableWebSecurity                 = Callback_SmanAW_enableWebSecurity                 ;
    SmanAW.pfn_SmanAW_enableLoadImagesAutomatically     = Callback_SmanAW_enableLoadImagesAutomatically     ;
    SmanAW.pfn_SmanAW_enableShrinkStandaloneImagesToFit = Callback_SmanAW_enableShrinkStandaloneImagesToFit ;
    SmanAW.pfn_SmanAW_enableDart                        = Callback_SmanAW_enableDart                        ;
    SmanAW.pfn_SmanAW_enableDatabases                   = Callback_SmanAW_enableDatabases                   ;
    SmanAW.pfn_SmanAW_enableGPUAcceleration             = Callback_SmanAW_enableGPUAcceleration             ;
    SmanAW.pfn_SmanAW_enableAppCache                    = Callback_SmanAW_enableAppCache                    ;
    SmanAW.pfn_SmanAW_setDefaultEncoding                = Callback_SmanAW_setDefaultEncoding                ;
    SmanAW.pfn_SmanAW_setProxyConfig                    = Callback_SmanAW_setProxyConfig                    ;
    SmanAW.pfn_SmanAW_onKeyboardKeyUp     = Callback_SmanAW_onKeyboardKeyUp     ;
	
#endif
}

//-----------------------------------------------------------------------------

SmanAWPackage::~SmanAWPackage ( )
{

}

//-----------------------------------------------------------------------------
//  Functions table
//-----------------------------------------------------------------------------

static S3DX::AIFunction aMyFunctions [ ] =
{
    { "shutdown"                         , Callback_SmanAW_shutdown                         , ""      , ""                          , "Shut down the plugin."                                                                                                                                                                                                                                                                                                                                                         , 0 }, 
    { "zoomOut"                          , Callback_SmanAW_zoomOut                          , ""      , "sPixelmap"                 , "Zooms out the page by 20%. (This is full-page zoom, decreases size of text, CSS, and pictures similar to zoom in Chrome)."                                                                                                                                                                                                                                                     , 0 }, 
    { "zoomIn"                           , Callback_SmanAW_zoomIn                           , ""      , "sPixelmap"                 , "Zooms into the page by 20%. (This is full-page zoom, increases size of text, CSS, and pictures similar to zoom in Chrome)."                                                                                                                                                                                                                                                    , 0 }, 
    { "getURL"                           , Callback_SmanAW_getURL                           , "sURL"  , "sPixelmap"                 , "Get the current page URL."                                                                                                                                                                                                                                                                                                                                                     , 0 }, 
    { "getTitle"                         , Callback_SmanAW_getTitle                         , "sTitle", "sPixelmap"                 , "Get the current page title."                                                                                                                                                                                                                                                                                                                                                   , 0 }, 
    { "stop"                             , Callback_SmanAW_stop                             , ""     , "sPixelmap"                 , "Stop all page loads."                                                                                                                                                                                                                                                                                                                                                          , 0 }, 
    { "setZoom"                          , Callback_SmanAW_setZoom                          , ""     , "sPixemap, nZoom"           , "Similar to ZoomIn and ZoomOut except you can specify an arbitrary percentage between 25% and 500%."                                                                                                                                                                                                                                                                            , 0 }, 
    { "setTransparent"                   , Callback_SmanAW_setTransparent                   , ""     , "sPixelmap, bTransparent"   , "Set the background of the pixelmap to be transparent. You must call this if you intend to preserve the transparency of a page (eg, your body element has 'background-color: transparent;' or some other semi-translucent background). Please note that the alpha channel is premultiplied.\nIf you never call this, the view will have an opaque, white background by default.", 0 }, 
    { "resetZoom"                        , Callback_SmanAW_resetZoom                        , ""     , "sPixelmap"                 , "Reset the page zoom to 100%."                                                                                                                                                                                                                                                                                   , 0 }, 
    { "reload"                           , Callback_SmanAW_reload                           , ""     , "sPixelmap, bIgnoreCache"   , "Reload the current page. bIgnoreCache: Whether or not we force cached resources to to be reloaded as well."                                                                                                                                                                                                     , 0 }, 
    { "reduceMemoryUsage"                , Callback_SmanAW_reduceMemoryUsage                , ""     , "sPixelmap"                 , "Forces V8 to release as much memory as possible (collects garbage, dumps cached structures, etc) and also clears WebKit cache. This helps to reduce memory accumulated within the process associated with this pixelmap."                                                                                       , 0 }, 
    { "resumeRendering"                  , Callback_SmanAW_resumeRendering                  , ""     , "sPixelmap"                 , "Resume the renderer."                                                                                                                                                                                                                                                                                           , 0 }, 
    { "pauseRendering"                   , Callback_SmanAW_pauseRendering                   , ""     , "sPixelmap"                 , "Pause the renderer. All rendering is done asynchronously in a separate process so you should call this when your pixelmap is hidden to save some CPU cycles."                                                                                                                                                   , 0 }, 
    { "goToHistoryOffset"                , Callback_SmanAW_goToHistoryOffset                , ""     , "sPixelmap, nOffset"        , "Go to a specific offset in history (for example, -1 would go back one page)."                                                                                                                                                                                                                                   , 0 }, 
    { "getZoom"                          , Callback_SmanAW_getZoom                          , "nZoom", "sPixelmap"                 , "Get the current page zoom in percent."                                                                                                                                                                                                                                                                          , 0 }, 
    { "setFocus"                         , Callback_SmanAW_setFocus                         , ""    , "sPixelmap"                 , "Give the appearance of input focus."                                                                                                                                                                                                                                                                            , 0 }, 
    { "goForward"                        , Callback_SmanAW_goForward                        , ""    , "sPixelmap"                 , "Go forward one page in history."                                                                                                                                                                                                                                                                                , 0 }, 
    { "getCanGoForward"                  , Callback_SmanAW_getCanGoForward                  , "bVal", "sPixelmap"                 , "Check whether or not we can go forward in history."                                                                                                                                                                                                                                                             , 0 }, 
    { "goBack"                           , Callback_SmanAW_goBack                           , ""    , "sPixelmap"                 , "Go back one page in history."                                                                                                                                                                                                                                                                                   , 0 }, 
    { "getCanGoBack"                     , Callback_SmanAW_getCanGoBack                     , "bVal", "sPixelmap"                 , "Check whether or not we can go back in history."                                                                                                                                                                                                                                                                , 0 }, 
    { "onMouseWheel"                     , Callback_SmanAW_onMouseWheel                     , "", "sPixelmap, nDelta"         , "Call this handler when the mouse wheel was used."                                                                                                                                                                                                                                                               , 0 }, 
    { "onMouseButtonUp"                  , Callback_SmanAW_onMouseButtonUp                  , "", "sPixelmap, nButton"        , "Call this handler when a mouse button was released."                                                                                                                                                                                                                                                            , 0 }, 
    { "onMouseButtonDown"                , Callback_SmanAW_onMouseButtonDown                , "", "sPixelmap, nButton"        , "Call this handler when a mouse button was pressed."                                                                                                                                                                                                                                                             , 0 }, 
    { "onMouseMove"                      , Callback_SmanAW_onMouseMove                      , "", "sPixelmap, nX, nY"         , "Call this handler when a mouse was moved."                                                                                                                                                                                                                                                                      , 0 }, 
    { "onKeyboardKeyDown"                , Callback_SmanAW_onKeyboardKeyDown                , "", "sPixelmap, kKeyCode"       , "Call this handler when a key of the keyboard is pressed."                                                                                                                                                                                                                                                       , 0 }, 
    { "loadURL"                          , Callback_SmanAW_loadURL                          , "", "sPixelmap, sURL"           , "Begin loading a certain URL asynchronously."                                                                                                                                                                                                                                                                    , 0 }, 
    { "init"                             , Callback_SmanAW_init                             , "", "sAIModel"                  , "Initialise Awesomium. Callbacks will be sent to the User AI Model sAIModel."                                                                                                                                                                                                                                    , 0 }, 
    { "createWebView"                    , Callback_SmanAW_createWebView                    , "", "sPixelmap, nWidth, nHeight", "Create a WebView which will be painted on sPixelmap."                                                                                                                                                                                                                                                           , 0 }, 
    { "setAdditionalOption"              , Callback_SmanAW_setAdditionalOption              , "", "sOption"            , "Additional options for Chromium (this is for advanced users only, use these at your own risk). See https://gist.github.com/2999122 for a list of compatible options. Each option should be formatted as '--switch=value' or just '--switch'. For example: `'--use-gl=desktop'` to force native WebGL rendering.", 0 }, 
    { "setUserStylesheet"                , Callback_SmanAW_setUserStylesheet                , "", "sString"            , "User-defined CSS to be applied to all web-pages. This is useful for overriding default styles. (Default: empty) This is NOT a filepath, you should pass a raw CSS string. This value is global to ALL WebViews."                                                                                           , 0 }, 
    { "createWebSession"                 , Callback_SmanAW_createWebSession                 , "", "sPath"              , "Create a WebSession which will be used to store all user-data (such as cookies, cache, certificates, local databases, etc).\nsPath is the directory path to store the data (will create the path if it doesn't exist, or load it if it already exists). Specify an empty string to use an in-memory store.", 0 }, 
    { "enableJavascript"                 , Callback_SmanAW_enableJavascript                 , "", "bEnable"            , "Whether or not JavaScript should be enabled. (Default: true)"                                                                                                                               , 0 }, 
    { "enableLocalStorage"               , Callback_SmanAW_enableLocalStorage               , "", "bEnable"            , "Whether or not HTML5 Local Storage should be enabled. (Default: true)"                                                                                                                      , 0 }, 
    { "enablePlugins"                    , Callback_SmanAW_enablePlugins                    , "", "bEnable"            , "Whether or not plugins (Flash, Silverlight) should be enabled. (Default: true)"                                                                                                             , 0 }, 
    { "enableRemoteFonts"                , Callback_SmanAW_enableRemoteFonts                , "", "bEnable"            , "Whether or not remote fonts should be enabled. (Default: true)"                                                                                                                             , 0 }, 
    { "enableSmoothScrolling"            , Callback_SmanAW_enableSmoothScrolling            , "", "bEnable"            , "Whether or not smooth scrolling should be enabled. (Default: false)"                                                                                                                        , 0 }, 
    { "enableWebAudio"                   , Callback_SmanAW_enableWebAudio                   , "", "bEnable"            , "Whether or not HTML5 WebAudio should be enabled. (Default: true)"                                                                                                                           , 0 }, 
    { "enableWebGL"                      , Callback_SmanAW_enableWebGL                      , "", "bEnable"            , "Whether or not HTML5 WebGL (experimental) should be enabled. (Default: false)"                                                                                                              , 0 }, 
    { "enableWebSecurity"                , Callback_SmanAW_enableWebSecurity                , "", "bEnable"            , "Whether or not web security should be enabled (prevents cross-domain requests, for example). (Default: true)"                                                                               , 0 }, 
    { "enableLoadImagesAutomatically"    , Callback_SmanAW_enableLoadImagesAutomatically    , "", "bEnable"            , "Whether or not images should be loaded automatically on the page. (Default: true)"                                                                                                          , 0 }, 
    { "enableShrinkStandaloneImagesToFit", Callback_SmanAW_enableShrinkStandaloneImagesToFit, "", "bEnable"            , "Whether or not standalone images should be shrunk to fit the view. (Default: true)"                                                                                                         , 0 }, 
    { "enableDart"                       , Callback_SmanAW_enableDart                       , "", "bEnable"            , "Whether or not Dart (experimental) should be enabled. (Default: true)"                                                                                                                      , 0 }, 
    { "enableDatabases"                  , Callback_SmanAW_enableDatabases                  , "", "bEnable"            , "Whether or not HTML5 Databases should be enabled. (Default: false)"                                                                                                                         , 0 }, 
    { "enableGPUAcceleration"            , Callback_SmanAW_enableGPUAcceleration            , "", "bEnable"            , "Whether or not GPU accelerated compositing (experimental) should be enabled. This is only compatible with windowed WebViews at this time. (Default: false)"                                 , 0 }, 
    { "enableAppCache"                   , Callback_SmanAW_enableAppCache                   , "", "bEnable"            , "Whether or not HTML5 App Cache should be enabled. (Default: true)"                                                                                                                          , 0 }, 
    { "setDefaultEncoding"               , Callback_SmanAW_setDefaultEncoding               , "", "bEncoding"          , "The default encoding for the browser (Default: 'iso-8859-1')"                                                                                                                               , 0 }, 
    { "setProxyConfig"                   , Callback_SmanAW_setProxyConfig                   , "", "sProxy"             , "Can either be: 'auto' (use the OS proxy config), 'none' (ignore proxy settings), or you can specify a hardcoded proxy config string, for example: 'myproxyserver.com:80'. (Default: 'auto')", 0 }, 
    { "onKeyboardKeyUp"    , Callback_SmanAW_onKeyboardKeyUp    , "", "kKeyCode" , "Call this handler when a key of the keyboard is released."      , 0 }
    //{ NULL, NULL, NULL, NULL, NULL, 0}
} ;

//-----------------------------------------------------------------------------
//  Constants table
//-----------------------------------------------------------------------------

static S3DX::AIConstant aMyConstants [ ] =
{
    { "kFocusedElementType_None"           , 0 , "Nothing is focused"              , 0 }, 
    { "kFocusedElementType_Text"           , 1 , "A text-node is focused"          , 0 }, 
    { "kFocusedElementType_Link"           , 2 , "A link is focused"               , 0 }, 
    { "kFocusedElementType_Input"          , 3 , "An input element is focused"     , 0 }, 
    { "kFocusedElementType_TextInput"      , 4 , "A text-input element is focused" , 0 }, 
    { "kFocusedElementType_EditableContent", 5 , "Some editable content is focused", 0 }, 
    { "kFocusedElementType_Plugin"         , 6 , "A plugin (eg, Flash) is focused" , 0 }, 
    { "kFocusedElementType_Other"          , 7 , "Some other element is focused"   , 0 }, 
    { "kCursor_Pointer"                 , 0 , "", 0 }, 
    { "kCursor_Cross"                   , 1 , "", 0 }, 
    { "kCursor_Hand"                    , 2 , "", 0 }, 
    { "kCursor_IBeam"                   , 3 , "", 0 }, 
    { "kCursor_Wait"                    , 4 , "", 0 }, 
    { "kCursor_Help"                    , 5 , "", 0 }, 
    { "kCursor_EastResize"              , 6 , "", 0 }, 
    { "kCursor_NorthResize"             , 7 , "", 0 }, 
    { "kCursor_NorthEastResize"         , 8 , "", 0 }, 
    { "kCursor_NorthWestResize"         , 9 , "", 0 }, 
    { "kCursor_SouthResize"             , 10, "", 0 }, 
    { "kCursor_SouthEastResize"         , 11, "", 0 }, 
    { "kCursor_SouthWestResize"         , 12, "", 0 }, 
    { "kCursor_WestResize"              , 13, "", 0 }, 
    { "kCursor_NorthSouthResize"        , 14, "", 0 }, 
    { "kCursor_EastWestResize"          , 15, "", 0 }, 
    { "kCursor_NorthEastSouthWestResize", 16, "", 0 }, 
    { "kCursor_NorthWestSouthEastResize", 17, "", 0 }, 
    { "kCursor_ColumnResize"            , 18, "", 0 }, 
    { "kCursor_RowResize"               , 19, "", 0 }, 
    { "kCursor_MiddlePanning"           , 20, "", 0 }, 
    { "kCursor_EastPanning"             , 21, "", 0 }, 
    { "kCursor_NorthPanning"            , 22, "", 0 }, 
    { "kCursor_NorthEastPanning"        , 23, "", 0 }, 
    { "kCursor_NorthWestPanning"        , 24, "", 0 }, 
    { "kCursor_SouthPanning"            , 25, "", 0 }, 
    { "kCursor_SouthEastPanning"        , 26, "", 0 }, 
    { "kCursor_SouthWestPanning"        , 27, "", 0 }, 
    { "kCursor_WestPanning"             , 28, "", 0 }, 
    { "kCursor_Move"                    , 29, "", 0 }, 
    { "kCursor_VerticalText"            , 30, "", 0 }, 
    { "kCursor_Cell"                    , 31, "", 0 }, 
    { "kCursor_ContextMenu"             , 32, "", 0 }, 
    { "kCursor_Alias"                   , 33, "", 0 }, 
    { "kCursor_Progress"                , 34, "", 0 }, 
    { "kCursor_NoDrop"                  , 35, "", 0 }, 
    { "kCursor_Copy"                    , 36, "", 0 }, 
    { "kCursor_None"                    , 37, "", 0 }, 
    { "kCursor_NotAllowed"              , 38, "", 0 }, 
    { "kCursor_ZoomIn"                  , 39, "", 0 }, 
    { "kCursor_ZoomOut"                 , 40, "", 0 }, 
    { "kCursor_Grab"                    , 41, "", 0 }, 
    { "kCursor_Grabbing"                , 42, "", 0 }, 
    { "kCursor_Custom"                  , 43, "", 0 }	
    //{ NULL, 0, NULL, 0}
} ;

//-----------------------------------------------------------------------------
//  Accessors
//-----------------------------------------------------------------------------

const char *SmanAWPackage::GetName ( ) const
{
    return "SmanAW" ;
}

//-----------------------------------------------------------------------------

S3DX::uint32 SmanAWPackage::GetFunctionCount ( ) const
{
	if ( aMyFunctions[0].pName == NULL )
	{
		return 0 ;
	}
	else
	{
		return sizeof( aMyFunctions ) / sizeof( S3DX::AIFunction ) ;
	}
}

//-----------------------------------------------------------------------------

S3DX::uint32 SmanAWPackage::GetConstantCount ( ) const
{
	if ( aMyConstants[0].pName == NULL )
	{
		return 0 ;
	}
	else
	{
		return sizeof( aMyConstants ) / sizeof( S3DX::AIConstant ) ;
	}
}

//-----------------------------------------------------------------------------

const S3DX::AIFunction *SmanAWPackage::GetFunctionAt ( S3DX::uint32 _iIndex ) const
{
    return &aMyFunctions[ _iIndex ] ;
}

//-----------------------------------------------------------------------------

const S3DX::AIConstant *SmanAWPackage::GetConstantAt ( S3DX::uint32 _iIndex ) const
{
    return &aMyConstants[ _iIndex ] ;
}
