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

	printf("������ ������� ����� ��������� ��� �� %d ����.\n", X);
	printf("������ ������� ����� ��������� ��� �� %d ����.\n", Y);
	printf("��� ������� ������ �������� ��� �� %.2f ����.\n", T);

	return 0;
}