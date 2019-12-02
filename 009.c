//实现一个函数判断year是不是润年
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void  Jug(int x){
	if (x % 4 == 0 && x % 100 != 0 || x%400 == 0){
		printf("是闰年！\n");
	}
	else{
		printf("不是闰年！\n");
	}
}

int main(  )
{
	int year;
	printf("请输入年份：");
	scanf("%d", &year);
	Jug(year);
	system("pause");
	return 0;
}