#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <limits.h>
#pragma warning (disable: 4996)

void NhapMang(int* A, int n, int i = 0) {
	if (i == n)
	{
		return;
	}
	printf("Nhap gia tri phan tu A[%d] = ", i);
	scanf("%d", &A[i]);
	printf("\n");
	NhapMang(A, n, i + 1);
}

void XuatMang(int* A, int n, int i = 0) {
	if (i == n)
	{
		return;
	}
	printf("Gia tri phan tu A[%d] = %d\n", i, A[i]);
	XuatMang(A, n, i + 1);
}

int Sum(int* A, int n, int i = 0, int Tong = 0) {

	if (i == n)
	{
		return Tong;
	}
	return Sum(A, n, i + 1, A[i] + Tong);
}

int TimMin(int* A, int n, int i = 0, int Min = INT_MAX) {
	if (i == n)
	{
		return Min;
	}
	return TimMin(A, n, i + 1, A[i] < Min ? A[i] : Min);
}

int TimMax(int* A, int n, int i = 0, int Max = INT_MIN) {
	if (i == n)
	{
		return Max;
	}
	return TimMax(A, n, i + 1, A[i] > Max ? A[i] : Max);
}

void HoanVi(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void SapXep(int* A, int n,char x,  int i = 0) {
	if (x == 't')
	{
		if (i == n - 1)
		{
			return;
		}
		for (int k = i + 1; k < n; k++)
		{
			if (A[i] > A[k])
			{
				HoanVi(A[i], A[k]);
			}
		}
		SapXep(A, n, x, i + 1);
	}
	else if (x == 'g')
	{
		if (i == n - 1)
		{
			return;
		}
		for (int k = i + 1; k < n; k++)
		{
			if (A[i] < A[k])
			{
				HoanVi(A[i], A[k]);
			}
		}
		SapXep(A, n, x, i + 1);
	}
}

int main() {
	int n = 5;
	int* A = new int[n];

	NhapMang(A, n);
	XuatMang(A, n);
	printf("\n");
	Sum(A, n);
	printf("\n");
	TimMin(A, n);
	printf("\n");
	TimMax(A, n);

	delete[] A;

	getch();
	return 0;
}