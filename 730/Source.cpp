#include <stdio.h>
#include <conio.h>
#include <math.h>
#pragma warning (disable: 4996)

int DQ730(int n, int x = 1) {
	if (n == 1)
	{
		return x;
	}
	return DQ730(n - 1, x + n);
}

float DQ732(int n, float x = 1) {
	if (n == 1)
	{
		return x;
	}
	return DQ732(n - 1, x + 1.0 / n);
}

float DQ739(int n, float x = 1) {
	if (n == 1)
	{
		return x;
	}
	if (n == -1)
	{
		return 1.0/x;
	}
	if (n < 0)
	{
		return DQ739(n + 1, x) * 1.0/n;;
	}
	else if (n == 0)
	{
		return 1;
	}
	return DQ739(n - 1, x) * n;
}

float DQ741(int n, float x) {
	if (n == 1)
	{
		return x;
	}
	return DQ741(n - 1, x) + pow(x, n);
}

float DQ741_Duoi(float x, int n, float y = 0) {
	if (n == 0)
	{
		return y;
	}
	return DQ741_Duoi(x, n - 1, y + pow(x, n));
}

float DQ744(int n) {
	if (n == 1)
	{
		return 1;
	}
	return DQ744(n - 1) + 1.0 / DQ730(n);
}

float DQ744_Duoi(int n, float x = 1) {
	if (n == 1)
	{
		return x;
	}
	return DQ744_Duoi(n - 1, x + 1.0 / DQ730(n));
}

int DQ747(int n) {
	if (n % 2 != 0)
	{
		return n;
	}
	return DQ747(n / 2);
}

float DQ748(int n) {
	if (n = 1)
	{
		return sqrt(2.0);
	}
	return sqrt(DQ748(n - 1) + 2);
}

float DQ748_Duoi(int n, float x = sqrt(2.0)) {
	if (n = 1)
	{
		return x;
	}
	return DQ748_Duoi(n - 1, sqrt(2.0 + x));
}

float DQ751(int n) {
	if (n == 1)
	{
		return 0.5;
	}
	return 1 / (1 + DQ751(n - 1));
}

float DQ751_Duoi(int n, float x = 0.5) {
	if (n == 1)
	{
		return x;
	}
	return DQ751_Duoi(n - 1, 1.0 / (1.0 + x));
}