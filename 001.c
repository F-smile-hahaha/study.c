//输入1000年---2000年之间的闰年
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++){
		if (i % 4 == 0 || i % 100 != 0 && i % 400 == 0){
			printf(" %d ", i);
		}
	}
	system("pause");
	return 0;
}