#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, j = 0;
	int n = 7;
	for (i = 1; i <= n; i++){
		for (j=1; j <= n - i; j++){
			putchar(' ');
		}
		for (j=0; j < 2 * i - 1; j++){
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n - 1; i>0&&i < 2*n - 1; i--){
 		for (j = 1; j <= n - i; j++){
			putchar(' ');
		}
		for (j = 0; j < 2 * i - 1; j++){
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}  