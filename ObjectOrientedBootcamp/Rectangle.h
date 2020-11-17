#pragma once
class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle(double width, double height) :width(width), height(height) {}

	double area() { return width * height; }
};

