#include "PrecompiledHeader.h"

#include "Browser.h"
#include <Awesomium/STLHelpers.h>
#include <Awesomium/WebKeyboardEvent.h>

using namespace Awesomium;

/// VIEW
void WebViewListenerView::OnChangeTitle(Awesomium::WebView* caller, const Awesomium::WebString& title) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onChangeTitle") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onChangeTitle", SB->getPixmap(caller).c_str(), ToString(title).c_str()); }

void WebViewListenerView::OnChangeAddressBar(Awesomium::WebView* caller, const Awesomium::WebURL& url) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onChangeAddressBar") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onChangeAddressBar", SB->getPixmap(caller).c_str(), ToString(url.path()).c_str()); }

void WebViewListenerView::OnChangeTooltip(Awesomium::WebView* caller, const Awesomium::WebString& tooltip) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onChangeTooltip") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onChangeTooltip", SB->getPixmap(caller).c_str(), ToString(tooltip).c_str()); }

void WebViewListenerView::OnChangeTargetURL(Awesomium::WebView* caller, const Awesomium::WebURL& url) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onChangeTargetURL") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onChangeTargetURL", SB->getPixmap(caller).c_str(), ToString(url.path()).c_str()); }

void WebViewListenerView::OnChangeCursor(Awesomium::WebView* caller, Awesomium::Cursor cursor) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onChangeCursor") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onChangeCursor", SB->getPixmap(caller).c_str(), cursor); }

void WebViewListenerView::OnChangeFocus(Awesomium::WebView* caller, Awesomium::FocusedElementType focused_type) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onChangeFocus") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onChangeFocus", SB->getPixmap(caller).c_str(), focused_type); }

void WebViewListenerView::OnAddConsoleMessage(Awesomium::WebView* caller, const Awesomium::WebString& message, int line_number, const Awesomium::WebString& source) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onAddConsoleMessage") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onAddConsoleMessage", SB->getPixmap(caller).c_str(), ToString(message).c_str(), line_number, ToString(source).c_str()); }

void WebViewListenerView::OnShowCreatedWebView(Awesomium::WebView* caller, Awesomium::WebView* new_view, const Awesomium::WebURL& opener_url, const Awesomium::WebURL& target_url,
		const Awesomium::Rect& initial_pos, bool is_popup)
{
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onShowCreatedWebView") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onShowCreatedWebView", SB->getPixmap(caller).c_str(), ToString(opener_url.path()).c_str(), ToString(target_url.path()).c_str(),
		initial_pos.x, initial_pos.y, initial_pos.width, initial_pos.height, is_popup); }

/// LOAD
void WebViewListenerLoad::OnBeginLoadingFrame(Awesomium::WebView* caller, int64 frame_id, bool is_main_frame, const Awesomium::WebURL& url, bool is_error_page) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onBeginLoadingFrame") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onBeginLoadingFrame", SB->getPixmap(caller).c_str(), is_main_frame, ToString(url.path()).c_str(), is_error_page); }

void WebViewListenerLoad::OnFailLoadingFrame(Awesomium::WebView* caller, int64 frame_id, bool is_main_frame, const Awesomium::WebURL& url, int error_code, const Awesomium::WebString& error_desc) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onFailLoadingFrame") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onFailLoadingFrame", SB->getPixmap(caller).c_str(), is_main_frame, ToString(url.path()).c_str(), error_code, ToString(error_desc).c_str()); }

void WebViewListenerLoad::OnFinishLoadingFrame(Awesomium::WebView* caller, int64 frame_id, bool is_main_frame, const Awesomium::WebURL& url) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onFinishLoadingFrame") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onFinishLoadingFrame", SB->getPixmap(caller).c_str(), is_main_frame, ToString(url.path()).c_str()); }

