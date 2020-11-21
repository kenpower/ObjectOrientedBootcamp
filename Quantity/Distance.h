#pragma once
#include <iostream>
#include "DistanceUnit.h"


class Distance
{
private:
	double amount;
	DistanceUnit unit;

	double toMeters() const{
		
		return unit.toMeters(amount);
	}

public:

	Distance(double amount, DistanceUnit unit) :
		amount(amount), unit(unit) {}

	bool operator==(const Distance& other) const { 
		return toMeters() == other.toMeters();
	}
	bool operator!=(const Distance& other) const {
		return !(*this == other);
	}

	friend std::ostream& operator<< (std::ostream& stream, const Distance& distance) {
		stream << "Distance(" << distance.amount << ", " << distance.toMeters() << " meters )";
		return stream;
	}
};

