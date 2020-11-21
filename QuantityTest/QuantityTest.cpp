#include "pch.h"
#include "../Quantity/Quantity.h"
TEST(Distance, equality) {

	Quantity oneFoot(1, Unit::Foot);
	Quantity twoFoot(2, Unit::Foot);
	Quantity twelveInches(12, Unit::Inch);
	Quantity tenInches(10, Unit::Inch);
	Quantity oneMileAsKm(1.610, Unit::Km);
	Quantity oneMile(1, Unit::Mile);

	EXPECT_EQ(oneFoot, oneFoot);
	EXPECT_EQ(oneFoot, twelveInches);
	EXPECT_EQ(oneMileAsKm, oneMile);

	EXPECT_NE(oneFoot, twoFoot);
}

TEST(Volume, equality) {

	Quantity oneCup(1, Unit::Cup);
	Quantity twoCups(2, Unit::Cup);
	Quantity onePint(1, Unit::Pint);
	Quantity oneLitre(1, Unit::Litre);
	Quantity oneGallonAsLitres(4.546, Unit::Litre);
	Quantity oneGallon(1, Unit::Gallon);
	Quantity eightPints(8, Unit::Pint);

	EXPECT_EQ(oneCup, oneCup);
	EXPECT_EQ(twoCups, onePint);
	EXPECT_EQ(oneGallonAsLitres, oneGallon);
	EXPECT_EQ(eightPints, oneGallon);

	EXPECT_NE(oneCup, twoCups);
}

TEST(VolumeDistance, inEquality) {
	Quantity oneLitre(1, Unit::Litre);
	Quantity oneMetre(1, Unit::Meter);

	EXPECT_NE(oneLitre, oneMetre);

}


