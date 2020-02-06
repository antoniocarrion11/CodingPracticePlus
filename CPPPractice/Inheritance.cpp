//Practice for polymorphism and inheritance in C++

#include"Inheritance.h"
using namespace std;

Ship::Ship() : name(""), year(1900){}

Ship::Ship(string name, int year): name(name), year(year){}

void Ship::printNameAndYear() {
	cout << getName() << " first sailed in the year " << getYear() << endl;
}

void Ship::setName(string name){
	this->name = name;
}

string Ship::getName() {
	return this->name;
}

int Ship::getYear() const{
	return this->year;
}

CruiseShip::CruiseShip() : Ship(), passengers(0){}

CruiseShip::CruiseShip(Ship ship, int passengers): Ship(ship), passengers(passengers){}

CruiseShip::CruiseShip(string name, int year, int passengers) : Ship(name, year), passengers(passengers){}

int CruiseShip::getPassengers() {
	return passengers;
}

void CruiseShip::printNameAndYear() {
	cout << "The " << getName() << "'s maiden voyage was in the year " << getYear() << ", and it sailed with " << getPassengers() << " on board" << endl;

}