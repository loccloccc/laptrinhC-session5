#include<stdio.h>

int main()
{
	int tich  ;
	for(int i = 1  ; i <= 9 ; i++)
	{
		for(int j = 1 ; j <= 9 ; j++ )
		{
			tich = i * j; 
			printf("%d * %d = %d\n", i , j , tich);
		}
		printf("\n");
	}
}