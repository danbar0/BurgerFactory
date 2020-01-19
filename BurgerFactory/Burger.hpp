#ifndef BURGER_HPP
#define BURGER_HPP

#include <iostream>
#include <string>
#include <vector>

class Burger {
public:
	Burger(void);
	~Burger(void); 

	void prepare(void);
	void cook(void);
	void box(void); 

	std::string name;
	std::string cheese;
	std::string patty;
	std::vector<std::string> toppings; 

};

#endif