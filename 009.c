//ʵ��һ�������ж�year�ǲ�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void  Jug(int x){
	if (x % 4 == 0 && x % 100 != 0 || x%400 == 0){
		printf("�����꣡\n");
	}
	else{
		printf("�������꣡\n");
	}
}

int main(  )
{
	int year;
	printf("��������ݣ�");
	scanf("%d", &year);
	Jug(year);
	system("pause");
	return 0;
}