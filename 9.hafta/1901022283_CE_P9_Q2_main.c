
#include <stdio.h>
#include <stdlib.h>
#include "1901022283_CE_P9_Q2_2DArrayDivision.h"  // k�t�phane �a��r�ld�
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,j;
int n,m;  // kullan�lcak ifadeler tan�t�ld�
int main(int argc, char *argv[]) {
	
	printf("matrisiniz kac satirli="); 
	scanf("%d",&n); // sat�r bilgisi al�n�yor 
	printf("matrisiniz kac sutunlu=");
	scanf("%d",&m); // sutun bilgisi al�nd�
	float dizi[n][m];  //matrisin boyutu belirlendi 
	for(i=0;i<n;++i) {   // matrisin elemanlar�n� almak i�in d�ng� olu�turuldu
		for(j=0;j<m;++j) {
			printf("matrisin %d.satirin %d.sutununu giriniz=",i+1,j+1);
			scanf("%f",&dizi[i][j]); // elemanlar al�n�yor 
		
		}
	}
	ikiyebol(n,m,&dizi); // fonksiyona de�erler g�nderildi ve arrayin adresi fonksiyona g�nderiliyor 	
}
