// ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	for (i = 1; i <= 100; i++){
		if (i / 10 == 9 || i % 10 == 9){
			num++;
			printf(" %d \n ", i);
		}
	}
	printf("9���ֵĴ�����%d \n", num);
	system("pause");
	return 0;
}