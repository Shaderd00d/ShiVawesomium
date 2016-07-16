--------------------------------------------------------------------------------
--  Function......... : GetHitPointOnPlane
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.GetHitPointOnPlane ( hObject, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ, nRayLength, nSensorID )
--------------------------------------------------------------------------------
	
    local hScene = application.getCurrentUserScene ( )
    local hHit, nDist = scene.getFirstHitSensorWithID ( hScene, nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ, nRayLength, nSensorID )
    if ( hHit )
    then
        nRayDirX, nRayDirY, nRayDirZ = math.vectorScale ( nRayDirX, nRayDirY, nRayDirZ, nDist )
        nRayPntX, nRayPntY, nRayPntZ = math.vectorAdd ( nRayPntX, nRayPntY, nRayPntZ, nRayDirX, nRayDirY, nRayDirZ )
        nRayPntX, nRayPntY, nRayPntZ = object.transformPoint ( hObject, nRayPntX, nRayPntY, nRayPntZ, object.kGlobalSpace, object.kLocalSpace )
        nRayPntX = math.abs ( ( nRayPntX + 0.5 ) -1 )
        nRayPntZ = nRayPntZ + 0.5
        return nRayPntZ, nRayPntX
    else
        return -1, -1
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
