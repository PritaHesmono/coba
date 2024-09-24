#include <stdio.h>

float s1,s2,t1,t2,V1,V2;
main ()
{
	printf("Kecepatan Mobil 1 : "); scanf("%f",&s1);
	printf("Kecepatan Mobil 2 : "); scanf("%f",&s2);
	printf("waktu Mobil 1 : "); scanf("%f",&t1);
	printf("Waktu Mobil 2 : "); scanf("%f",&t2);
	
	V1=s1/t1;
	V2=s2/t2;
	
	printf("V1=%f\n",V1);
	printf("V2=%f\n",V2);
	
	if (V1>V2)
	printf("Kec.Mobil 1 Lebih Cepat Dari pada Kec.Mobil 2");
	
	else if (V2>V1)
	printf("Kec.Mobil 2 Lebih Cepat Dari pada Kec.Mobil 1");
	
	else if (V1==V2)
	printf("Kec.Mobil 1 sama dengan Kec.Mobil 2");
	
	return 0;
}
