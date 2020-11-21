#pragma once
#include"String"

class Distance
{
public:
	enum Unit { FOOT, INCH, KM, MILE};

private:
	double amount;
	Unit unit;

	double toMeters() const{
		double meters{ 0 };
		switch (unit) {
		case FOOT:
			meters = amount * 0.3048;
			break;
		case INCH:
			meters = amount * 0.3048 / 12;
			break;
		case KM:
			meters = amount * 1000;
			break;
		case MILE:
			meters = amount * 1610;
			break;
		}
		
		return meters;
	}

public:

	Distance(double amount, Unit unit) :
		amount(amount), unit(unit) {}

	bool operator==(const Distance& other) const { 
		return toMeters() == other.toMeters();
	}
	bool operator!=(const Distance& other) const {
		return !(*this == other);
	}

	friend std::ostream& operator<< (std::ostream& stream, const Distance& distance) {
		stream << "Distance(" << distance.amount << ", " << distance.unit << ", " << distance.toMeters() << ")";
		return stream;
	}
};

