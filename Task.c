#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int X = 15;
	int Y = 20;

	double P1 = 1.0 / X;
	double P2 = 1.0 / Y;

	double P = P1 + P2;

	double T = 1.0 / P;

	printf("Первая бригада может построить дом за %d дней.\n", X);
	printf("Вторая бригада может построить дом за %d дней.\n", Y);
	printf("Обе бригады вместе построят дом за %.2f дней.\n", T);

	return 0;
}