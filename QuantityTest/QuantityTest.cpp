#include "pch.h"
#include "../Quantity/Distance.h"

TEST(Distance, equality) {
	DistanceUnit foot(0.3048);
	DistanceUnit inch(0.3048 / 12);
	DistanceUnit km(1000);
	DistanceUnit mile(1610);


	Distance oneFoot(1, foot);
	Distance twelveInches(12, inch);
	Distance tenInches(10, inch);
	Distance one_sixKm(1.610, km);
	Distance oneMile(1, mile);


	
	EXPECT_EQ(oneFoot, oneFoot);
	EXPECT_EQ(oneFoot, twelveInches);
	EXPECT_EQ(one_sixKm, oneMile);




	EXPECT_NE(oneFoot, tenInches);
}


