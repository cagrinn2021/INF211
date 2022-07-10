
#include <stdio.h>
#include <stdlib.h>
#include "1901022283_CE_P9_Q2_2DArrayDivision.h"  // kütüphane çaðýrýldý
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,j;
int n,m;  // kullanýlcak ifadeler tanýtýldý
int main(int argc, char *argv[]) {
	
	printf("matrisiniz kac satirli="); 
	scanf("%d",&n); // satýr bilgisi alýnýyor 
	printf("matrisiniz kac sutunlu=");
	scanf("%d",&m); // sutun bilgisi alýndý
	float dizi[n][m];  //matrisin boyutu belirlendi 
	for(i=0;i<n;++i) {   // matrisin elemanlarýný almak için döngü oluþturuldu
		for(j=0;j<m;++j) {
			printf("matrisin %d.satirin %d.sutununu giriniz=",i+1,j+1);
			scanf("%f",&dizi[i][j]); // elemanlar alýnýyor 
		
		}
	}
	ikiyebol(n,m,&dizi); // fonksiyona deðerler gönderildi ve arrayin adresi fonksiyona gönderiliyor 	
}
