//ʵ��һ���������ж�һ�����ǲ���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void  Jug(int x){
		if (x <= 1){
			printf("������������\n");
		}
		else if  (x == 2){
			printf("��������\n");
		}
		else if (x % 2 != 0){
			printf("��������\n");
		}
		else{
			printf("����������\n");
		}
}

int main()
{
	int num;
		printf("������һ������ ��");
		scanf("%d", &num);
		Jug(num);
		system("pause");
		return 0;
}