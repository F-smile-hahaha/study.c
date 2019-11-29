// 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	for (i = 1; i <= 100; i++){
		if (i / 10 == 9 || i % 10 == 9){
			num++;
			printf(" %d \n ", i);
		}
	}
	printf("9出现的次数：%d \n", num);
	system("pause");
	return 0;
}