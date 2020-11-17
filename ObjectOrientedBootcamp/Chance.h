#pragma once
#include<ostream>

class Chance
{
	static constexpr double CERTAINTY{ 1 };
	double likelihood;

public:
	Chance(double likelihood) :likelihood(likelihood) {}

	Chance not_() const { return Chance(CERTAINTY - likelihood);  }
	
	bool operator==(const Chance& other) const { return likelihood == other.likelihood;  }

	Chance and_(const Chance& other) const { return Chance(likelihood * other.likelihood); }

	//Chance or_(const Chance& other) const { return Chance(likelihood + other.likelihood - likelihood * other.likelihood); }

	Chance or_(const Chance& other) const { 	//DeMorgan's law: P(A||B) = !(!P(A) && !P(B))
		Chance notThis{ (*this).not_() };
		Chance notOther{ other.not_() };

		return (notThis.and_(notOther)).not_();  //Churn
	}

	friend std::ostream& operator<< (std::ostream& stream, const Chance& chance) {
		stream << "Chance(" << chance.likelihood << ")"; 
		return stream;
	}
};

