// 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222  n   n+n*10  
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0 , i = 0;
    int add = 0, num = 0;
	while (1){
		scanf("%d", &n);
		if (n<0 || n>9){
			printf("您的输入有误!\n");
		}
		else{
			for (i = 1; i <= 5; i++){
				num = num * 10 + n;
				add += num;
			}
			break;
		}
	}
	printf(" Sn = %d\n ", add );
	system("pause");
	return 0;
}