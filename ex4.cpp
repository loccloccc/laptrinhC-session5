#include<stdio.h>

int main()
{
	int n, tich ;
	printf("\Moi ban nhap so tu 1 den 10 : ");
	scanf("%d",&n);
	if(n>0){
		for(int i = 1 ; i <= n ; i++ )
		{
			tich = n*i;
			printf("%d * %d = %d\n", n , i , tich);
		}
		
	}
	else
	{
		printf("\nBan da nhap sai so.");
	}
	return 0 ; 
	
}