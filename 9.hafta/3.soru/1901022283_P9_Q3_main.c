#include <stdio.h>	
#include <stdlib.h>
#include "1901022283_CE_P9_Q3_2DArrayLibrary.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,m,i,j,ara;
int goster1,goster2,ara;
int main(int argc, char *argv[]) {
	
	
	printf("diziniz kac satirli=");
	scanf("%d",&n);
	printf("diziniz kac sutunlu=");
	scanf("%d",&m);
	int dizi[n][m];  // matrislerin boyutu atandý 
    int trans[m][n];
    int bos[n][m];
	for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {  // iki boyutlu eleman deðerleri alýndý 
			printf("dizinin %dsatir%d.sutundegerini giriniz= ",i+1,j+1);
			scanf("%d",&dizi[i][j]);		
		}
	}
	
	
	
	matris(n,m,&dizi);  // fonksiyon cagirildi 
	
	printf("matrisde hangi satiri gormek istiyorsunuz");
	scanf("%d",&goster1);
	printf("%d.satirin hangi sutununu gormek istiyorsunuz",goster1);
	scanf("%d",&goster2);
	sayibulma(goster1,goster2,n,m,&dizi); // fonksiyon cagirildi  bu deðerler fonksiyona gönderildi 
	printf("!!! lutfen matrisinizin elemani olan bir sayi giriniz \n matriste hangi sayinin indexini ariyorsunuz=");
	scanf("%d",&ara);
	indexgoster(n,m,&dizi,ara); // fonksiyon cagirildi   bu deðerler fonksiyona gönderildi  
	enkucuk(n,m,&dizi);
	rowmax(n,m,&dizi); // fonksiyon cagirildi   bu deðerler fonksiyona gönderildi 
	birimmatris(n,m,&dizi);
	transpoz(n,m,&dizi,&trans);// fonksiyon cagirildi   bu deðerler fonksiyona gönderildi  
	simetrik(n,m,&dizi,&trans);// fonksiyon cagirildi  bu deðerler fonksiyona gönderildi  
    tekrarsayan(n,m,&dizi);// fonksiyon cagirildi   bu deðerler fonksiyona gönderildi 
	}
	
