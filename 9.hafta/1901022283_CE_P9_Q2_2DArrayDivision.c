#include <stdio.h>
#include "1901022283_CE_P9_Q2_2DArrayDivision.h"
void ikiyebol(int n,int m, float *dizi) {   // fonksiyon ismi tan�ld� dizi pointer olarak belirlendi gelen adresteki say�lar� almak �zere
	int i,j;
		printf("\nmatris elemanlarinizin /2 yapilmis hali \n");
	for(i=0;i<n;i++) { // dongu olusturuldu 
		for(j=0;j<m;j++) {
		
			*dizi=*dizi/(2.0); // gelen adresteki say�ya kendi i�indeki sayinin 2 ye b�l�p b�l�nm�� say�s� atand�
			printf(" %.2f ",*dizi);
			 // olusan yeni sayi yazd�r�ld� 
			dizi++; // dizinin adres konumu artt�r�ld�  float 4 bit oldugu i�in 4 er 4 er art�p her bir de�ere ayn� i�lem yap�lacak 
		} printf("\n"); // alt sat�ra ge�ildi 
	}
	printf("------%f",*dizi);
	
	
}

