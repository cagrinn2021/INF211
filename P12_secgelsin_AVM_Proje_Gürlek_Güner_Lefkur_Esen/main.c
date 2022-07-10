#include <stdio.h>
#include "_secgelsin.h"
#include <string.h>
#include <locale.h>


int main () {
printf("                    secgelsin ONLINE ALISVERIS MERKEZINE HOS GELDINIZ!\n                 **********************************************************\n\n");
	int secim,onay,tercih;
	char devam;
	setlocale(LC_ALL,"Turkish");
	printf("-KAYIT\n\n");
	struct kayitol kayitbir=kisikayit();  //Struct yapisiyla kisinin bilgileri alindi.
	printf("\nIyi alisverisler!\n");
	printf("\n*FIRSAT ---> 100 TL ve üzeri alisverislerde kargo ücreti yok!!!\n");//Firsatlar hakkinda bilgi veilip alisverise baslatildi.
	seceneksun();//Seceneksun fonksiyonu ile kategoriler getirildi.
	printf("\nLutfen Sectiginiz Kategoriyi belirtiniz =>  ");
	scanf("%d",&secim);//Kullanicinin yaptigi secim alindi.
	sectir(secim);//Bu secime gore sectir secenegine tercih gitti.
	
	printf("\nAlisverise devam etmek istiyor musunuz?\n");//Kullaniciya devam edip etmek istemedigi soruldu.
	printf("evet ise 'e'ye, hayir ise baska bir tusa basiniz. ->  ");
    scanf("%s",&devam); //kullanici "e" veya "E" secimi yaparsa devam ettirdik.
    while(devam=='e'|| devam=='E') {
	if(devam=='e' || devam=='E'){

	seceneksun();
	printf("\nLutfen Sectiginiz Kategoriyi belirtiniz -> "); //Tekrardan kategori secimi istedik.
	scanf("%d",&secim);
	sectir(secim);
	printf("\nAlisverise devam etmek istiyor musunuz?\n ");
	printf("evet ise 'e'ye, hayir ise baska bir tusa basiniz. ->  "); //Kullanici farklý bir karakter girene kadar devam ettirdik.
    scanf("%s",&devam);		}	}
	printf("\nSepeti Onayliyor musunuz ?\nOnay icin 1'i, red icin 2'yi tuslayiniz. ->  "); //Sepeti onaylayip onaylamadigini sorduk.
	scanf("%d",&onay);
	
	
	if(onay==1) { //Kullanici 1'e basarsa kart ve adres bilgilerini aldik.
	struct kartal kartiki=kartbilgi(); //Struct ile kart bilgisi aldik.
	struct adresal adresbir=adreskayit();//Struct ile adres bilgisi aldik.
	kargo(onay);//Kargo tercihini fonksiyon ile yaptirdik.
	printf("-----------------------------\nAlici Bilgileri:\n");
	struct kayitol kayitiki=kisikayit(); //Kargo teslimi alacak kisi icin bilgi aldik.
	printf("\n_--------------\n");
	
	printf("\n-E-FATURA-\n\nAlici:\n"); //E-Fatura yazdirdik.
	
	bilgilerigoster(kayitiki); //Alici bilgilerini yazdirdik.
	bilgilerigoster2(adresbir);//Adresi yazdirdik.

	printf("\nGönderen: secgelsin Alisveris Merkezi\n");
	fatura(onay); //Fatura fonksiyonunda kargo ve kdv dahil fiyati hesaplayip yazdirdik, siparis no olusturduk.
	struct feedback feedbackbir=feed(); //Kullanýcýdan sitemiz ile ilgili geri dönüt aldýk.
}
	else if(onay==2){//Kullanici onay icin 2'ye basarsa hata verdik.
	printf("\nSiparisiniz iptal edilmistir.\nTekrar bekleriz...\n");}
	else{ //Kullanici 1 veya 2 harici bir sayi veya karaktere basarsa hata verdik.
		printf("\a Yanlis tusa bastiniz...\n");	
	}
	
int kapat=0; //Cikis yapmasi icin bir tusa basmasini istedik.
printf("Cikis yapmak icin bir tusa basin");
scanf("%d",&kapat);
		} //Programi bitirdik.
