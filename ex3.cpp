#include<stdio.h>

int main()
{
	int n , tong = 0 ;
	printf("\nMoi ban nhap so nguyen duong :");
	scanf("%d",&n);
	if (n > 1 )
	{
		for(int i = 1 ; i <=n ; i++)
		{
			tong += i;
		}
		printf("\nTong cac so la : %d", tong );
	}
	else
	{
		printf("\nban da nhap sai so .");
	}
	return 0 ; 

}