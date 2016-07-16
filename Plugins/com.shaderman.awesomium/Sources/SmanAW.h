//-----------------------------------------------------------------------------
#ifndef __SmanAW_h__
#define __SmanAW_h__
//-----------------------------------------------------------------------------
#include "S3DXAIPackage.h"
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Package declaration
//-----------------------------------------------------------------------------
class SmanAWPackage : public S3DX::AIPackage
{
public :

    //-------------------------------------------------------------------------
    //  Constructor / Destructor
	//-------------------------------------------------------------------------

	SmanAWPackage         ( ) ;
                               ~SmanAWPackage         ( ) ;

	//-------------------------------------------------------------------------
    //  Accessors
	//-------------------------------------------------------------------------

    const   char               *GetName             ( ) const ;
            S3DX::uint32        GetFunctionCount    ( ) const ;
            S3DX::uint32        GetConstantCount    ( ) const ;
    const   S3DX::AIFunction   *GetFunctionAt       ( S3DX::uint32 _iIndex ) const ;
    const   S3DX::AIConstant   *GetConstantAt       ( S3DX::uint32 _iIndex ) const ;

} ;

//-----------------------------------------------------------------------------
// Package API declaration
//-----------------------------------------------------------------------------
class SmanAWAPI
{
public :

    //-------------------------------------------------------------------------
    //  API Constructor
	//-------------------------------------------------------------------------
                                SmanAWAPI       ( ) 
                                {
                                    pfn_SmanAW_shutdown                          = NULL ;
                                    pfn_SmanAW_zoomOut                           = NULL ;
                                    pfn_SmanAW_zoomIn                            = NULL ;
                                    pfn_SmanAW_getURL                            = NULL ;
                                    pfn_SmanAW_getTitle                          = NULL ;
                                    pfn_SmanAW_stop                              = NULL ;
                                    pfn_SmanAW_setZoom                           = NULL ;
                                    pfn_SmanAW_setTransparent                    = NULL ;
                                    pfn_SmanAW_resetZoom                         = NULL ;
                                    pfn_SmanAW_reload                            = NULL ;
                                    pfn_SmanAW_reduceMemoryUsage                 = NULL ;
                                    pfn_SmanAW_resumeRendering                   = NULL ;
                                    pfn_SmanAW_pauseRendering                    = NULL ;
                                    pfn_SmanAW_goToHistoryOffset                 = NULL ;
                                    pfn_SmanAW_getZoom                           = NULL ;
                                    pfn_SmanAW_setFocus                          = NULL ;
                                    pfn_SmanAW_goForward                         = NULL ;
                                    pfn_SmanAW_getCanGoForward                   = NULL ;
                                    pfn_SmanAW_goBack                            = NULL ;
                                    pfn_SmanAW_getCanGoBack                      = NULL ;
                                    pfn_SmanAW_onMouseWheel                      = NULL ;
                                    pfn_SmanAW_onMouseButtonUp                   = NULL ;
                                    pfn_SmanAW_onMouseButtonDown                 = NULL ;
                                    pfn_SmanAW_onMouseMove                       = NULL ;
                                    pfn_SmanAW_onKeyboardKeyDown                 = NULL ;
                                    pfn_SmanAW_loadURL                           = NULL ;
                                    pfn_SmanAW_init                              = NULL ;
                                    pfn_SmanAW_createWebView                     = NULL ;
                                    pfn_SmanAW_setAdditionalOption               = NULL ;
                                    pfn_SmanAW_setUserStylesheet                 = NULL ;
                                    pfn_SmanAW_createWebSession                  = NULL ;
                                    pfn_SmanAW_enableJavascript                  = NULL ;
                                    pfn_SmanAW_enableLocalStorage                = NULL ;
                                    pfn_SmanAW_enablePlugins                     = NULL ;
                                    pfn_SmanAW_enableRemoteFonts                 = NULL ;
                                    pfn_SmanAW_enableSmoothScrolling             = NULL ;
                                    pfn_SmanAW_enableWebAudio                    = NULL ;
                                    pfn_SmanAW_enableWebGL                       = NULL ;
                                    pfn_SmanAW_enableWebSecurity                 = NULL ;
                                    pfn_SmanAW_enableLoadImagesAutomatically     = NULL ;
                                    pfn_SmanAW_enableShrinkStandaloneImagesToFit = NULL ;
                                    pfn_SmanAW_enableDart                        = NULL ;
                                    pfn_SmanAW_enableDatabases                   = NULL ;
                                    pfn_SmanAW_enableGPUAcceleration             = NULL ;
                                    pfn_SmanAW_enableAppCache                    = NULL ;
                                    pfn_SmanAW_setDefaultEncoding                = NULL ;
                                    pfn_SmanAW_setProxyConfig                    = NULL ;
                                    pfn_SmanAW_onKeyboardKeyUp     = NULL ;
                                    pfn_SmanAW_init     = NULL ;

                                }

