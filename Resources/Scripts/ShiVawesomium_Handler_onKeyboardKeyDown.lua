--------------------------------------------------------------------------------
--  Handler.......... : onKeyboardKeyDown
--  Author........... : 
--  Description...... : 
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
function ShiVawesomium.onKeyboardKeyDown ( kKeyCode )
--------------------------------------------------------------------------------
	
    if ( kKeyCode == input.kKeyQ ) then
        application.quit ( )
    elseif ( kKeyCode == input.kKeyB ) then
        local hUser = application.getCurrentUser ( )
        local hC = hud.getUnderCursorComponent ( hUser )
        if ( hC ) then
            local sName = hud.getPixelMapName ( hC )
            if ( sName ) then
                if ( SmanAW.getCanGoBack ( sName ) ) then
                    SmanAW.goBack ( sName )
                end
            end
        end
    else
        local hUser = application.getCurrentUser ( )
        local hC = hud.getUnderCursorComponent ( hUser )
        if ( hC ) then
            local sName = hud.getPixelMapName ( hC )
            if ( sName ) then
                SmanAW.onKeyboardKeyDown ( sName, kKeyCode )
            end
        end
    end
	
--------------------------------------------------------------------------------
end
--------------------------------------------------------------------------------
