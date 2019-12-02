//实现一个函数，判断一个数是不是素数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void  Jug(int x){
		if (x <= 1){
			printf("您的输入有误！\n");
		}
		else if  (x == 2){
			printf("是素数！\n");
		}
		else if (x % 2 != 0){
			printf("是素数！\n");
		}
		else{
			printf("不是素数！\n");
		}
}

int main()
{
	int num;
		printf("请输入一个数字 ：");
		scanf("%d", &num);
		Jug(num);
		system("pause");
		return 0;
}