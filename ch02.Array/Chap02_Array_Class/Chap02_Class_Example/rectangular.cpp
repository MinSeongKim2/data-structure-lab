#include <cstdio>
#include "Rectangle.h"

void main() {
	Rectangle r(10, 20);
	double perimeter = r.getPerimeter();
	std::cout << "Rectangular l" << std::endl;
	std::cout << "Area: " << r.getArea() << std::endl;
	std::cout << "Perimeter:" << perimeter << std::endl;
	std::cout << "is square:" << std::boolalpha << r.isSquare() << std::endl;
}
