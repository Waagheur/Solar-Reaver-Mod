/*
 * Author: Waagheur
 * Spawns a skull probe model attached to the center of the targeted entity
 * It will despawn once the entity is dead
 *
 * Arguments:
 * 0: Entity <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [this] call SR_UAV_fnc_skull_handler
 *
 */

 params ["_entity"];

_entity setObjectTextureGlobal [0, ""]; 

_skull = createVehicle ["SR_Skull_Prop", position _entity, [], 0, "CAN_COLLIDE"];
_skull attachTo[_entity, [0,0,0.2]];
_skull setDir 180;
_skull allowDamage false;

[_skull, _entity] spawn {
	while {true} do {
		if (not(alive (_this select 1))) then {
			sleep 5;
			deleteVehicle (_this select 0);
		};
		
		sleep 10;
	};
};