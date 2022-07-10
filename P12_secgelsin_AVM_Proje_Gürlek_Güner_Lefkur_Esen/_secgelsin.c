#include <stdio.h>
#include "_secgelsin.h"
#include <string.h>
#include <locale.h>
#include <stdlib.h>

float *ptr;
int secim;
float *ptr2;
int *ptr3;
float toplamfiyat=0;
float gunceltutar=0;
int hangi;
	float deger;
	float rast;
	int i;
	int urun;
	float sayi;




void bilgilerigoster(struct kayitol bilgi) {  // bilgileri yazd�rmak i�in fonksiyon olu�turuduldu 
	printf("%s %s \n",bilgi.isim,bilgi.soyisim); // gelen structan i�indeki bilgileri yazd�r�yoruz 
	
}

void bilgilerigoster2(struct adresal adres) {  // bilgileri yazd�rmak i�in fonksiyon olu�turuduldu 
	printf("\nAdres:\n%s Mahallesi %s Sokak No:%d/%d %s/%s \n",adres.mahalle,adres.sokak,adres.binano,adres.daireno,adres.ilce,adres.il); // gelen structan i�indeki bilgileri yazd�r�yoruz 
	
}

struct kayitol    kisikayit() {
	struct kayitol kayitx;
	printf("isim = ");
	scanf("%s",&kayitx.isim); // bilgiler alindi
	printf("soyisim = ");
	scanf("%s",&kayitx.soyisim);// bilgiler alindi
	FILE *f2; //fatura bilgilerinin yazilmasi icin bir dosya olusturuldu.

f2=fopen("E-FATURA.txt","w+"); //yeni bos dosya acildi bunun icin w+ kullandik.
if(f2==NULL) {
	printf("dosya acilamadi");
	
}
else {fprintf(f2,"**************** E-FATURA ****************\nKisi Bilgileri:\nisim->%s\nsoyisim->%s ",kayitx.isim,kayitx.soyisim); //olusturulan dosyaya bazi bilgiler yazdirildi.
fclose(f2);//dasyayi kapadik.}
	return kayitx;  // bilgi d�nd�r�ld� 
}}



struct adresal adreskayit() {

	printf("---------------------------\n");	
	printf("\n-KARGO ISLEMLERI-\n\n");
	printf("Lutfen adres bilgilerinizi eksiksiz giriniz\n\n");
	struct adresal kayit;	
	printf("lutfen ilinizi giriniz =>  ");
	scanf("%s",&kayit.il); // bilgiler alindi	
	printf("lutfen ilcenizi giriniz =>  ");
	scanf("%s",&kayit.ilce);// bilgiler alindi
	printf("lutfen mahallenizi giriniz =>  ");
	scanf("%s",&kayit.mahalle);// bilgiler alindi	
	printf("lutfen sokaginizi giriniz =>  ");
	scanf("%s",&kayit.sokak);// bilgiler alindi	
	printf("lutfen bina numaranizi giriniz =>  ");
	scanf("%d",&kayit.binano);// bilgiler alindi
	printf("lutfen daire numaranizi giriniz =>  ");
	scanf("%d",&kayit.daireno);// bilgiler alindi
FILE*f2;
f2=fopen("E-FATURA.txt","a+"); //acilan dosyaya ekleme islemleri yapilmasi icin a+ ile dosyayi yeniden actik.
if(f2==NULL) {
	printf("dosya acilamadi");
	
}
else {fprintf(f2,"\nAdres Bilgileri:\n%s Mahallesi %s Sokak No:%d/%d %s/%s ",kayit.mahalle,kayit.sokak,kayit.binano,kayit.daireno,kayit.ilce,kayit.il); //adres bilgilerini de dosyaya ekledik.
fclose(f2);//dosyayi kapadik.}


	return kayit;  // bilgi d�nd�r�ld� 
}}

struct kartal kartbilgi(){
	int i,j,k;
	
