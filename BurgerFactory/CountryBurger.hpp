#include "BurgerFactory.hpp"

class CountryStyleCheeseburger : public Burger {
public: 
	CountryStyleCheeseburger() {
		this->name = "Cheeseburger";
		this->cheese = "American";
		this->patty = "Beef";
	}

};

class CountryStyleBaconburger : public Burger {
public:
	CountryStyleBaconburger() {
		this->name = "Baconburger";
		this->cheese = "American";
		this->patty = "Bacon";
	}
};


class CountryBurger : public BurgerFactory {
public:
	CountryBurger(void);
	~CountryBurger(void);

	Burger* createBurger(std::string type); 
};