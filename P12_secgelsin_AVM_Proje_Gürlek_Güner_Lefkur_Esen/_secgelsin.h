#ifndef _SECGELSIN_H
#define _SECGELSIN_H
#define MAXHARF 40  // stringlerin alacagý max karakter sayisi tanimlandi
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


struct kartal {   //kart bilgilerinin alýnmasi icin struct olusturuldu 
	int kartno; 	// kart bilgilerinin  alinmasi icin
	int tarih;      // kart bilgilerinin  alinmasi icin
	int arkano;     // kart bilgilerinin  alinmasi icin
	
};
struct feedback {   //kart bilgilerinin alýnmasi icin struct olusturuldu 
	int kategori; 	// kart bilgilerinin  alinmasi icin
	int kolaylik;      // kart bilgilerinin  alinmasi icin
	int yelpaze;     // kart bilgilerinin  alinmasi icin
	
};
void bilgilerigoster(struct kayitol bilgi); //bilgileri göstermek icin fonksiyona bilgi structý gönderildi
void bilgilerigoster2(struct adresal adres);//bilgileri göstermek icin fonksiyona adres structý gönderildi
struct kayitol kisikayit(); //kisikayit fonksiyonu ile kayitol structa tanimlandý 
void seceneksun();//secenekleri göstermek icin fonksiyon tanýmlandý 
void fatura(int onay);  // siparis onayi verilirse fatura bilgilerinin alinmasi icin fonksiyon
struct kartal kartbilgi();//kartbilgi fonksiyonu ile kayitol structa tanimlandý
float sectir(int secim); // ürün sectirmek icin mainden secilen sai fonksiyonda secim olarak kullanýlmasý icin 
struct feedback feed();
int kargo(int onay); //siparis onayi verilirse kargo bilgilerinin alinmasi icin fonksiyon
struct adresal adreskayit();//adreskayit fonksiyonu ile kayitol structa tanimlandý
#endif








