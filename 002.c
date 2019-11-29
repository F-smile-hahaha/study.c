// 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double num = 0;
	for (i = 1; i <= 100; i++){
		if (i % 2 != 0)
			 num+=1.0/i;
		else num-=1.0/i;
	}
	printf("输出答案：%lf", num );
	system("pause");
	return 0;
}