	printf("\nSepetinizin toplam tutari -> %.2f TL\n------------------------\n\n-KART ISLEMLERI-\n\nAlisverisi tamamlamak icin 'kart bilgilerinizi' giriniz:",*ptr);
	struct kartal kayit2;
	for(i=0;i<3;i++){ //yanlis girildiginde hata verip tekrar etmesi icin d�ng� olusturuldu.

	printf("\n6 Haneli kartinizin numarasini giriniz ->  ");

	scanf("%d",&kayit2.kartno); // kullanicidan kart bilgisi alindi.
	if(kayit2.kartno>999999 || kayit2.kartno<100000){printf("\nHatali tuslama!"); //eger 6 haneli degilse hata veriyor.	
	}else{ for(j=0;j<3;j++){//yanlis girildiginde hata verip tekrar etmesi icin d�ng� olusturuldu.
  
	printf("\nL�tfen kartinizin son kullanma tarihini ay yil seklinde arada bosluk olmadan giriniz ->  ");
    scanf("%d",&kayit2.tarih); // kullanicidan tarih bilgisi alindi.
    if(kayit2.tarih>1299 || kayit2.tarih<121){printf("\nHatali tuslama!");//eger tarih degilse hata veriyor.	
	}
	else{ for(k=0;k<3;k++){//yanlis girildiginde hata verip tekrar etmesi icin d�ng� olusturuldu.

	printf("\nL�tfen kartinizin arkasindaki 3 haneli numarayi giriniz ->  ");
    scanf("%d",&kayit2.arkano);// kullanicidan kart arkasi numara bilgisi alindi.
    if(kayit2.arkano>999 || kayit2.arkano<100){printf("\nHatali tuslama!"); //eger 3 haneli degilse hata veriyor.	
	}
	else{ return kayit2;
	}}
	}
}}	}
   	
}



void seceneksun() {
	printf("\nHangi Kategoride alisveris yapmak istiyorsunuz?\n");
	printf("\n1=Kitapevi\n2=Market\n3=Yemek\n4=Teknolojik Market\n");
}

