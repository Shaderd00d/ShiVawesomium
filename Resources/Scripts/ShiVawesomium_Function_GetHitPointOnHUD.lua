--------------------------------------------------------------------------------
--  Function......... : GetHitPointOnHUD
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.GetHitPointOnHUD ( hComponent )
--------------------------------------------------------------------------------
	
    local hUser = application.getCurrentUser ( )
	local x, y = hud.getCursorPosition ( hUser )
    local sx, sy = hud.getComponentSize ( hComponent )
    local px, py = hud.getComponentPosition ( hComponent )
    local tlx, tly = hud.getComponentScreenSpaceTopLeftCorner ( hComponent )
    local trx, try = hud.getComponentScreenSpaceBottomRightCorner ( hComponent )
    local width = trx - tlx
    local height = try - tly
    x = ( ( x - px - (width / 2) ) / width ) +1
    y = ( ( y - py - (height / 2) ) / height ) +1
    return x, y
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
