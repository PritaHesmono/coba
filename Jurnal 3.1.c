#include <stdio.h>
#include <string.h> //(A). Tentukan Library agar strcmp() berfungsi

int main()
{
	char user[50], pass[50]; //(B). Tentukan tipe data 
	printf("\t===SELAMAT DATANG DI DASKOM REQRUITMENT WEB==="); 
	printf("\nMasukkan Username \t: "); 
	gets(user); 
	printf("\nMasukkan Password \t: ");
	gets(pass);
	
	if(strcmp (user, "adminisme")==0 && strcmp(pass, "1DASkom@")==0) //(C). Lengkapi sintaks perbandingan string
	{
		printf("\nLogin Berhasil"); printf("\nSilahkan Lanjutkan...\n");
	}
	else
	{
		printf("\nUsername atau password salah!\n"); 
		printf("Silahkan Ulang");
	}
	return 0;
}
