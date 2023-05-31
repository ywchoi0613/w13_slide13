#include <iostream>
#include "Car.h"
#include "SUV.h"
#include "Motor.h"
#include "Engineer.h"
using namespace std;
int main() {
	// sprint 5
	Car* myCars[5];
	myCars[0] = new SUV;
	myCars[1] = new SUV;
	myCars[2] = new Motor;
	myCars[3] = new Motor;
	myCars[4] = new SUV;
	for (int i = 0; i < 5; i++) myCars[i]->klaxon(1);

	// Sprint 4
	Car* myCar;
	myCar = new Car(100.0, 4, 4500.); cout << myCar->speed << "\n";
	//std::cout << myCar->getPrice() << "\n";
	//std::cout << myCar->price << "\n";
	Engineer* bab;
	bab = new Engineer;
	bab->setwheels2(myCar, 8);  //access to public function
	cout << bab->getCarPrice(myCar) << "\n";  //access to protected or private data
	cout << bab->getSpeed(myCar) << "\n";  //access to public data
	cout << myCar->wheels << "\n";
	cout << myCar->speed << "\n";
	bab->speedUp2(myCar, 10.0);  //access to protected or private function
	cout << myCar->speed << "\n";
	getchar();
}
