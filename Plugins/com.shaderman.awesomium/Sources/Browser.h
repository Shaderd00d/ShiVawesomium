#include <Awesomium/WebCore.h>
#include <Awesomium/STLHelpers.h>
#include <Awesomium/BitmapSurface.h>

#include <map>
#include <string>

using namespace Awesomium;

// Define our WebViewListener::View subclass
class WebViewListenerView : public Awesomium::WebViewListener::View {
	/// This event occurs when the page title has changed.
	void OnChangeTitle(Awesomium::WebView* caller, const Awesomium::WebString& title);
	
	/// This event occurs when the page URL has changed.
	void OnChangeAddressBar(Awesomium::WebView* caller, const Awesomium::WebURL& url);

	/// This event occurs when the tooltip text has changed. You should hide the tooltip when the text is empty.
	void OnChangeTooltip(Awesomium::WebView* caller, const Awesomium::WebString& tooltip);
	
	/// This event occurs when the target URL has changed. This is usually the result of hovering over a link on a page.
	void OnChangeTargetURL(Awesomium::WebView* caller, const Awesomium::WebURL& url);
	
	/// This event occurs when the cursor has changed. This is usually the result of hovering over different content.
	void OnChangeCursor(Awesomium::WebView* caller, Awesomium::Cursor cursor);
	
	/// This event occurs when the focused element changes on the page. This is usually the result of textbox being focused or some other
	/// user-interaction event.
	void OnChangeFocus(Awesomium::WebView* caller, Awesomium::FocusedElementType focused_type);
	
	/// This event occurs when a message is added to the console on the page. This is usually the result of a JavaScript error being encountered
	/// on a page.
	void OnAddConsoleMessage(Awesomium::WebView* caller, const Awesomium::WebString& message, int line_number, const Awesomium::WebString& source);
	
	/// This event occurs when a WebView creates a new child WebView (usually the result of window.open or an external link).
	/// It is your responsibility to display this child WebView in your application. You should call Resize on the child WebView
	/// immediately after this event to make it match your container size.
	/// If this is a child of a Windowed WebView, you should call WebView::set_parent_window on the new view immediately within
	/// this event.
	void OnShowCreatedWebView(Awesomium::WebView* caller, Awesomium::WebView* new_view, const Awesomium::WebURL& opener_url, const Awesomium::WebURL& target_url,
		const Awesomium::Rect& initial_pos, bool is_popup);
};

// Define our WebViewListener::Load subclass
class WebViewListenerLoad : public Awesomium::WebViewListener::Load {
	/// This event occurs when the page begins loading a frame.
	void OnBeginLoadingFrame(Awesomium::WebView* caller, int64 frame_id, bool is_main_frame, const Awesomium::WebURL& url, bool is_error_page);

	/// This event occurs when a frame fails to load. See error_desc for additional information.
	void OnFailLoadingFrame(Awesomium::WebView* caller, int64 frame_id, bool is_main_frame, const Awesomium::WebURL& url, int error_code, const Awesomium::WebString& error_desc);

	/// This event occurs when the page finishes loading a frame. The main frame always finishes loading last for a given page load.
	void OnFinishLoadingFrame(Awesomium::WebView* caller, int64 frame_id, bool is_main_frame, const Awesomium::WebURL& url);

	/// This event occurs when the DOM has finished parsing and the window object is available for JavaScript execution.
	void OnDocumentReady(Awesomium::WebView* caller, const Awesomium::WebURL& url);
};

class ShiVaBrowser
{
public:
	ShiVaBrowser() {
		/*
		m_loadListener = new WebViewListenerLoad();
		m_viewListener = new WebViewListenerView();
		*/
	};

	~ShiVaBrowser() {};

	void init();
	void shutdown();

	void updatePixelmaps();

	WebCore* m_WebCore;
	WebSession* m_WebSession;

