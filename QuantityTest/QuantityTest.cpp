#include "pch.h"
#include "../Quantity/Distance.h"
TEST(Distance, equality) {

	Distance oneFoot(1, DistanceUnit::Foot);
	Distance twoFoot(2, DistanceUnit::Foot);
	Distance twelveInches(12, DistanceUnit::Inch);
	Distance tenInches(10, DistanceUnit::Inch);
	Distance oneMileAsKm(1.610, DistanceUnit::Km);
	Distance oneMile(1, DistanceUnit::Mile);

	EXPECT_EQ(oneFoot, oneFoot);
	EXPECT_EQ(oneFoot, twelveInches);
	EXPECT_EQ(oneMileAsKm, oneMile);

	EXPECT_NE(oneFoot, twoFoot);
}


