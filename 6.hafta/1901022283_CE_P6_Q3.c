#include <stdio.h>
#define size 15


// bu kodda 15 elemanli dizinin en buyuk sayisini ve en kücük sayisini bulmayý ve bu sayýlardan hangisinin cift ve tek oldugunu gösteren bir programdir
int dizi[size];

int i,j;
int enbuyuksayi;  // eleman atamalari yapýldý
int enkucuksayi;

int main() {
	for(i=0;i<size;++i) {
		printf("dizinin %d.elemanini giriniz=",i+1);
		scanf("%d",&dizi[i]); // dizinin elemanlarý  atandi
	}
	enbuyuksayi=dizi[0];  // burada bir referans noktasý olarak atandi ilk elemanlarý
	enkucuksayi=dizi[0];
	for(i=0;i<size;++i) { // karþýlaþtýrma döngüsü yapýldý
	if(dizi[i]>enbuyuksayi) { //dizide tüm elemanlar bir önceki ile karþýlaþtýrarak en büyük olaný bulmaya çalýþýldý 
		enbuyuksayi=dizi[i];
	}	
	if(dizi[i]<enkucuksayi) {//dizide tüm elemanlar bir önceki ile karþýlaþtýrarak en kücðük  olaný bulmaya çalýþýldý 
		enkucuksayi=dizi[i];
	}
	
}
printf("\n\n\nen buyuk sayi=%d\n",enbuyuksayi); // burada yazdirildi degeler
printf("en kucuk sayi=%d\n\n\n",enkucuksayi);

for (i=0;i<size;++i) // tek cift olup olmadýgý için  icin dongu olusturuldu
{
	if(dizi[i]%2==0) { 
	printf("\ndizinin[%d].sayisi olan sayi{%d} cifttir \n",i+1,dizi[i]); //2 ye bölünürrse çifttir
	}
	else {
	printf("\ndizinin[%d].sayisi olan sayi{%d} tektir \n",i+1,dizi[i]);//deðilse tektir
	}
}

}
