//输入一 个数字n,计算Sn=1!+2!+....+n!
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n ,num=1,add=0;
	int i, j;
	printf("输入数字n：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		num = 1;
		for (j = 1; j <= i; j++){
			num *= j;
		}
		add += num;
	}
	printf(" %d\n ", add );
	system("pause");
	return 0;
}
