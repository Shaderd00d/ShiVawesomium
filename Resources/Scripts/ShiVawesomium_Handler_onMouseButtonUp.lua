--------------------------------------------------------------------------------
--  Handler.......... : onMouseButtonUp
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onMouseButtonUp ( nButton, nPointX, nPointY, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ )
--------------------------------------------------------------------------------
	
	local hUser = this.getUser ( )
    local hC = hud.getUnderCursorComponent ( hUser )
    if ( hC ) then -- HUD below mouse
        local sName = hud.getPixelMapName ( hC )
        if ( sName ) then
            x, y = this.GetHitPointOnHUD ( hC )
            SmanAW.onMouseButtonUp ( sName, nButton )
        end
    --[[
    else -- browser plane below mouse
        --local hObject = application.getCurrentUserSceneTaggedObject ( "browser" ) TODO browser weg
        x, y = this.GetHitPointOnPlane ( hObject, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ, this.nRayLength ( ), this.nBrowserSensorID ( ) )
        if ( x ~= -1 ) then
            SmanAW.onMouseButtonUp ( x * this.nPixmapWidth ( ), y * this.nPixmapWidth ( ), nButton )
        end
        ]]
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
