#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private data
}
int Engineer::getSpeed(Car* xx) {
	return xx->speed; // access public data
}
void Engineer::setwheels2(Car* xx, int i) {
	return xx->setWheels(i); // access public function
}
void Engineer::speedUp2(Car* xx, float x) {
	return xx->speedUp(x); // access protected or private function
}
