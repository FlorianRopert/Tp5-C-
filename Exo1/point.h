#pragma once
#ifndef POINT_H // Pour éviter les inclusions multiples
#define POINT_H

class point {
private:

	float x;
	float y;
public:
	point(float x0, float y0);
	void afficher();
	void deplacer(float dx, float dy);

};

#endif
