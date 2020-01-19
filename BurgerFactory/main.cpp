// DecoratorPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CountryBurger.hpp"
#include "HipsterBurger.hpp"


int main()
{
	CountryBurger countryBurger;
	HipsterBurger hipsterBurger;

	countryBurger.orderBurger("Cheeseburger"); 
	hipsterBurger.orderBurger("Beanburger");

}
