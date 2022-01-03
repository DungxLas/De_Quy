#include <stdio.h>
#include <conio.h>
#pragma warning (disable: 4996)

int Fibo_DeQuy(int n) {
	//dieu kien dung
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return Fibo_DeQuy(n - 1) + Fibo_DeQuy(n - 2);
}

int main() {
	int n = 5;
	printf("\nS(%d) = %d", n, Fibo_DeQuy(n));

	getch();
	return 0;
}