--------------------------------------------------------------------------------
--  Handler.......... : onBeginLoadingFrame
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onBeginLoadingFrame ( sPixmap, bIsMainFrame, sURL, bIsErrorPage )
--------------------------------------------------------------------------------
	
	log.message ( "SmanAW onBeginLoadingFrame PIXMAP: "..sPixmap.." IS MAIN FRAME: "..(bIsMainFrame and "true" or "false").." URL: "..sURL.." IS ERROR PAGE: "..(bIsErrorPage and "true" or "false"))
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
