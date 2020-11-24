#pragma once
class Rectangle
{
private:
	double width;
	double height;

	Rectangle(double width, double height) :width(width), height(height) {}

public:

	double area() { return width * height; }

	static Rectangle createSquare(double side) {
		return Rectangle(side, side);
	}
	static Rectangle createRect(double width, double height) {
		return Rectangle(width, height);
	}

};

