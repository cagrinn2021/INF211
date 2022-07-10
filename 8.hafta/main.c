#include <stdio.h>
#include <stdlib.h>
#include "my_array_library.h"


// ÇAÐRI ESEN 1901022283  ÝNF211 PROJE 8 
// ÇAÐRI ESEN 1901022283  ÝNF211 PROJE 8 



/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,m,i,j,ara;
int goster1,goster2,ara;
int main(int argc, char *argv[]) {
	
	printf("diziniz kac satirli=");
	scanf("%d",&n);
	printf("diziniz kac sutunlu=");
	scanf("%d",&m);
	int dizi[n][m];

	for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			printf("dizinin %dsatir%d.sutundegerini giriniz= ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	matris(n,m,dizi);
	printf("dizinin kacinsi satiri  gormek istiyorsunuz=");
	scanf("%d",&goster1);
	printf("%d.satirin hangi sutununu gormek istiyorsunuz  gormek istiyorsunuz=",goster1);
	scanf("%d",&goster2);
    sayibulma(goster1,goster2,n,m,dizi);
	printf("matrisde hangi sayinin indexsini ariyorsunuz=");
	scanf("%d",&ara);
	indexgoster(n,m,dizi,ara);
	
	
	tekrar(n,m,dizi);
	enkucuk(n,m,dizi);
	rowmax(n,m,dizi);
	transpoz(n,m,dizi);
	carpma(n,m,dizi);
	birimmatris(n,m,dizi);
	simetrik(n,m,dizi);
	bubble(n,m,dizi);
	
	
}
