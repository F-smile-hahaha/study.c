#define m 10
#include<stdio.h>
#include<stdlib.h>
void Init(int x[m]){
	printf("x[m]=");
	for (int i =0 ; i <m; i++){
		x[i] = i;//ʵ�ֺ���init������ʼ������
		printf(" %d " , x[i] );
	}
	putchar('\n');
}

void Reverse(int x[m]){
	int num;
	printf("���ú�x[m]=");
	for (int i = 0; i <(m/2-1); i++){
		num = x[i];
		x[i] = x[m - i-1];
		x[m - i-1] = num;//ʵ��reverse���������������Ԫ�ص�����
	}
	for (int i = 0; i <m; i++){
		printf(" %d ", x[i]);
	}
	putchar('\n');
}

void Empty(int x[m]){
	printf("������飬x[m]=");
	for (int i = 0; i <m ; i++){
		x[i] = 0;//ʵ��empty�����������
		printf(" %d ", x[i]);
	}
	putchar('\n');
}

int main( ){
	int num[m];
	Init(num);
	Reverse(num);
	Empty(num);
	system("pause");
	return 0;
}