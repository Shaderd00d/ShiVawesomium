--------------------------------------------------------------------------------
--  Handler.......... : onMouseMove
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onMouseMove ( nPointX, nPointY, nDeltaX, nDeltaY, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ )
--------------------------------------------------------------------------------
	
    local hUser = this.getUser ( )
    local hObject = application.getCurrentUserSceneTaggedObject ( "browser" )
    local hC = hud.getUnderCursorComponent ( hUser )
    local x, y
    if ( hC ) then -- HUD below mouse
        local sName = hud.getPixelMapName ( hC )
        if ( sName ) then
            x, y = this.GetHitPointOnHUD ( hC )
            SmanAW.onMouseMove ( sName, x, y )
        end
    --[[
    else -- browser plane below mouse
        x, y = this.GetHitPointOnPlane ( hObject, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ, this.nRayLength ( ), this.nBrowserSensorID ( ) )
        if ( x ~= -1 ) then
            SmanAW.onMouseMove ( x * this.nPixmapWidth ( ), y * this.nPixmapHeight ( ) )
        end
    ]]
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
