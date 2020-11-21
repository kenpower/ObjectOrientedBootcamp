#pragma once
class Unit
{
	Unit(double ratioToBase)
		:ratioToBase(ratioToBase) {};
	
	double ratioToBase;

public:
	static Unit Foot;
	static Unit Inch;
	static Unit Km;
	static Unit Mile;
	static Unit Meter;

	static Unit Cup;
	static Unit Pint;
	static Unit Litre;
	static Unit Gallon;


	double toBase(double amount) const{
		return amount * ratioToBase;
	}
};

