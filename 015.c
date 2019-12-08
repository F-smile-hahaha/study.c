//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define n 100
int main()
{
	int num[n];
	int left = 0;
	int right = sizeof(num) / sizeof(num[0]) - 1;
	int mid = 0;
	int key;
	for (int i = 0; i <= n; i ++ ){
		num[i] = i+1;
	}
	printf("输入你想查找的数字:");
	scanf("%d", &key);
	while (left <= right){
			mid = (left + right) / 2;
			if (key > num[mid]){
				left = mid+1;
			}
			else if (key < num[mid]){
				right = mid-1;
			}
			else{
				printf("找到了,下标为： %d \n", mid);
				break;
			}
	}
	if (left >right){
		printf("没找到：-1\n");
	}
	system("pause");
	return 0;
}