--------------------------------------------------------------------------------
--  Handler.......... : onChangeCursor
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onChangeCursor ( sPixmap, kCursor )
--------------------------------------------------------------------------------
	
    if ( kCursor == SmanAW.kCursor_Pointer ) then
        log.message ( "SmanAW onChangeCursor PIXMAP: "..sPixmap.." kCursor_Pointer" )
    elseif ( kCursor == SmanAW.kCursor_Hand ) then
        log.message ( "SmanAW onChangeCursor PIXMAP: "..sPixmap.." kCursor_Hand" )
    else
        log.message ( "SmanAW onChangeCursor PIXMAP: "..sPixmap.." number: "..kCursor )
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
