//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
	printf("����������ҵ�����:");
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
				printf("�ҵ���,�±�Ϊ�� %d \n", mid);
				break;
			}
	}
	if (left >right){
		printf("û�ҵ���-1\n");
	}
	system("pause");
	return 0;
}