	void enableJavascript(bool val) { m_wp.enable_javascript = val; }
	void enableLocalStorage(bool val) { m_wp.enable_local_storage = val; }
	void enablePlugins(bool val) { m_wp.enable_plugins = val; }
	void enableRemoteFonts(bool val) { m_wp.enable_remote_fonts = val; }
	void enableSmoothScrolling(bool val) { m_wp.enable_smooth_scrolling = val; }
	void enableWebAudio(bool val) { m_wp.enable_web_audio = val; }
	void enableWebGL(bool val) { m_wp.enable_web_gl = val; }
	void enableWebSecurity(bool val) { m_wp.enable_web_security = val; }
	void enableLoadImagesAutomatically(bool val) { m_wp.load_images_automatically = val; }
	void enableShrinkStandaloneImagesToFit(bool val) { m_wp.shrink_standalone_images_to_fit = val; }
	void enableDart(bool val) { m_wp.enable_dart = val; }
	void enableDatabases(bool val) { m_wp.enable_databases = val; }
	void enableGPUAcceleration(bool val) { m_wp.enable_gpu_acceleration = val; }
	void enableAppCache(bool val) { m_wp.enable_app_cache = val; }
	void setDefaultEncoding(std::string val) { m_wp.default_encoding = WebString::CreateFromUTF8(val.c_str(), strlen(val.c_str())); }
	void setProxyConfig(std::string val) { m_wp.default_encoding = WebString::CreateFromUTF8(val.c_str(), strlen(val.c_str())); }
	void setUserStylesheet(std::string val) { m_wp.user_stylesheet = WebString::CreateFromUTF8(val.c_str(), strlen(val.c_str())); }
	void setAdditionalOption(std::string val) { m_additionalOptions.Push(WSLit(val.c_str())); }

	void createWebView(std::string sPixmap, unsigned int nWidth, unsigned int nHeight);
	void loadURL(std::string sPixelmap, std::string sURL);

	void setAIModel(std::string sModel) { sAImodel = sModel; };
	const char* getAIModel() { return sAImodel.c_str();	}

	void setWebPreference(std::string sPixelmap);
	void createWebSession(std::string sPath);

	void onKeyboardKeyDown(std::string sPixmap, unsigned int kKeyCode);
	void onKeyboardKeyUp(unsigned int kKeyCode);

	void onMouseMove(std::string sPixmap, float nX, float nY);
	void onMouseButtonDown(std::string sPixmap, int nButton);
	void onMouseButtonUp(std::string sPixmap, int nButton);
	void onMouseWheel(std::string sPixmap, int nDelta);

	std::map<std::string, WebView*> m_WebViewMap;

	WebView* getView(std::string sPixmap) { return (m_WebViewMap.find(sPixmap))->second; };
	std::string getPixmap(WebView* view);

	// VIEW
	bool canGoBack(std::string sPixmap) { return getView(sPixmap)->CanGoBack(); };
	bool canGoForward(std::string sPixmap) { return getView(sPixmap)->CanGoForward(); };
	void goBack(std::string sPixmap) { getView(sPixmap)->GoBack(); };
	void goForward(std::string sPixmap) { getView(sPixmap)->GoForward(); };
	void setFocus(std::string sPixmap) { getView(sPixmap)->Focus(); };
	int getZoom(std::string sPixmap) { return getView(sPixmap)->GetZoom(); };
	void goToHistoryOffset(std::string sPixmap, int nOffset) { getView(sPixmap)->GoToHistoryOffset(nOffset); };
	void pauseRendering(std::string sPixmap) { getView(sPixmap)->PauseRendering(); };
	void resumeRendering(std::string sPixmap) { getView(sPixmap)->ResumeRendering(); };
	void reduceMemoryUsage(std::string sPixmap) { getView(sPixmap)->ReduceMemoryUsage(); };
	void reload(std::string sPixmap, bool bIgnoreCache) { getView(sPixmap)->Reload(bIgnoreCache); };
	void resetZoom(std::string sPixmap) { getView(sPixmap)->ResetZoom(); };
	void setTransparent(std::string sPixmap, bool bTransparent) { getView(sPixmap)->SetTransparent(bTransparent); };
	void setZoom(std::string sPixmap, int nZoom) { getView(sPixmap)->SetZoom(nZoom); };
	void stop(std::string sPixmap) { getView(sPixmap)->Stop(); };
	std::string getTitle(std::string sPixmap) { return ToString(getView(sPixmap)->title()).c_str(); };
	std::string getURL(std::string sPixmap) { return ToString(getView(sPixmap)->url().path()).c_str(); };
	void zoomIn(std::string sPixmap) { getView(sPixmap)->ZoomIn(); };
	void zoomOut(std::string sPixmap) { getView(sPixmap)->ZoomOut(); };

private:
	std::string sAImodel;
	std::map<std::string, WebView*>::iterator it;

	BitmapSurface* m_surface;

	void injectAwesomiumKey(std::string sPixmap, WebKeyboardEvent::Type type, int key);

	WebPreferences m_wp;
	WebStringArray m_additionalOptions;

	WebKeyboardEvent m_keyEvent;

	WebView* view;

	WebViewListenerLoad* m_loadListener;
	WebViewListenerView* m_viewListener;
};

extern ShiVaBrowser* SB;
