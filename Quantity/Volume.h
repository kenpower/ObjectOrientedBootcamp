#pragma once
#include <iostream>
#include"String"

class Volume
{
public:
	enum Unit { CUP, GALLON, MILILITRE, LITRE };

private:
	double amount;
	Unit unit;

	double toLitres() const {
		double litres{ 0 };
		switch (unit) {
		}

		return litres;
	}

public:

	Volume(double amount, Unit unit) :
		amount(amount), unit(unit) {}

	bool operator==(const Volume& other) const {
		return toLitres() == other.toLitres();
	}
	bool operator!=(const Volume& other) const {
		return !(*this == other);
	}

	friend std::ostream& operator<< (std::ostream& stream, const Volume& volume) {
		stream << "Volume(" << volume.amount << ", " << volume.unit << ", " << volume.toLitres() << " litres )";
		return stream;
	}
};

