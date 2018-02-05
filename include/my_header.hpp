//  Copyright (c) 2017 Antoine Tran Tan
//  Copyright (c) 2017 Colin Chouraki
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <time.h>
#include <stdlib.h>

void exo1(void)
{
	long a = 2, b = 1, c = 0;

	while (a + b > 0)
	{

		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}
void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= n)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}
int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}

void exo3(void)
{
	int z = 0;
	int x = essayer_code(150);
	if (x != z) {
		while (z > 9999) {
			z = z + 1;
		}
	}
}
unsigned short lancer_de(void);

void exo4(void)
{
	int x = lancer_de();
	int point = 0;
	int joueur1 = 0;
	int joueur2 = 0;
	int tour = 0;

	while (joueur1 == 50 && joueur2 == 50)
	{
		while (x != 1) {
			if (x % 2 == 0) {
				point++;
			}
			if (x = 3){
				point = point * 3;
			}
			if (x = 5) {
				point = 0;
			}
		}else{

		if (tour % 2 == 0) {
			joueur2 = point;
		}
		else {
			joueur1 = 0;
		}

		}
	}
}
#endif // MY_HEADER_HPP

