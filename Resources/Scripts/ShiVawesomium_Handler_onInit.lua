--------------------------------------------------------------------------------
--  Handler.......... : onInit
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onInit (  )
--------------------------------------------------------------------------------
	
    local hUser = application.getCurrentUser ( )
    
    -- Force vsync
    application.setOption ( application.kOptionSwapInterval, 1 )
    
	application.setCurrentUserScene ( "ShiVawesomium", "ShiVawesomium" )
    hud.newTemplateInstance ( this.getUser ( ), "ShiVawesomium", "ShiVawesomium" )
    
    --hud.setCursorVisible ( hUser, false )
    
    -- ORDER IS IMPORTANT!
    SmanAW.init ( "ShiVawesomium" )
    SmanAW.enableGPUAcceleration ( true )
    SmanAW.enableSmoothScrolling ( true )
    SmanAW.enableWebGL ( true )
    --SmanAW.setUserStylesheet ( "::-webkit-scrollbar { visibility: hidden; }" )
    --SmanAW.setAdditionalOption ( "--disable-gpu-vsync" )
    SmanAW.createWebSession ( "" )
    
    SmanAW.createWebView ( "test1", 1024, 1024 )
    
    SmanAW.loadURL ( "test1", "http://www.youtube.com" )
    --SmanAW.loadURL ( "test1", "http://www.google.com" )
    --SmanAW.loadURL ( "test1", "http://download.blender.org/peach/bigbuckbunny_movies/big_buck_bunny_720p_stereo.ogg" )
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
