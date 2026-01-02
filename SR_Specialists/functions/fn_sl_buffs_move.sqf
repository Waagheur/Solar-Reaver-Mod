/*
	Author: Waagheur

	Description:
		

	Parameter(s):
		params ['_entity'];




	Returns:
		Nothing

	Examples:
		
*/

if (hasInterface) then {
	
	[(_this select 0)] spawn {
		if ((_this select 0) iskindof "TIOWSpaceMarine_Base") then {
			_fast_speed = ((getAnimSpeedCoef (_this select 0)) * 2);
			[(_this select 0), _fast_speed] remoteExec ["setAnimSpeedCoef", 0];
			
			sleep 60;
			
			_normal_speed = ((getAnimSpeedCoef (_this select 0)) * 0.5);
			[(_this select 0), _normal_speed] remoteExec ["setAnimSpeedCoef", 0];
		}
		else {
			_fast_speed = ((getAnimSpeedCoef (_this select 0)) * 6);
			[(_this select 0), _fast_speed] remoteExec ["setAnimSpeedCoef", 0];
			
			sleep 60;
			
			_normal_speed = ((getAnimSpeedCoef (_this select 0)) * 0.125);
			[(_this select 0), _normal_speed] remoteExec ["setAnimSpeedCoef", 0];
		};
	};
	
};