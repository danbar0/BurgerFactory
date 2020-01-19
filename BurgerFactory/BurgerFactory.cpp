#include "BurgerFactory.hpp"

BurgerFactory::BurgerFactory(void) {

}

BurgerFactory::~BurgerFactory(void) {

}

Burger* BurgerFactory::orderBurger(std::string type) {
	Burger* burger;

	burger = createBurger(type);

	burger->prepare();
	burger->cook();
	burger->box();

	return burger;
}

Burger* BurgerFactory::createBurger(std::string type) {

}




