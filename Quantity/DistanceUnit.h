#pragma once
class DistanceUnit
{
	double ratioToMeters;
public:
	DistanceUnit(double ratioToMeters) :ratioToMeters(ratioToMeters) {};

	double toMeters(double amount) const{
		return amount * ratioToMeters;
	}
};

