#define m 10
#include<stdio.h>
#include<stdlib.h>
void Init(int x[m]){
	printf("x[m]=");
	for (int i =0 ; i <m; i++){
		x[i] = i;//实现函数init（）初始化数组
		printf(" %d " , x[i] );
	}
	putchar('\n');
}

void Reverse(int x[m]){
	int num;
	printf("逆置后，x[m]=");
	for (int i = 0; i <(m/2-1); i++){
		num = x[i];
		x[i] = x[m - i-1];
		x[m - i-1] = num;//实现reverse（）函数完成数组元素的逆置
	}
	for (int i = 0; i <m; i++){
		printf(" %d ", x[i]);
	}
	putchar('\n');
}

void Empty(int x[m]){
	printf("清空数组，x[m]=");
	for (int i = 0; i <m ; i++){
		x[i] = 0;//实现empty（）清空数组
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