#include <stdio.h>
#include <string.h>


struct ogrenciler { // struct olusturuldu 
	char isim[40];
	int numara;   // istenilcek deðerler tanýmlandý 
	float sinav;
};

void bilgilerigoster(struct ogrenciler bilgi) {  // bilgileri yazdýrmak için fonksiyon oluþturuduldu 
	printf("Ogrencinin Adi=%s\nOgrencinin Numarasi=%d\nOgrencinin Sinav notu=%.1f\n",bilgi.isim,bilgi.numara,bilgi.sinav); // gelen structan içindeki bilgileri yazdýrýyoruz 
}


struct ogrenciler ogrencikayit() {
	struct ogrenciler kayit;
	printf("lutfen Ogrenci adini giriniz= ");
	scanf("%s",&kayit.isim); // bilgiler alindi
	printf("lutfen ogrencinin numarasini giriniz= ");
	scanf("%d",&kayit.numara);// bilgiler alindi
	printf("lutfen ogrencinin sinav notunu giriniz =");
	scanf("%f",&kayit.sinav);// bilgiler alindi
	return kayit;  // bilgi döndürüldü 
}
int main () {
	
	struct ogrenciler ogrencibir=ogrencikayit();  // ogrencibire ogrencikayittan alýnan struct atandý
	bilgilerigoster(ogrencibir);//fonksiyona struct gönderildi
	struct ogrenciler ogrenciiki=ogrencikayit();
    bilgilerigoster(ogrenciiki);
}


