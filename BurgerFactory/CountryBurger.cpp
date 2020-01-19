#include "CountryBurger.hpp"

CountryBurger::CountryBurger(void) {

}

CountryBurger::~CountryBurger(void) {

}

Burger* CountryBurger::createBurger(std::string type) {
	if (type == "Cheeseburger") {
		return new CountryStyleCheeseburger(); 
	}
	else if (type == "Baconburger") {
		return new CountryStyleBaconburger(); 
	}
	else {
		return NULL; 
	}
}