void WebViewListenerLoad::OnDocumentReady(Awesomium::WebView* caller, const Awesomium::WebURL& url) {
	S3DX::AIVariable hUser = S3DX::application.getCurrentUser();
	if ( S3DX::user.hasAIEventHandler(hUser, SB->getAIModel(), "onDocumentReady") )
		S3DX::user.sendEvent(hUser, SB->getAIModel(), "onDocumentReady", SB->getPixmap(caller).c_str(), ToString(url.path()).c_str()); }

void ShiVaBrowser::init()
{
	WebConfig wc = WebConfig();
	wc.additional_options = m_additionalOptions; // see https://gist.github.com/khrona/2999122

	m_wp = WebPreferences();
	// TODO, seems to be broken in 1.7.5
	//WebString host(WSLit("127.0.0.1"));
	//wc.remote_debugging_host = host;
	//wc.remote_debugging_port = 1337;

	m_WebCore = WebCore::Initialize(wc);

	m_loadListener = new WebViewListenerLoad();
	m_viewListener = new WebViewListenerView();
}

void ShiVaBrowser::shutdown() {
	if ( m_loadListener )
		delete m_loadListener;
	if ( m_viewListener )
		delete m_viewListener;

	for(it = m_WebViewMap.begin(); it != m_WebViewMap.end(); ++it) {
		WebView* wv = it->second;
		wv->Stop();

#ifdef __APPLE__
        sleep(100);
#elif _WIN32
		Sleep(100);
#elif __linux
		sleep(100);
#endif

		while ( wv->IsLoading() ) {
			m_WebCore->Update();
#ifdef __APPLE__
            sleep(50);
#elif _WIN32
            Sleep(50);
#elif __linux
            sleep(50);
#endif
		}
		wv->Destroy();
	}
	/*
	if ( m_WebSession )
		m_WebSession->Release();
	*/
	if ( m_WebCore )
		m_WebCore->Shutdown();
}

std::string ShiVaBrowser::getPixmap(WebView* view) {
	std::string sPixmap = "";

	for ( it = m_WebViewMap.begin(); it != m_WebViewMap.end(); ++it ) {
		if ( it->second == view ) {
			sPixmap = it->first;
			break;
		}
	}

	return sPixmap;
}

void ShiVaBrowser::loadURL(std::string sPixelmap, std::string sURL) {
	it = m_WebViewMap.find(sPixelmap);
	if ( it != m_WebViewMap.end() ) {
		WebURL url(WSLit(sURL.c_str()));
		it->second->LoadURL(url);
	} else {
		S3DX::log.error("[Shivasomium] loadURL: unknown pixelmap: ", sPixelmap.c_str());
	}
}

void ShiVaBrowser::createWebView(std::string sPixmap, unsigned int nWidth, unsigned int nHeight) {
	view = m_WebCore->CreateWebView(nWidth, nHeight, m_WebSession, Awesomium::kWebViewType_Offscreen);
	m_WebViewMap.insert(std::make_pair(sPixmap.c_str(), view));
	view->set_load_listener(m_loadListener);
	view->set_view_listener(m_viewListener);
}

void ShiVaBrowser::createWebSession(std::string sPath) {
	m_WebSession = m_WebCore->CreateWebSession(WSLit(sPath.c_str()), m_wp);
}

