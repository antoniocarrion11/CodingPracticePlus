//Practice for polymorphism and inheritance in C++

#include <iostream>
using namespace std;

class Ship {
	public:
		Ship();
		Ship(string name, int year);
		void setName(string name);
		string getName();
		int getYear() const;
		void printNameAndYear();
	private:
		string name;
		const int year;
};

class CruiseShip : public Ship {
	public:
		CruiseShip();
		CruiseShip(Ship ship, int passengers);		
		CruiseShip(string name, int year, int passengers);
		void setPassengers(int passengers);
		int getPassengers();
		void printNameAndYear();
	private:
		int passengers;
};

class CargoShip : public Ship {
	public:
		CargoShip();
		CargoShip(Ship ship, int tons);
		CargoShip(string name, int year, int tons);
		void setTons(int tons);
		int getTons();
		void printNameAndYear();
	private:
		int tons;
};