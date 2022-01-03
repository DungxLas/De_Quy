#include <stdio.h>
#include <conio.h>
#pragma warning (disable: 4996)

//Khai bao nguyen mau ham
int X_n(int);
int Y_n(int);

int X_n(int n) {
	if (n == 0)
	{
		return 1;
	}
	return X_n(n - 1) + Y_n(n - 1);
}

int Y_n(int n) {
	if (n == 0)
	{
		return 0;
	}
	return 3 * X_n(n - 1) + 2 * Y_n(n - 1);
}

int main() {
	int n = 4;
	printf("\nX(%d) = %d", n, X_n(n));

	getch();
	return 0;
}