void ShiVaBrowser::updatePixelmaps() {
	for ( it = m_WebViewMap.begin(); it != m_WebViewMap.end(); ++it ) {
		m_surface = (BitmapSurface*)it->second->surface();
		if ( m_surface != 0 && m_surface->is_dirty() ) {
			S3DX::AIVariable hPixelMap = S3DX::pixelmap.getResourceHandle ( it->first.c_str() );

			if ( hPixelMap && S3DX::pixelmap.lock ( hPixelMap ) )
			{
				int nPWidth  = S3DX::pixelmap.getWidth ( hPixelMap );
				int nPHeight = S3DX::pixelmap.getHeight ( hPixelMap );

				int nVWidth  = m_surface->width();
				int nVHeight = m_surface->height();

				unsigned char *pSBuf = (unsigned char*)S3DX::pixelmap.getPixels ( hPixelMap ).GetHandleValue ( );

				if ( nPWidth == nVWidth && nPHeight == nVHeight ) {
					m_surface->CopyTo(pSBuf, nPWidth * 4, 4, true, true);
				} else {
					unsigned char *in = (unsigned char*)m_surface->buffer();
					unsigned char *ptrout = pSBuf;
					ptrout += nPWidth * nPHeight * 4;

					for ( S3DX::uint16 y = 0; y < nVHeight; y++ ) {
						ptrout -= nPWidth * 4;
						for ( S3DX::uint16 x = 0; x < nVWidth; x++ ) { // BGRA to RGBA
							ptrout[x*4]	   = in[x*4 +2];
							ptrout[x*4 +1] = in[x*4 +1];
							ptrout[x*4 +2] = in[x*4];
							ptrout[x*4 +3] = in[x*4 +3];
						}
						in += nVWidth * 4;
					}
				}
				
				S3DX::pixelmap.setPixels ( hPixelMap, pSBuf );
				S3DX::pixelmap.unlock ( hPixelMap ) ;
			}
		}
	}
}

// http://www.awesomium.com/docs/1_7_2/cpp_api/namespace_awesomium_1_1_key_codes.html

void ShiVaBrowser::injectAwesomiumKey(std::string sPixmap, WebKeyboardEvent::Type type, int key) {
	WebKeyboardEvent keyEvent;
	keyEvent.type = type;
	keyEvent.virtual_key_code = key;
	keyEvent.native_key_code = key;
	keyEvent.text[0] = (char)key; keyEvent.text[1] = '\0';
	keyEvent.unmodified_text[0] = (char)key; keyEvent.unmodified_text[1] = '\0';
	keyEvent.modifiers = 0;
	keyEvent.is_system_key = false;

	it = m_WebViewMap.find(sPixmap);
	it->second->InjectKeyboardEvent(keyEvent);
}

void ShiVaBrowser::onKeyboardKeyDown(std::string sPixmap, unsigned int kKeyCode) {
	// https://github.com/xarray/osgRecipes/blob/master/integrations/osgawesomium/osgawesomium.cpp

	switch ( kKeyCode )
	{
	case 26: // kKeyLControl
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_LCONTROL );
		break;
	case 27: // kKeyRControl
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_RCONTROL );
		break;
	case 28: // kKeyLShift
		m_keyEvent.modifiers |= WebKeyboardEvent::kModShiftKey;
		break;
	case 29: // kKeyRShift
		m_keyEvent.modifiers |= WebKeyboardEvent::kModShiftKey;
		break;
	case 30: // kKeyUp
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_UP );
		break;
	case 31: // kKeyDown
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_DOWN );
		break;
	case 32: // kKeyRight
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_RIGHT );
		break;
	case 33: // kKeyLeft
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_LEFT );
		break;
	case 34: // kKeyEscape
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_ESCAPE );
		break;
	case 35: // kKeyReturn
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_RETURN );
		break;
	/* TODO
	case 36: // kKeySpace
		injectAwesomiumKey( WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_SPACE );
		break;
		*/
	case 37: // kKeyPageUp
		// TODO
		break;
	case 38: // kKeyPageDown
		// TODO
		break;
	case 39: // kKeyHome
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_HOME );
		break;
	case 40: // kKeyEnd
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_END );
		break;
	case 41: // kKeyInsert
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_INSERT );
		break;
	case 42: // kKeyDelete
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_DELETE );
		break;
	case 43: // kKeyTab
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_TAB );
		break;
	case 44: // kKeyF1
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F1 );
		break;
	case 45: // kKeyF2
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F2 );
		break;
	case 46: // kKeyF3
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F3 );
		break;
	case 47: // kKeyF4
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F4 );
		break;
	case 48: // kKeyF5
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F5 );
		break;
	case 49: // kKeyF6
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F6 );
		break;
	case 50: // kKeyF7
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F7 );
		break;
	case 51: // kKeyF8
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F8 );
		break;
	case 52: // kKeyF9
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F9 );
		break;
	case 53: // kKeyF10
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F10 );
		break;
	case 54: // kKeyF11
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F11 );
		break;
	case 55: // kKeyF12
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_F12 );
		break;
	case 76: // kKeyBackspace
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_BACK );
		break;
	case 112: // kKeyLAlt
		m_keyEvent.modifiers |= WebKeyboardEvent::kModAltKey;
		break;
	case 113: // kKeyRAlt
		m_keyEvent.modifiers |= WebKeyboardEvent::kModAltKey;
		break;
	case 115: // kKeyMenu
		injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeKeyDown, Awesomium::KeyCodes::AK_MENU );
		break;
	default: // shiva keycodes 0 - 25; 56 - 65
		if ( kKeyCode >= S3DX::input.kKeyA && kKeyCode <= S3DX::input.kKeyZ ) {
			if ( m_keyEvent.modifiers &= WebKeyboardEvent::kModShiftKey ) {
				kKeyCode += 65;
			} else {
				kKeyCode += 97;
			}
			injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeChar, kKeyCode );
		} else if ( kKeyCode >= S3DX::input.kKey0 && kKeyCode <= S3DX::input.kKey9 ) {
			kKeyCode -= 8;
			injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeChar, kKeyCode );
		} else if ( kKeyCode >= S3DX::input.kKeySpace ) {
			kKeyCode = 32;
			injectAwesomiumKey( sPixmap, WebKeyboardEvent::kTypeChar, kKeyCode );
		}
	}
}

