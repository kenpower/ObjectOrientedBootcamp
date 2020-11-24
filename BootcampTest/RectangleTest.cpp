#include "pch.h"
#include "../ObjectOrientedBootcamp/Rectangle.h"

TEST(Rectangle, CalcArea) {
  EXPECT_EQ(6, Rectangle::createRect(3,2).area());
  
  EXPECT_EQ(25, Rectangle::createSquare(5).area());
}