#include <stdio.h>


int i=0;
int j,toplam;
int sayac=0;  // ifadeler tanimlandi
int k,m;
int size=0;


int main  () {
	
	printf("kac elemanli dizi olusturucaksaniz =");
	scanf("%d",&size);
	
	int dizi[size];
	int prime[size]; // dizi atamalar� yap�ld�
	
	if (size<=20) { 
	
	for(i=0;i<size;++i) { // dizinin elemanlar�n� almak i�in dongu olu�turuldu
		
		printf("dizinin %d.elemanini girin =",i+1);
		scanf("%d",&dizi[i]); // elemanlar alindi
	
		
	}
	
	k=0;
	for(j=0;j<size;++j) { // t�m dizinin elemanlar�n� kontrol etmek icin dongu olusturuldu
		m=0;
		for(i=2;i<dizi[j];++i) // dizinin eleman�  olanakadar i yi artt�r�p dizinin eleman�na kadar b�ld�r�cez
		{
			if(dizi[j]%i==0)//eger b�l�n�rse kalan s�f�r olursa bu say� asal de�ildir
			{
				m++;// asal olmad�g� i�in assal sayac�n� 1 artt�r�yoruz
			}
		}
		if(m==0&&dizi[j]>1) {prime[k]=dizi[j]; ++k; // eger kalan 0 olursa asal de�ildir ve elemanlar�n 1 den b�y�k olmas� laz�m ise dizinin j.nci eleman� primea atan�r ve k de�eri artt�r�l�r
		
			
		}
	}
	if(k==0) printf("asal sayi yoktur"); /// eger k artmazsa bilinir ki asal sayi yoktur o yazd�r�l�r
	else {
		for(j=0;j<k;++j) // k sayisi var ise k dan k�c�k olana kadar dongu olusturulur  ve asallar yazd�r�ilir 
		{printf("dizinin sayisi olan bu sayi =%d asaldir\n",prime[j]);
		}
	}
	
	
	
}
else printf("lutfen 20 veya daha kucuk sayi giriniz");
}

