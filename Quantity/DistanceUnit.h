#pragma once
class DistanceUnit
{
	DistanceUnit(double ratioToMeters):ratioToMeters(ratioToMeters) {};
	double ratioToMeters;

public:
	static DistanceUnit Foot;
	static DistanceUnit Inch;
	static DistanceUnit Km;
	static DistanceUnit Mile;
	static DistanceUnit Meter;


	double toMeters(double amount) const{
		return amount * ratioToMeters;
	}
};

