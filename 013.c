#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, max = 0;
	scanf("%d %d", &a, &b);
	int smaller;
	smaller = a > b ? b : a;
	for (int i = 2; i <= smaller; i++){
		if (a%i == 0 && b%i == 0){
			max = i;
		}
	}
	printf("最大公约数：%d\n", max);
	system("pause");
	return 0;
}