float sectir(int secim)  //sectir fonksiyonu olusturuldu 
{
	ptr=&toplamfiyat;    // pointera toplam fiyat�n adres bilgisi atandi
if(secim==1) {
	
		FILE *f1;  //dosya pointer� olu�turuldu 
		
		
		
		f1=fopen("Kitap.txt","r");  //dosya okunmak i�in a��ld� 
				if(f1==NULL) {    
			printf("\ndosya bulunmuyor");  // e�er dosya bulunamad�ysa  dosya bulunmadiysa hata verildi 
		}
	else {   //dosya okunduysa buraya girecek 
					while(!feof(f1)) {  // eger dosyan�n sonunda de�ilse bu d�ng�de �al��acak 
	
		printf("%c",fgetc(f1));	 // dosyanin i�inden tek tek karakterler �ekilerek ekrana yazdirildi 
	}
	printf("\n\nSepetinize eklemek isteginiz urunun numarasini yaziniz. ->  ");
	scanf("%d",&hangi);  //urun secimi icin bir deger aliyoruz 
	f1=fopen("KitapFiyat.txt","r");  // fiyat bilgisi txtsi okundu 
  
  if(hangi<=20 && hangi>0){  // eger �r�n sayisi aral�g�nda ise bu selectiona giriyor 
      for(i=0;i<hangi;i++) {
		fscanf(f1,"%f",&deger);  // burada yapt�g�m�z i�lem bir sonraki degeri okutma yapabilmemiz i�in 
		  if(hangi==i) {  // satir ve i e�it oldugunda 
		   fscanf(f1,"%f",&deger);} // f1 dosyasinin i�indeki o satirdaki sayi float tipinde deger verisine aktarilcak
	}
			printf("Urun fiyati -> %.2f TL",deger);  // urunun fiyati yazdirildi 
			toplamfiyat+=deger; // toplam fiyat�n �st�ne secilen �r�n�n fiyat� eklenerek topland�
			*ptr=toplamfiyat;   //  pointer sayisina toplam fiyatin sayisini atad�k
    fclose(f1);}   //dosyayi kapatt�k 
    
	else{
    	printf("\aBu numarada bir urun yoktur..."); // eger �r�n sayisindan farkli bir �ey giriliyorsa bunu yazdirilcak 
	}
  }
}
		
		
	   
		

	 else if(secim==2) {
		FILE *f2;//dosya pointer� olu�turuldu 
		f2=fopen("Market.txt","r");//dosya okunmak i�in a��ld� 
				if(f2==NULL) {
			printf("dosya bulunmuyor");// e�er dosya bulunamad�ysa  dosya bulunmadiysa hata verildi 
		}
		else {
				while(!feof(f2)) { // eger dosyan�n sonunda de�ilse bu d�ng�de �al��acak 
	
		printf("%c",fgetc(f2));}	 // dosyanin i�inden tek tek karakterler �ekilerek ekrana yazdirildi 
			printf("\n\nSepetinize eklemek isteginiz urunun numarasini yaziniz. ->  ");
			scanf("%d",&hangi); //urun secimi icin bir deger aliyoruz 
			f2=fopen("MarketFiyat.txt","r");//dosya okunmak i�in a��ld� 
	 if(hangi<=20 && hangi>0){		
    for(i=0;i<hangi;i++) {
        fscanf(f2,"%f",&deger);  // burada yapt�g�m�z i�lem bir sonraki degeri okutma yapabilmemiz i�in 
        if(hangi==i) {

        fscanf(f2,"%f",&deger);} // f2 dosyasinin i�indeki o satirdaki sayi float tipinde deger verisine aktarilcak
    }
            printf("Urun fiyati -> %.2f TL",deger);toplamfiyat+=deger; // toplam fiyat�n �st�ne secilen �r�n�n fiyat� eklenerek topland�
			*ptr=toplamfiyat;  //  pointer sayisina toplam fiyatin sayisini atad�k
    fclose(f2);//dosyayi kapatt�k 
		}
		else{
			printf("\aBu numarada bir urun yoktur...");// eger �r�n sayisindan farkli bir �ey giriliyorsa bunu yazdirilcak
		}
		}
		}
	
	else  if(secim==3) {
		FILE *f3;//dosya pointer� olu�turuldu 
	
		
		f3=fopen("Yemek.txt","r");//dosya okunmak i�in a��ld� 
				if(f3==NULL) {
			printf("dosya bulunmuyor");// e�er dosya bulunamad�ysa  dosya bulunmadiysa hata verildi 
		}
		else {
					while(!feof(f3)) { // eger dosyan�n sonunda de�ilse bu d�ng�de �al��acak 
	
		printf("%c",fgetc(f3));	 // dosyanin i�inden tek tek karakterler �ekilerek ekrana yazdirildi 
	}
	printf("\n\nSepetinize eklemek isteginiz urunun numarasini yaziniz. ->  ");
	aa:
	scanf("%d",&hangi);   //urun secimi icin bir deger aliyoruz 
	f3=fopen("YemekFiyat.txt","r");//dosya okunmak i�in a��ld� 
	 if(hangi<=20 && hangi>0){	
	for(i=0;i<hangi;i++) {
		fscanf(f3,"%f",&deger);  // burada yapt�g�m�z i�lem bir sonraki degeri okutma yapabilmemiz i�in 
		if(hangi==i) {
		
		fscanf(f3,"%f",&deger);} // f3 dosyasinin i�indeki o satirdaki sayi float tipinde deger verisine aktarilcak
	}
			printf("Urun fiyati -> %.2f TL",deger);toplamfiyat+=deger; // toplam fiyat�n �st�ne secilen �r�n�n fiyat� eklenerek topland�
			*ptr=toplamfiyat;   //  pointer sayisina toplam fiyatin sayisini atad�k

	
	fclose(f3);}//dosyayi kapatt�k 
	else{
		printf("\aBu numarada bir urun yoktur...");// eger �r�n sayisindan farkli bir �ey giriliyorsa bunu yazdirilcak
}	}	}

	
	else  if(secim==4) {
		FILE *f4;//dosya pointer� olu�turuldu 
		
		
		
		f4=fopen("Teknoloji.txt","r");//dosya okunmak i�in a��ld� 
				if(f4==NULL) {
			printf("dosya bulunmuyor");// e�er dosya bulunamad�ysa  dosya bulunmadiysa hata verildi 
		}
		else {
					while(!feof(f4)) { // eger dosyan�n sonunda de�ilse bu d�ng�de �al��acak 
	
		printf("%c",fgetc(f4));	  // dosyanin i�inden tek tek karakterler �ekilerek ekrana yazdirildi 
	}
	printf("\n\nSepetinize eklemek isteginiz urunun numarasini yaziniz. ->  ");
	scanf("%d",&hangi);   //urun secimi icin bir deger aliyoruz 
	f4=fopen("TeknolojiFiyat.txt","r");//dosya okunmak i�in a��ld�
 if(hangi<=15 && hangi>0){
	for(i=0;i<hangi;i++) {
		fscanf(f4,"%f",&deger);  // burada yapt�g�m�z i�lem bir sonraki degeri okutma yapabilmemiz i�in 
		if(hangi==i) {
		
		fscanf(f4,"%f",&deger);} // f4 dosyasinin i�indeki o satirdaki sayi float tipinde deger verisine aktarilcak
	}
			printf("Urun fiyati -> %.2f TL",deger);toplamfiyat+=deger;// toplam fiyat�n �st�ne secilen �r�n�n fiyat� eklenerek topland�
			 *ptr=toplamfiyat;  //  pointer sayisina toplam fiyatin sayisini atad�k
    fclose(f4);//dosyayi kapatt�k 
	}
	else{
	printf("\aBu numarada bir urun yoktur...");// eger �r�n sayisindan farkli bir �ey giriliyorsa bunu yazdirilcak
	}
	}
}
	
	
else {
	printf("lutfen 1 ve 4 aras�nda bir sayi giriniz");  //eger 1 ile 4 aras� girilmezse bu hata verilecek 
}  printf("\n\nSepetenizin guncel tutari -> %.2f TL\n",*ptr);  // en son guncel tutar yazdiriliyor 


return *ptr;  }//ptryi baska fonksiyonlarda kullanabilmek icin geri donus yapildi  
int tercih;