	//-------------------------------------------------------------------------
	//  API Callbacks 
	//-------------------------------------------------------------------------

    S3DX::AICallback        pfn_SmanAW_shutdown ;
    S3DX::AICallback        pfn_SmanAW_zoomOut ;
    S3DX::AICallback        pfn_SmanAW_zoomIn ;
    S3DX::AICallback        pfn_SmanAW_getURL ;
    S3DX::AICallback        pfn_SmanAW_getTitle ;
    S3DX::AICallback        pfn_SmanAW_stop ;
    S3DX::AICallback        pfn_SmanAW_setZoom ;
    S3DX::AICallback        pfn_SmanAW_setTransparent ;
    S3DX::AICallback        pfn_SmanAW_resetZoom ;
    S3DX::AICallback        pfn_SmanAW_reload ;
    S3DX::AICallback        pfn_SmanAW_reduceMemoryUsage ;
    S3DX::AICallback        pfn_SmanAW_resumeRendering ;
    S3DX::AICallback        pfn_SmanAW_pauseRendering ;
    S3DX::AICallback        pfn_SmanAW_goToHistoryOffset ;
    S3DX::AICallback        pfn_SmanAW_getZoom ;
    S3DX::AICallback        pfn_SmanAW_setFocus ;
    S3DX::AICallback        pfn_SmanAW_goForward ;
    S3DX::AICallback        pfn_SmanAW_getCanGoForward ;
    S3DX::AICallback        pfn_SmanAW_goBack ;
    S3DX::AICallback        pfn_SmanAW_getCanGoBack ;
    S3DX::AICallback        pfn_SmanAW_onMouseWheel ;
    S3DX::AICallback        pfn_SmanAW_onMouseButtonUp ;
    S3DX::AICallback        pfn_SmanAW_onMouseButtonDown ;
    S3DX::AICallback        pfn_SmanAW_onMouseMove ;
    S3DX::AICallback        pfn_SmanAW_onKeyboardKeyDown ;
    S3DX::AICallback        pfn_SmanAW_loadURL ;
    S3DX::AICallback        pfn_SmanAW_init ;
    S3DX::AICallback        pfn_SmanAW_createWebView ;
    S3DX::AICallback        pfn_SmanAW_setAdditionalOption ;
    S3DX::AICallback        pfn_SmanAW_setUserStylesheet ;
    S3DX::AICallback        pfn_SmanAW_createWebSession ;
    S3DX::AICallback        pfn_SmanAW_enableJavascript ;
    S3DX::AICallback        pfn_SmanAW_enableLocalStorage ;
    S3DX::AICallback        pfn_SmanAW_enablePlugins ;
    S3DX::AICallback        pfn_SmanAW_enableRemoteFonts ;
    S3DX::AICallback        pfn_SmanAW_enableSmoothScrolling ;
    S3DX::AICallback        pfn_SmanAW_enableWebAudio ;
    S3DX::AICallback        pfn_SmanAW_enableWebGL ;
    S3DX::AICallback        pfn_SmanAW_enableWebSecurity ;
    S3DX::AICallback        pfn_SmanAW_enableLoadImagesAutomatically ;
    S3DX::AICallback        pfn_SmanAW_enableShrinkStandaloneImagesToFit ;
    S3DX::AICallback        pfn_SmanAW_enableDart ;
    S3DX::AICallback        pfn_SmanAW_enableDatabases ;
    S3DX::AICallback        pfn_SmanAW_enableGPUAcceleration ;
    S3DX::AICallback        pfn_SmanAW_enableAppCache ;
    S3DX::AICallback        pfn_SmanAW_setDefaultEncoding ;
    S3DX::AICallback        pfn_SmanAW_setProxyConfig ;
    S3DX::AICallback        pfn_SmanAW_onKeyboardKeyUp ;

	//-------------------------------------------------------------------------
	//  API Functions 
	//-------------------------------------------------------------------------

