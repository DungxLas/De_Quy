#include <stdio.h>
#include <conio.h>
#pragma warning (disable: 4996)

int TinhTong_DeQuy(int n) {
	//dieu kien dung
	if (n == 1)
	{
		return 1;
	}

	return TinhTong_DeQuy(n - 1) + n;
}

int TinhTong_DeQuyDuoi(int n, int x = 0) {
	//dieu kien dung
	if (n == 1)
	{
		return n + x;
	}

	return TinhTong_DeQuyDuoi(n - 1, n + x);
}

int main() {
	int n = 5;
	printf("\nS(%d) = %d", n, TinhTong_DeQuy(n));
	printf("\nS(%d) = %d", n, TinhTong_DeQuyDuoi(n));

	getch();
	return 0;
}