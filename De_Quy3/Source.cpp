#include <stdio.h>
#include <conio.h>
#pragma warning (disable: 4996)

int Tinh_DeQuy(int n) {
	//dieu kien dung
	if (n == 0)
	{
		return 1;
	}

	int Tong = 0;
	for (int i = 1; i <= n; i++)
	{
		Tong += i * i * Tinh_DeQuy(n - i);
	}

	return Tong;
}

int main() {
	int n = 5;
	printf("\nS(%d) = %d", n, Tinh_DeQuy(n));

	getch();
	return 0;
}