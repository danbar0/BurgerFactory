// DecoratorPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "BurgerStore.hpp"

BurgerTown::BurgerTown(void) {

}

BurgerTown::~BurgerTown(void) {

}

void BurgerTown::order(Burger* burger) {
	std::cout << "The " << burger->getDescription() + " costs $" + to_string(burger->getCost()) + "\n";
}

void BurgerTown::run() {
	std::cout << "Welcome to Burger Town!\n";

	Burger* burger1 = new BeefBurger();
	this->order(burger1);

	Burger* burger2 = new TurkeyBurger();
	burger2 = new Cheese(burger2);
	this->order(burger2);

	Burger* burger3 = new BeanBurger();
	burger3 = new Cheese(burger3);
	burger3 = new Avocado(burger3);
	this->order(burger3);
}


