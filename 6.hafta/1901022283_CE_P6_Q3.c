#include <stdio.h>
#define size 15


// bu kodda 15 elemanli dizinin en buyuk sayisini ve en k�c�k sayisini bulmay� ve bu say�lardan hangisinin cift ve tek oldugunu g�steren bir programdir
int dizi[size];

int i,j;
int enbuyuksayi;  // eleman atamalari yap�ld�
int enkucuksayi;

int main() {
	for(i=0;i<size;++i) {
		printf("dizinin %d.elemanini giriniz=",i+1);
		scanf("%d",&dizi[i]); // dizinin elemanlar�  atandi
	}
	enbuyuksayi=dizi[0];  // burada bir referans noktas� olarak atandi ilk elemanlar�
	enkucuksayi=dizi[0];
	for(i=0;i<size;++i) { // kar��la�t�rma d�ng�s� yap�ld�
	if(dizi[i]>enbuyuksayi) { //dizide t�m elemanlar bir �nceki ile kar��la�t�rarak en b�y�k olan� bulmaya �al���ld� 
		enbuyuksayi=dizi[i];
	}	
	if(dizi[i]<enkucuksayi) {//dizide t�m elemanlar bir �nceki ile kar��la�t�rarak en k�c��k  olan� bulmaya �al���ld� 
		enkucuksayi=dizi[i];
	}
	
}
printf("\n\n\nen buyuk sayi=%d\n",enbuyuksayi); // burada yazdirildi degeler
printf("en kucuk sayi=%d\n\n\n",enkucuksayi);

for (i=0;i<size;++i) // tek cift olup olmad�g� i�in  icin dongu olusturuldu
{
	if(dizi[i]%2==0) { 
	printf("\ndizinin[%d].sayisi olan sayi{%d} cifttir \n",i+1,dizi[i]); //2 ye b�l�n�rrse �ifttir
	}
	else {
	printf("\ndizinin[%d].sayisi olan sayi{%d} tektir \n",i+1,dizi[i]);//de�ilse tektir
	}
}

}
