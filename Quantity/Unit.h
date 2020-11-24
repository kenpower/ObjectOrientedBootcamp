#pragma once
class Unit
{
	double ratioToBase;

	enum class UnitType {Distance, Volume} unitType;

	Unit(double ratioToBase, UnitType unitType)
		:ratioToBase(ratioToBase), unitType(unitType) {};

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

	bool comparableWith(Unit other) const {
		return unitType == other.unitType;
	}
};

