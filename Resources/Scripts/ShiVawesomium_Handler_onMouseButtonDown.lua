--------------------------------------------------------------------------------
--  Handler.......... : onMouseButtonDown
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onMouseButtonDown ( nButton, nPointX, nPointY, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ )
--------------------------------------------------------------------------------
	
    local hUser = this.getUser ( )
    local hC = hud.getUnderCursorComponent ( hUser )
    if ( hC ) then -- HUD below mouse
        local sName = hud.getPixelMapName ( hC )
        if ( sName ) then
            SmanAW.onMouseButtonDown ( sName, nButton )
        end
    else -- browser plane below mouse
        --[[
        local hObject = application.getCurrentUserSceneTaggedObject ( "browser" )
        x, y = this.GetHitPointOnPlane ( hObject, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ, this.nRayLength ( ), this.nBrowserSensorID ( ) )
        if ( x ~= -1 ) then
            SmanAW.onMouseButtonDown ( x * this.nPixmapWidth ( ), y * this.nPixmapWidth ( ), nButton )
        end
        ]]
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
