/*
 * This script was developed by the Crimzonkat of the Legion Studios Core
 * All credit goes to them and their brains
 */

 params ["_cin"];

// Grabs the vic that has been defined as loadable from the previous script
 _vicToBeLoaded = _cin getVariable ["cinCanBeLoaded", objNull];

// An error script if there is no vehicles in the area
if (isNull _vicToBeLoaded) exitWith {["No Vehicle to Load/Obj Does not exist"] call BIS_fnc_error};

// loads the defined vic in to the cinerous and then resets loadable vehicle variable for rechecking
_cin setVehicleCargo _vicToBeLoaded;
_cin setVariable ["cinCanBeLoaded", objNull];