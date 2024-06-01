if (!is3Den and isServer) then {
	private ["_veh", "_boxType", "_container1", "_container2"];

	_veh = _this select 0;
    sleep 2;
	_boxType = "xi_general_medical";
    _container1 = _boxType createVehicle getpos _veh;
	_container1 allowDamage false;

	_container2 = _boxType createVehicle getpos _veh;
	_container2 allowDamage false;

	_container1 attachTo [_veh, [-1,-0.2,-0.5]];
    _container1 SetDir 180;
	_container2 attachTo [_veh, [-1,-0.2,0]];
    _container2 SetDir 180;
};