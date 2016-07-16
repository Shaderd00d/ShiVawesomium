--------------------------------------------------------------------------------
--  Handler.......... : onFailLoadingFrame
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onFailLoadingFrame ( sPixmap, bIsMainFrame, sURL, nErrorCode, sErrorDesc )
--------------------------------------------------------------------------------
	
	log.message ( "SmanAW onFailLoadingFrame PIXMAP: "..sPixmap.." IS MAIN FRAME: "..(bIsMainFrame and "true" or "false").." URL: "..sURL.."ERROR CODE: "..nErrorCode.." ERROR DESC "..sErrorDesc)
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
