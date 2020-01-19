#include "HipsterBurger.hpp"

HipsterBurger::HipsterBurger(void) {

}

HipsterBurger::~HipsterBurger(void) {

}

Burger* HipsterBurger::createBurger(std::string type) {
	if (type == "Beanburger") {
		return new HipsterStyleBeanBurger();
	}
	else if (type == "Pineappleburger") {
		return new HipsterStylePineappleBurger();
	}
	else {
		return nullptr;
	}
}