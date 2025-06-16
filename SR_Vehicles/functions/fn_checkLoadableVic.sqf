/*
 * This script was developed by the Crimzonkat of the Legion Studios Core
 * All credit goes to them and their brains
 */

 params [
	 "_cin",
 	["_boxPos", "VTV_exit", [""]]
 ];

// Places a memory position at a point in the aircraft vehicle transport exit
// Below is original setup placing a memory point at the Exit point which is located at tail of Cinerous
//_boxPosPoint = _cin modelToWorld (_cin selectionPosition _boxPos);

// This new line changed it to be a defined memory point found within the model in Blender, basically a custom memory point without touching model
_boxPosPoint = _cin modelToWorld [0,5.42,0];

// Creates a box around the memory point
_vehicles = vehicles inAreaArray [_boxPosPoint, 5, 8, 0, true, 9.6];

// If there is no vehicles in the box above, then nothing happens
if (count _vehicles < 1) exitWith {false};

// Creates a variable to see if the vehicle can be loaded or if the vehicle is fully loaded, and sets it to false
_canFit = false;

// Does a looping function to check if the box is filled with a vehicle that can be loaded
// and if the function to load the vic can be called
{
	_canFit = (_cin canVehicleCargo _x) select 0;
	_cin setVariable ["cinCanBeLoaded", _x];
	if(_canFit) exitWith {true};
} forEach _vehicles;

// Pushes the canFit variable to the loading script informing it that there is space to load a vehicle
if (true) exitWith { _canFit };