#ifndef _SECGELSIN_H
#define _SECGELSIN_H
#define MAXHARF 40  // stringlerin alacag� max karakter sayisi tanimlandi
struct kayitol { // struct olusturuldu 
	char isim[MAXHARF];  // kisi bilgilerinin ismi alinmasi icin
	char soyisim[MAXHARF];  // kisi bilgilerinin soyismi alinmasi icin

};
struct adresal { // kargo billgileri ilcin struct olusturuldu 
	char mahalle[MAXHARF];	// kisi bilgilerinin  alinmasi icin
    char sokak[MAXHARF];	// kisi bilgilerinin  alinmasi icin
	int  binano;	// kisi bilgilerinin  alinmasi icin
	int  daireno;	// kisi bilgilerinin  alinmasi icin
	char ilce[MAXHARF];   	// kisi bilgilerinin  alinmasi icin
    char il[MAXHARF];	// kisi bilgilerinin  alinmasi icin
};


struct kartal {   //kart bilgilerinin al�nmasi icin struct olusturuldu 
	int kartno; 	// kart bilgilerinin  alinmasi icin
	int tarih;      // kart bilgilerinin  alinmasi icin
	int arkano;     // kart bilgilerinin  alinmasi icin
	
};
struct feedback {   //kart bilgilerinin al�nmasi icin struct olusturuldu 
	int kategori; 	// kart bilgilerinin  alinmasi icin
	int kolaylik;      // kart bilgilerinin  alinmasi icin
	int yelpaze;     // kart bilgilerinin  alinmasi icin
	
};
void bilgilerigoster(struct kayitol bilgi); //bilgileri g�stermek icin fonksiyona bilgi struct� g�nderildi
void bilgilerigoster2(struct adresal adres);//bilgileri g�stermek icin fonksiyona adres struct� g�nderildi
struct kayitol kisikayit(); //kisikayit fonksiyonu ile kayitol structa tanimland� 
void seceneksun();//secenekleri g�stermek icin fonksiyon tan�mland� 
void fatura(int onay);  // siparis onayi verilirse fatura bilgilerinin alinmasi icin fonksiyon
struct kartal kartbilgi();//kartbilgi fonksiyonu ile kayitol structa tanimland�
float sectir(int secim); // �r�n sectirmek icin mainden secilen sai fonksiyonda secim olarak kullan�lmas� icin 
struct feedback feed();
int kargo(int onay); //siparis onayi verilirse kargo bilgilerinin alinmasi icin fonksiyon
struct adresal adreskayit();//adreskayit fonksiyonu ile kayitol structa tanimland�
#endif