    inline void                 shutdown                          (  ) { if ( pfn_SmanAW_shutdown ) pfn_SmanAW_shutdown ( 0, NULL, NULL );  }
    inline void                 zoomOut                           ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_zoomOut ) pfn_SmanAW_zoomOut ( 1, vIn, NULL );  }
    inline void                 zoomIn                            ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_zoomIn ) pfn_SmanAW_zoomIn ( 1, vIn, NULL );  }
    inline S3DX::AIVariable     getURL                            ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; S3DX::AIVariable vOut ; if ( pfn_SmanAW_getURL ) pfn_SmanAW_getURL ( 1, vIn, &vOut ); return vOut ; }
    inline S3DX::AIVariable     getTitle                          ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; S3DX::AIVariable vOut ; if ( pfn_SmanAW_getTitle ) pfn_SmanAW_getTitle ( 1, vIn, &vOut ); return vOut ; }
    inline void                 stop                              ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_stop ) pfn_SmanAW_stop ( 1, vIn, NULL );  }
    inline void                 setZoom                           ( const S3DX::AIVariable& sPixemap, const S3DX::AIVariable& nZoom ) { S3DX_DECLARE_VIN_02( sPixemap, nZoom ) ; if ( pfn_SmanAW_setZoom ) pfn_SmanAW_setZoom ( 2, vIn, NULL );  }
    inline void                 setTransparent                    ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& bTransparent ) { S3DX_DECLARE_VIN_02( sPixelmap, bTransparent ) ; if ( pfn_SmanAW_setTransparent ) pfn_SmanAW_setTransparent ( 2, vIn, NULL );  }
    inline void                 resetZoom                         ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_resetZoom ) pfn_SmanAW_resetZoom ( 1, vIn, NULL );  }
    inline void                 reload                            ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& bIgnoreCache ) { S3DX_DECLARE_VIN_02( sPixelmap, bIgnoreCache ) ; if ( pfn_SmanAW_reload ) pfn_SmanAW_reload ( 2, vIn, NULL );  }
    inline void                 reduceMemoryUsage                 ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_reduceMemoryUsage ) pfn_SmanAW_reduceMemoryUsage ( 1, vIn, NULL );  }
    inline void                 resumeRendering                   ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_resumeRendering ) pfn_SmanAW_resumeRendering ( 1, vIn, NULL );  }
    inline void                 pauseRendering                    ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_pauseRendering ) pfn_SmanAW_pauseRendering ( 1, vIn, NULL );  }
    inline void                 goToHistoryOffset                 ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& nOffset ) { S3DX_DECLARE_VIN_02( sPixelmap, nOffset ) ; if ( pfn_SmanAW_goToHistoryOffset ) pfn_SmanAW_goToHistoryOffset ( 2, vIn, NULL );  }
    inline S3DX::AIVariable     getZoom                           ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; S3DX::AIVariable vOut ; if ( pfn_SmanAW_getZoom ) pfn_SmanAW_getZoom ( 1, vIn, &vOut ); return vOut ; }
    inline void                 setFocus                          ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_setFocus ) pfn_SmanAW_setFocus ( 1, vIn, NULL );  }
    inline void                 goForward                         ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_goForward ) pfn_SmanAW_goForward ( 1, vIn, NULL );  }
    inline S3DX::AIVariable     getCanGoForward                   ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; S3DX::AIVariable vOut ; if ( pfn_SmanAW_getCanGoForward ) pfn_SmanAW_getCanGoForward ( 1, vIn, &vOut ); return vOut ; }
    inline void                 goBack                            ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; if ( pfn_SmanAW_goBack ) pfn_SmanAW_goBack ( 1, vIn, NULL );  }
    inline S3DX::AIVariable     getCanGoBack                      ( const S3DX::AIVariable& sPixelmap ) { S3DX_DECLARE_VIN_01( sPixelmap ) ; S3DX::AIVariable vOut ; if ( pfn_SmanAW_getCanGoBack ) pfn_SmanAW_getCanGoBack ( 1, vIn, &vOut ); return vOut ; }
    inline void                 onMouseWheel                      ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& nDelta ) { S3DX_DECLARE_VIN_02( sPixelmap, nDelta ) ; if ( pfn_SmanAW_onMouseWheel ) pfn_SmanAW_onMouseWheel ( 2, vIn, NULL );  }
    inline void                 onMouseButtonUp                   ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& nButton ) { S3DX_DECLARE_VIN_02( sPixelmap, nButton ) ; if ( pfn_SmanAW_onMouseButtonUp ) pfn_SmanAW_onMouseButtonUp ( 2, vIn, NULL );  }
    inline void                 onMouseButtonDown                 ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& nButton ) { S3DX_DECLARE_VIN_02( sPixelmap, nButton ) ; if ( pfn_SmanAW_onMouseButtonDown ) pfn_SmanAW_onMouseButtonDown ( 2, vIn, NULL );  }
    inline void                 onMouseMove                       ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& nX, const S3DX::AIVariable& nY ) { S3DX_DECLARE_VIN_03( sPixelmap, nX, nY ) ; if ( pfn_SmanAW_onMouseMove ) pfn_SmanAW_onMouseMove ( 3, vIn, NULL );  }
    inline void                 onKeyboardKeyDown                 ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& kKeyCode ) { S3DX_DECLARE_VIN_02( sPixelmap, kKeyCode ) ; if ( pfn_SmanAW_onKeyboardKeyDown ) pfn_SmanAW_onKeyboardKeyDown ( 2, vIn, NULL );  }
    inline void                 loadURL                           ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& sURL ) { S3DX_DECLARE_VIN_02( sPixelmap, sURL ) ; if ( pfn_SmanAW_loadURL ) pfn_SmanAW_loadURL ( 2, vIn, NULL );  }
    inline void                 init                              ( const S3DX::AIVariable& sAIModel ) { S3DX_DECLARE_VIN_01( sAIModel ) ; if ( pfn_SmanAW_init ) pfn_SmanAW_init ( 1, vIn, NULL );  }
    inline void                 createWebView                     ( const S3DX::AIVariable& sPixelmap, const S3DX::AIVariable& nWidth, const S3DX::AIVariable& nHeight ) { S3DX_DECLARE_VIN_03( sPixelmap, nWidth, nHeight ) ; if ( pfn_SmanAW_createWebView ) pfn_SmanAW_createWebView ( 3, vIn, NULL );  }
    inline void                 setAdditionalOption               ( const S3DX::AIVariable& sOption ) { S3DX_DECLARE_VIN_01( sOption ) ; if ( pfn_SmanAW_setAdditionalOption ) pfn_SmanAW_setAdditionalOption ( 1, vIn, NULL );  }
    inline void                 setUserStylesheet                 ( const S3DX::AIVariable& sString ) { S3DX_DECLARE_VIN_01( sString ) ; if ( pfn_SmanAW_setUserStylesheet ) pfn_SmanAW_setUserStylesheet ( 1, vIn, NULL );  }
    inline void                 createWebSession                  ( const S3DX::AIVariable& sPath ) { S3DX_DECLARE_VIN_01( sPath ) ; if ( pfn_SmanAW_createWebSession ) pfn_SmanAW_createWebSession ( 1, vIn, NULL );  }
    inline void                 enableJavascript                  ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableJavascript ) pfn_SmanAW_enableJavascript ( 1, vIn, NULL );  }
    inline void                 enableLocalStorage                ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableLocalStorage ) pfn_SmanAW_enableLocalStorage ( 1, vIn, NULL );  }
    inline void                 enablePlugins                     ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enablePlugins ) pfn_SmanAW_enablePlugins ( 1, vIn, NULL );  }
    inline void                 enableRemoteFonts                 ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableRemoteFonts ) pfn_SmanAW_enableRemoteFonts ( 1, vIn, NULL );  }
    inline void                 enableSmoothScrolling             ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableSmoothScrolling ) pfn_SmanAW_enableSmoothScrolling ( 1, vIn, NULL );  }
    inline void                 enableWebAudio                    ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableWebAudio ) pfn_SmanAW_enableWebAudio ( 1, vIn, NULL );  }
    inline void                 enableWebGL                       ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableWebGL ) pfn_SmanAW_enableWebGL ( 1, vIn, NULL );  }
    inline void                 enableWebSecurity                 ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableWebSecurity ) pfn_SmanAW_enableWebSecurity ( 1, vIn, NULL );  }
    inline void                 enableLoadImagesAutomatically     ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableLoadImagesAutomatically ) pfn_SmanAW_enableLoadImagesAutomatically ( 1, vIn, NULL );  }
    inline void                 enableShrinkStandaloneImagesToFit ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableShrinkStandaloneImagesToFit ) pfn_SmanAW_enableShrinkStandaloneImagesToFit ( 1, vIn, NULL );  }
    inline void                 enableDart                        ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableDart ) pfn_SmanAW_enableDart ( 1, vIn, NULL );  }
    inline void                 enableDatabases                   ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableDatabases ) pfn_SmanAW_enableDatabases ( 1, vIn, NULL );  }
    inline void                 enableGPUAcceleration             ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableGPUAcceleration ) pfn_SmanAW_enableGPUAcceleration ( 1, vIn, NULL );  }
    inline void                 enableAppCache                    ( const S3DX::AIVariable& bEnable ) { S3DX_DECLARE_VIN_01( bEnable ) ; if ( pfn_SmanAW_enableAppCache ) pfn_SmanAW_enableAppCache ( 1, vIn, NULL );  }
    inline void                 setDefaultEncoding                ( const S3DX::AIVariable& bEncoding ) { S3DX_DECLARE_VIN_01( bEncoding ) ; if ( pfn_SmanAW_setDefaultEncoding ) pfn_SmanAW_setDefaultEncoding ( 1, vIn, NULL );  }
    inline void                 setProxyConfig                    ( const S3DX::AIVariable& sProxy ) { S3DX_DECLARE_VIN_01( sProxy ) ; if ( pfn_SmanAW_setProxyConfig ) pfn_SmanAW_setProxyConfig ( 1, vIn, NULL );  }
    inline void                 onKeyboardKeyUp     ( const S3DX::AIVariable& kKeyCode ) { S3DX_DECLARE_VIN_01( kKeyCode ) ; if ( pfn_SmanAW_onKeyboardKeyUp ) pfn_SmanAW_onKeyboardKeyUp ( 1, vIn, NULL );  }
    inline void                 init     (  ) { if ( pfn_SmanAW_init ) pfn_SmanAW_init ( 0, NULL, NULL );  }

 	//-------------------------------------------------------------------------
	//  API Constants 
	//-------------------------------------------------------------------------

    S3DX::AIVariable kFocusedElementType_None ; 
    S3DX::AIVariable kFocusedElementType_Text ; 
    S3DX::AIVariable kFocusedElementType_Link ; 
    S3DX::AIVariable kFocusedElementType_Input ; 
    S3DX::AIVariable kFocusedElementType_TextInput ; 
    S3DX::AIVariable kFocusedElementType_EditableContent ; 
    S3DX::AIVariable kFocusedElementType_Plugin ; 
    S3DX::AIVariable kFocusedElementType_Other ; 
    S3DX::AIVariable kCursor_Pointer ; 
    S3DX::AIVariable kCursor_Cross ; 
    S3DX::AIVariable kCursor_Hand ; 
    S3DX::AIVariable kCursor_IBeam ; 
    S3DX::AIVariable kCursor_Wait ; 
    S3DX::AIVariable kCursor_Help ; 
    S3DX::AIVariable kCursor_EastResize ; 
    S3DX::AIVariable kCursor_NorthResize ; 
    S3DX::AIVariable kCursor_NorthEastResize ; 
    S3DX::AIVariable kCursor_NorthWestResize ; 
    S3DX::AIVariable kCursor_SouthResize ; 
    S3DX::AIVariable kCursor_SouthEastResize ; 
    S3DX::AIVariable kCursor_SouthWestResize ; 
    S3DX::AIVariable kCursor_WestResize ; 
    S3DX::AIVariable kCursor_NorthSouthResize ; 
    S3DX::AIVariable kCursor_EastWestResize ; 
    S3DX::AIVariable kCursor_NorthEastSouthWestResize ; 
    S3DX::AIVariable kCursor_NorthWestSouthEastResize ; 
    S3DX::AIVariable kCursor_ColumnResize ; 
    S3DX::AIVariable kCursor_RowResize ; 
    S3DX::AIVariable kCursor_MiddlePanning ; 
    S3DX::AIVariable kCursor_EastPanning ; 
    S3DX::AIVariable kCursor_NorthPanning ; 
    S3DX::AIVariable kCursor_NorthEastPanning ; 
    S3DX::AIVariable kCursor_NorthWestPanning ; 
    S3DX::AIVariable kCursor_SouthPanning ; 
    S3DX::AIVariable kCursor_SouthEastPanning ; 
    S3DX::AIVariable kCursor_SouthWestPanning ; 
    S3DX::AIVariable kCursor_WestPanning ; 
    S3DX::AIVariable kCursor_Move ; 
    S3DX::AIVariable kCursor_VerticalText ; 
    S3DX::AIVariable kCursor_Cell ; 
    S3DX::AIVariable kCursor_ContextMenu ; 
    S3DX::AIVariable kCursor_Alias ; 
    S3DX::AIVariable kCursor_Progress ; 
    S3DX::AIVariable kCursor_NoDrop ; 
    S3DX::AIVariable kCursor_Copy ; 
    S3DX::AIVariable kCursor_None ; 
    S3DX::AIVariable kCursor_NotAllowed ; 
    S3DX::AIVariable kCursor_ZoomIn ; 
    S3DX::AIVariable kCursor_ZoomOut ; 
    S3DX::AIVariable kCursor_Grab ; 
    S3DX::AIVariable kCursor_Grabbing ; 
    S3DX::AIVariable kCursor_Custom ; 

} ;

extern SmanAWAPI SmanAW;

//-----------------------------------------------------------------------------
#endif
//-----------------------------------------------------------------------------
