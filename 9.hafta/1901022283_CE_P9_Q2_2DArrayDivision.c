#include <stdio.h>
#include "1901022283_CE_P9_Q2_2DArrayDivision.h"
void ikiyebol(int n,int m, float *dizi) {   // fonksiyon ismi tanýldý dizi pointer olarak belirlendi gelen adresteki sayýlarý almak üzere
	int i,j;
		printf("\nmatris elemanlarinizin /2 yapilmis hali \n");
	for(i=0;i<n;i++) { // dongu olusturuldu 
		for(j=0;j<m;j++) {
		
			*dizi=*dizi/(2.0); // gelen adresteki sayýya kendi içindeki sayinin 2 ye bölüp bölünmüþ sayýsý atandý
			printf(" %.2f ",*dizi);
			 // olusan yeni sayi yazdýrýldý 
			dizi++; // dizinin adres konumu arttýrýldý  float 4 bit oldugu için 4 er 4 er artýp her bir deðere ayný iþlem yapýlacak 
		} printf("\n"); // alt satýra geçildi 
	}
	printf("------%f",*dizi);
	
	
}

