#include "pch.h"
#include "../ObjectOrientedBootcamp/Chance.h"

Chance certain(1);
Chance impossible(0);
Chance even(0.5);
Chance likely(0.75);
Chance unlikely(0.25);
Chance verylikely(0.8125);

TEST(Chance, Not) {

	EXPECT_EQ(certain, impossible.not_());
	EXPECT_EQ(even, even.not_());
	EXPECT_EQ(likely, unlikely.not_());

	EXPECT_EQ(certain, certain.not_().not_());
	EXPECT_EQ(even, even.not_().not_());
	EXPECT_EQ(likely, likely.not_().not_());
	EXPECT_EQ(unlikely, unlikely.not_().not_());
}

TEST(Chance, And) {

	EXPECT_EQ(certain, certain.and_(certain));
	EXPECT_EQ(impossible, impossible.and_(certain));
	EXPECT_EQ(unlikely, even.and_(even));
	EXPECT_EQ(likely, likely.and_(certain));
}

TEST(Chance, Or) {

	EXPECT_EQ(certain, certain.or_(certain));
	EXPECT_EQ(impossible, impossible.or_(impossible));
	EXPECT_EQ(likely, even.or_(even));
	EXPECT_EQ(verylikely, likely.or_(unlikely));
}

TEST(Chance, LikelhoodConstraint) {
	EXPECT_THROW(Chance(1.1), std::range_error);
	EXPECT_THROW(Chance(-0.1), std::range_error);

	EXPECT_NO_THROW(Chance(1));
	EXPECT_NO_THROW(Chance(0));

}