int kargo(int onay){ //kargo secimi icin bir fonksiyon olusturuldu.
int m;	
	ptr3=&tercih; //tercih degiskeninin adresi ptr3 e atandi.
	 if(*ptr<=100){ //eger g�ncel tutar 100 den k���kse
	    for(m=0;m<3;m++){
	
		printf("\nHangi kargo sirketini tercih edersiniz?\n(1.MNG(12TL)-2.Yurtici(9TL)-3.PTT(6TL)) --->  ");
		scanf("%d",&tercih); // tercih secildi
		if(tercih<1 || tercih>3){printf("\nHatali tuslama! L�tfen 1-3 arasi rakam giriniz.\n"); //eger 1 2 3 disindaysa hata verecek.
		}
	 else{return *ptr3;}	} }
	
		
		else{ printf("\nKargo �cretiniz yok.\n\n"); *ptr3=0; //eger b�y�kse pointeri 0 aldik.
		}
  return *ptr3;}

void fatura(int onay) { //Fatura yazd�rma fonksiyonu.
        if(*ptr3==0){ //Gelen ptr3 0 ise kargo yok. Direkt kdv ekleniyor.
        gunceltutar=(*ptr)*0.18+*ptr;}
        if(*ptr3==1){ //Gelen ptr3 1 ise 12 tl kargo ve kdv ekleniyor.
        gunceltutar=(*ptr)*0.18+12.0+*ptr;}
        if(*ptr3==2){//Gelen ptr3 2 ise 9 tl kargo ve kdv ekleniyor.
        gunceltutar=(*ptr)*0.18+9.0+*ptr;}
        if(*ptr3==3){//Gelen ptr3 3 ise 6 tl kargo ve kdv ekleniyor.
        gunceltutar=(*ptr)*0.18+6.0+*ptr;}
        printf("\nSiparisinizin toplam tutari %.2f Tl'dir.\n%%18 kdv ve kargo dahil %.2f TL'dir.\n",*ptr,gunceltutar); //Kdv ve kargo dahil fiyati yazdiriyorum.

        double siparisno=gunceltutar*gunceltutar*987+2000; //Kullaniciya bir �r�n numarasi olusturuyoruz.
        printf("\nSiparis numaraniz -> %.lf",siparisno);//Siparis numarasini kullaniciya bildiriyoruz.
        printf("\nBu numarayla siparisinizin durumunu takip edebilirsiniz.\n");

        FILE *f2; //Faturayi yazdirmak i�in bir txt dosyasi olusturuyorum.

f2=fopen("E-FATURA.txt","a+"); //Dosyayi a�iyorum.
if(f2==NULL) { //Eger a�ilmad�ysa hata veriyorum.
    printf("dosya acilamadi");

}
else { //Dosya a�ildiysa alici bilgilerini, tutari ve siparii numarasini yazdiriyorum.

    fprintf(f2,"\nSiparisinizin toplam tutari %.2f Tl'dir.\n%%18 kdv ve kargo var ise eklenmi� tutar %.2f TL'dir.\n\nSiparis numaraniz -> %.lf ",*ptr,gunceltutar,siparisno);
fclose(f2); //Dosyayi kapatiyorum.
    }

    }
	struct feedback feed() { //geri bildirim icin fonksiyon olusturuldu.
	struct feedback geri;
	printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\nANKET\n\n");
	printf("Uygulamanin kategori yelpazesini 1 ile 10 arasi degerlendirin --> ");
	scanf("%d",&geri.kategori); // kullanicidan 1 ile 10 arasi deger istendi.
	if(geri.kategori<5){printf(":("); //eger 5 ten k���kse �zg�n surat yazdirildi
	}
	else{printf(":)"); //eger degilse g�len surat yazdirildi.
	}
	printf("\nUygulamanin urun yelpaze genisligini  1 ile 10 arasi degerlendirin --> "); 
	scanf("%d,",&geri.yelpaze);// kullanicidan 1 ile 10 arasi deger istendi.
	if(geri.yelpaze<5){printf(":("); //eger 5 ten k���kse �zg�n surat yazdirildi
	}
	else{printf(":)"); //eger degilse g�len surat yazdirildi.
	}
	printf("\nUygulamanin kolaylik derecesini  1 ile 10 arasi degerlendirin --> ");
	scanf("%d,",&geri.kolaylik);// kullanicidan 1 ile 10 arasi deger istendi.
	if(geri.kolaylik <5){printf(":(");//eger 5 ten k���kse �zg�n surat yazdirildi
	}
	else{printf(":)");//eger degilse g�len surat yazdirildi.
	}
	printf("\nG�r�sleriniz bizim icin cok degerli...\n");
	
	int ort=(geri.kategori+geri.kolaylik+geri.yelpaze)/3; //kullanicinin girdigi degerlerle ortalama alindi.
	if(ort<5){printf("\nDaha iyi olmaya calisacagiz...");//eger 5 ten k���kse istenilen yazi yazdirildi
	}
	else{printf("\nBegenileriniz icin tesekkur ederiz...");//eger degilse istenilen yazi yazdirildi.
	}
	printf("\n---------------------------------------");
printf("\nBizi tercih ettiginiz icin tesekk�r ederiz...");

FILE *f1;

f1=fopen("geridonus.txt","w+"); //geri bildirim icin dosya olusturuldu.
if(f1==NULL) { //eger null degerse dosya olusturulamaz
	printf("dosya olusturulamadi"); 
	
}
else {
	
	fprintf(f1,"************DEGERLENDIRMELERINIZ*************\nkategori yelpazesi -> %d\nurun yelpazesi -> %d\nuygulama kolaylik-> %d ",geri.kategori,geri.yelpaze,geri.kolaylik); // degerlendirme yazisini dosyaya yazdirdik.
fclose(f1); //dosyayi kapattik.

}

}	
	

	


