/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, a = 0, b = 0, c = 0;
	double num ;
	printf("输出0--999之间的水仙花数：\n");
	//for (i = 99; i <= 999; i++){
	//	a = i / 100;//百位
	//	b = i / 10%10;//十位
	//	c = i % 10;//个位
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