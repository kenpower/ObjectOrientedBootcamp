#pragma once
#include <iostream>
#include "Unit.h"


class Quantity
{
private:
	double amount;
	Unit unit;

	double toBase() const{
		
		return unit.toBase(amount);
	}

public:

	Quantity(double amount, Unit unit) :
		amount(amount), unit(unit) {}

	bool operator==(const Quantity& other) const { 
		return toBase() == other.toBase();
	}
	bool operator!=(const Quantity& other) const {
		return !(*this == other);
	}

	friend std::ostream& operator<< (std::ostream& stream, const Quantity& quantity) {
		stream << "Quantity(" << quantity.amount << ", " << quantity.toBase() << " base units )";
		return stream;
	}
};

