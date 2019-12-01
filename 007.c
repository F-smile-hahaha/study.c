//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Sum(int x){
	int num = 0;
	for (int i = 1; i <= x; i++){
		for (int j = 1; j <= i; j++){
			num = i*j;
			printf("  %d * %d = %d  ", i, j, num);
		}
		putchar('\n');
	}
}

int main( )
{
	int n;
	printf("请输入数字：");
	scanf("%d", &n);
	Sum(n);
	system("pause");
	return 0;
}*/