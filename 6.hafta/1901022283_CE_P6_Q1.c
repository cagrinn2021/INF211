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
	int prime[size]; // dizi atamalarý yapýldý
	
	if (size<=20) { 
	
	for(i=0;i<size;++i) { // dizinin elemanlarýný almak için dongu oluþturuldu
		
		printf("dizinin %d.elemanini girin =",i+1);
		scanf("%d",&dizi[i]); // elemanlar alindi
	
		
	}
	
	k=0;
	for(j=0;j<size;++j) { // tüm dizinin elemanlarýný kontrol etmek icin dongu olusturuldu
		m=0;
		for(i=2;i<dizi[j];++i) // dizinin elemaný  olanakadar i yi arttýrýp dizinin elemanýna kadar böldürücez
		{
			if(dizi[j]%i==0)//eger bölünürse kalan sýfýr olursa bu sayý asal deðildir
			{
				m++;// asal olmadýgý için assal sayacýný 1 arttýrýyoruz
			}
		}
		if(m==0&&dizi[j]>1) {prime[k]=dizi[j]; ++k; // eger kalan 0 olursa asal deðildir ve elemanlarýn 1 den büyük olmasý lazým ise dizinin j.nci elemaný primea atanýr ve k deðeri arttýrýlýr
		
			
		}
	}
	if(k==0) printf("asal sayi yoktur"); /// eger k artmazsa bilinir ki asal sayi yoktur o yazdýrýlýr
	else {
		for(j=0;j<k;++j) // k sayisi var ise k dan kücük olana kadar dongu olusturulur  ve asallar yazdýrýilir 
		{printf("dizinin sayisi olan bu sayi =%d asaldir\n",prime[j]);
		}
	}
	
	
	
}
else printf("lutfen 20 veya daha kucuk sayi giriniz");
}

