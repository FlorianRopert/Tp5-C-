#include "point.h"
#include <iostream>
void point::afficher() {
	std::cout << "Point(" << x << ", " << y << ")" << std::endl;
}
void point::deplacer(float dx, float dy) {
	x += dx;
	y += dy;
}
point::point(float x0, float y0) {
	x = x0;
	y = y0;
}