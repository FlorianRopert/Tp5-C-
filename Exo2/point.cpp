#include "point.h"
#include <iostream>
float point::absisse() const {
	return x;
}
float point::ordonnee() const {
	return y;
}
void point::deplacer(float dx, float dy) {
	x += dx;
	y += dy;
}
point::point(float x0, float y0) {
	x = x0;
	y = y0;
}