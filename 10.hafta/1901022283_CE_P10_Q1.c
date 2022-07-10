#include <stdio.h>
#include <string.h>


struct ogrenciler { // struct olusturuldu 
	char isim[40];
	int numara;   // istenilcek de�erler tan�mland� 
	float sinav;
};

void bilgilerigoster(struct ogrenciler bilgi) {  // bilgileri yazd�rmak i�in fonksiyon olu�turuduldu 
	printf("Ogrencinin Adi=%s\nOgrencinin Numarasi=%d\nOgrencinin Sinav notu=%.1f\n",bilgi.isim,bilgi.numara,bilgi.sinav); // gelen structan i�indeki bilgileri yazd�r�yoruz 
}


struct ogrenciler ogrencikayit() {
	struct ogrenciler kayit;
	printf("lutfen Ogrenci adini giriniz= ");
	scanf("%s",&kayit.isim); // bilgiler alindi
	printf("lutfen ogrencinin numarasini giriniz= ");
	scanf("%d",&kayit.numara);// bilgiler alindi
	printf("lutfen ogrencinin sinav notunu giriniz =");
	scanf("%f",&kayit.sinav);// bilgiler alindi
	return kayit;  // bilgi d�nd�r�ld� 
}
int main () {
	
	struct ogrenciler ogrencibir=ogrencikayit();  // ogrencibire ogrencikayittan al�nan struct atand�
	bilgilerigoster(ogrencibir);//fonksiyona struct g�nderildi
	struct ogrenciler ogrenciiki=ogrencikayit();
    bilgilerigoster(ogrenciiki);
}


