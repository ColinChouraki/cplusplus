//  Copyright (c) 2017 Antoine Tran Tan
//  Copyright (c) 2017 Colin Chouraki
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <cmath>

double exo1(double rayon)
{
	double v;
	v = 4/3 *3.14 * rayon * rayon * rayon;
	return v;
}
void exo2(short a, short b)
{
	short y;

	y = a < b && !a;
}
double exo3(double rayon)
{
	double aire;
	aire = 3.14 *pow(rayon, 2.f);
	return aire;
}
double exo4(short c, short d, short e)
{
	if (c > e, d)
		return c;
	else if (d > e, c)
		return d;
	else
		return e;
}
#endif // MY_HEADER_HPP

