#include "main.h"

class Bus {
public:
	string brand;
	string number;
	int price;
	int count;

	Bus() {}  //default constructor

	Bus(string brand, string number, int price, int count) :
		brand(brand), number(number), price(price), count(count) {
	}

};