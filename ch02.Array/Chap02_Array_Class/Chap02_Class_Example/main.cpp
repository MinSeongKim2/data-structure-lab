#include <cstdio>
#include "car.h"
#include "sportscar.h"
#include "Reangular.h"

//void main() {
	Car myCar;
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
}

int main() {
	Car myCar(50, "K5", 4);
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();

	SportsCar scar;
	scar.speedUp();
} 


