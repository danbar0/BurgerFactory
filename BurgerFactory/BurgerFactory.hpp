#ifndef BURGERFACTORY_HPP
#define BURGERFACTORY_HPP

#include <iostream>
#include "Burger.hpp"

class BurgerFactory {
public:
	BurgerFactory(void);
	~BurgerFactory(void); 

	Burger* orderBurger(std::string type);
	virtual Burger* createBurger(std::string type); 

};

#endif