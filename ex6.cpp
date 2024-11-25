#include<stdio.h>

int main()
{
	int num1 , num2 , tong , tich , hieu , thuong , answer ;
	printf("Moi ban nhap so thu nhat . ");
	scanf("%d",&num1);
	printf("Moi ban nhap so thu hai . ");
	scanf("%d",&num2);
	printf("           CALCULATOR");
	printf("\n1.Tong 2 so : ");
	printf("\n2.Hieu 2 so : ");
	printf("\n3.Tich 2 so : ");
	printf("\n4.Thuong 2 so : ");	
	printf("\n5.Thoat : ");
	tong = num1 + num2 ;
	hieu = num1 - num2;
	tich = num1 * num2;
	thuong = num1 / num2;  
	while(answer != 5)
	{
		printf("\nMoi ban chon :  ");
		scanf("%d",&answer);
		switch(answer)
		{
			case 1 :
				printf("\nTong 2 so la : %d ", tong );
				break;
			case 2 :
				printf("\nHieu 2 so la : %d ", hieu );
				break;
			case 3 :
				printf("\nTich 2 so la : %d ", tich);
				break;
			case 4 :
				printf("\nThuong  2 so la : %d ", thuong );
				break;
				
		}
	}
	return 0 ; 
}





	