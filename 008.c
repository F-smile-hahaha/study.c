//使用函数实现两个数的交换。
#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y)
{
	int sum;
	sum = *x;
	*x= *y;
	*y = sum;
	printf(" a=%d b=%d\n", *x, *y);
}

int main()
{
	int a = 3, b = 4;
	printf(" a=%d b=%d\n", a, b);
	Swap(&a, &b);
	system("pause");
	return 0;
}