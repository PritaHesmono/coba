//Program Form Booking Meja Restaurant
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int pil, pilihan;
	char nama[50], tanggal[20];
	printf("\t\tForm Booking Meja\n");
	printf("List Meja\n1. Reguler \n2. VIP\n3. VVIP\nPilihan : ");
	scanf("%d",&pil); getchar();
	switch (pil) //(A). Tentukan variable untuk switch
	{
		case 1 :
			printf("\nNama Peminjam : "); gets(nama); 
			printf("Tanggal Booking :"); gets(tanggal);
			printf("\nSelamat Menikmati ;)"); //(B). Tentukan syntax pemberhenti
		case 2 :
			printf("\nNama Peminjam : "); gets(nama); 
			printf("Tanggal Booking :"); gets(tanggal);
			printf("\nSelamat Menikmati ;)"); break;
		case 3 :
			printf("\nNama Peminjam : "); gets(nama); 
			printf("Tanggal Booking :"); gets(tanggal);
			printf("\nSelamat Menikmati ;)"); break;
		default : //(C). Tentukan syntax untuk case default
			printf("\nMeja tidak tersedia");
	}
	return 0;
}

