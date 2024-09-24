#include <stdio.h>

main()
{
	float USD,IDR,JPY,EUR;
	int Pilih;
	
	printf("USD :"); scanf ("%f",&USD);
	printf("Menu Konversi\n");
	printf("1. IDR\n");
	printf("2. JPY\n");
	printf("3. EUR\n");
	printf("Pilih Menu:\n"); scanf("%d",&Pilih);
	
	switch(Pilih)
	{
		case 1:
			IDR=14382.30*USD;
			printf("Hasil Konversi: %.2f",IDR);break;
		case 2:
			JPY=115.21*USD;
			printf("Hasil Konversi: %.2f",JPY);break;
		case 3:
			EUR=0.90*USD;
			printf("Hasil Konversi: %.2f",EUR);break;
		default: printf("Pilihan Tidak ada");
			
	}
}
