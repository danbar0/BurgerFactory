#include "Burger.hpp"

using namespace std; 

Burger::Burger(void) {

}

Burger::~Burger(void) {

}

void Burger::prepare(void) {
	cout << "Preparing " << this->name << endl; 
}

void Burger::cook(void) {
	cout << "cooking that thing..." << endl;
}

void Burger::box(void) {
	cout << "throwing it in a box..." << endl;
}