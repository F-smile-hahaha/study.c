/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, a = 0, b = 0, c = 0;
	double num ;
	printf("���0--999֮���ˮ�ɻ�����\n");
	//for (i = 99; i <= 999; i++){
	//	a = i / 100;//��λ
	//	b = i / 10%10;//ʮλ
	//	c = i % 10;//��λ
	//	num = pow(a, 3) + pow(b, 3) + pow(c, 3);
	for (i = 99 ; i <= 999 ; i++){
		num = 0;
		for ( int j = i ; j ; j /= 10 ){
			num += pow(j%10, 3);
		}
		if (i == num){
			printf(" %d ", i );
		}
	}
	system("pause");
	return 0;
}
*/