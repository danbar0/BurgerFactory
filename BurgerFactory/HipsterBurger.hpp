#include "BurgerFactory.hpp"

class HipsterStyleBeanBurger : public Burger {
public:
	HipsterStyleBeanBurger() {
		this->name = "Beanburger";
		this->cheese = "Vegan";
		this->patty = "Bean";
	}
};

class HipsterStylePineappleBurger : public Burger {
public:
	HipsterStylePineappleBurger() {
		this->name = "Pineappleburger";
		this->cheese = "Vegan";
		this->patty = "Pineapple";

		this->toppings.insert("test");
	}
};

class HipsterBurger : public BurgerFactory {
public:
	HipsterBurger(void);
	~HipsterBurger(void);

	Burger* createBurger(std::string type);
};