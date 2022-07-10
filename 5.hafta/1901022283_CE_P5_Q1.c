#include<stdio.h>
int main (){
	float x,n,N,adim=1,baskatsayi=1,pay=1,toplam,geneltoplam=0,fact=1,i=0, j=0;
	printf("Lutfen Taban Sayiyi Giriniz: ");  // Taban Sayisi bilgisi kullanicidan alindi
	scanf("%f",&x);
	printf("Lutfen Adim Sayisini Giriniz: "); // Adim sayisi bilgisi kullanicidan alýndý
	scanf("%f",&n);
	for(i=1;i<=n;i++){//  adim sayisi kadar çalýsmasi için for yapildi
		N=2*adim - 1;  // formüldeki 2n-1 yapisi kuruldu
		for(j=1;j<=N;j++)// her adimda gerçekleþecek iþlemler için döngü
		{ pay=pay*x; 
		  fact*=j;
		 }  		// pay da bulunan üslü ifade ve paydada bulunan factoriyelli ifade hesaplanýyor
		toplam=(baskatsayi*pay)/fact; 	
		geneltoplam +=toplam;	
		pay=1;
	    baskatsayi = baskatsayi*(-1);
		fact=1;
		adim= adim+1;}	
	printf("Genel Toplam: %.4f",geneltoplam);  //toplami yazdiriyoruz
	return 0;
}
