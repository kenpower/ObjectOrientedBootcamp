#include "Unit.h"


Unit Unit::Foot{ 0.3048 , Unit::UnitType::Distance};
Unit Unit::Inch{ 0.3048 / 12, Unit::UnitType::Distance };
Unit Unit::Km{ 1000 , Unit::UnitType::Distance };
Unit Unit::Mile{ 1610 , Unit::UnitType::Distance };
Unit Unit::Meter{ 1 , Unit::UnitType::Distance };

Unit Unit::Litre{ 1 , Unit::UnitType::Volume };
Unit Unit::Gallon{ 4.546 ,Unit::UnitType::Volume };
Unit Unit::Cup{ 4.546 / (8 * 2) , Unit::UnitType::Volume };
Unit Unit::Pint{ 4.546 / 8 , Unit::UnitType::Volume };

