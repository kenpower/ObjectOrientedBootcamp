#include "pch.h"
#include "../Quantity/Distance.h"

TEST(Distance, equality) {
	Distance oneFoot(1, Distance::FOOT);
	Distance twelveInches(12, Distance::INCH);
	Distance tenInches(10, Distance::INCH);
	Distance one_sixKm(1.610, Distance::KM);
	Distance oneMile(1, Distance::MILE);


	
	EXPECT_EQ(oneFoot, oneFoot);
	EXPECT_EQ(oneFoot, twelveInches);
	EXPECT_EQ(one_sixKm, oneMile);




	EXPECT_NE(oneFoot, tenInches);
}