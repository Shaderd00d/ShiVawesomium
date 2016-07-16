--------------------------------------------------------------------------------
--  Handler.......... : onMouseWheel
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onMouseWheel ( nDelta )
--------------------------------------------------------------------------------
	
    local hUser = this.getUser ( )
    local hC = hud.getUnderCursorComponent ( hUser )
    if ( hC ) then -- HUD below mouse
        local sName = hud.getPixelMapName ( hC )
        if ( sName ) then
            SmanAW.onMouseWheel ( sName, nDelta * 40 )
        end
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