void ShiVaBrowser::onKeyboardKeyUp(unsigned int kKeyCode) {
	if ( kKeyCode == S3DX::input.kKeyLShift || kKeyCode == S3DX::input.kKeyRShift ) {
		m_keyEvent.modifiers &= ~WebKeyboardEvent::kModShiftKey;
	} else if ( kKeyCode == S3DX::input.kKeyLAlt || kKeyCode == S3DX::input.kKeyRAlt ) {
		m_keyEvent.modifiers &= ~WebKeyboardEvent::kModAltKey;
	}
}

void ShiVaBrowser::onMouseMove(std::string sPixmap, float nX, float nY)
{
	if ( nX != -1 ) {
		S3DX::AIVariable hPixelMap = S3DX::pixelmap.getResourceHandle ( sPixmap.c_str() );
		float w = S3DX::pixelmap.getWidth(hPixelMap);
		float h = S3DX::pixelmap.getHeight(hPixelMap);
		it = m_WebViewMap.find(sPixmap);
		it->second->InjectMouseMove(int(nX * w), int(nY * h));
	}
}

void ShiVaBrowser::onMouseButtonDown(std::string sPixmap, int nButton)
{
	it = m_WebViewMap.find(sPixmap);
	it->second->Focus();

	switch (nButton) {
		case 0: // left
			it->second->InjectMouseDown(kMouseButton_Left);
			break;
		case 1: // right
			it->second->InjectMouseDown(kMouseButton_Right);
			break;
		case 2: // middle
			it->second->InjectMouseDown(kMouseButton_Middle);
			break;
	}
}

void ShiVaBrowser::onMouseButtonUp(std::string sPixmap, int nButton)
{
	it = m_WebViewMap.find(sPixmap);

	switch (nButton) {
		case 0: // left
			it->second->InjectMouseUp(kMouseButton_Left);
			break;
		case 1: // right
			it->second->InjectMouseUp(kMouseButton_Right);
			break;
		case 2: // middle
			it->second->InjectMouseUp(kMouseButton_Middle);
			break;
	}
}

void ShiVaBrowser::onMouseWheel(std::string sPixmap, int nDelta)
{
	it = m_WebViewMap.find(sPixmap);
	it->second->InjectMouseWheel(nDelta, 0);
}

ShiVaBrowser* SB;
