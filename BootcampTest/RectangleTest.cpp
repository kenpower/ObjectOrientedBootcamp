#include "pch.h"
#include "../ObjectOrientedBootcamp/Rectangle.h"

TEST(Rectangle, CalcArea) {
  EXPECT_EQ(6, Rectangle(3,2).area());

}