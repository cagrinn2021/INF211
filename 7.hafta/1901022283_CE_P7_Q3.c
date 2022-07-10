// bu kodda definelenmiþ dort sayinin toplami,karelerinin toplami,kuplerin toplami,enbuyuksonucu bulan program yazildi ama iþlemler main iþleminde deðil ayrý bir fonksiyon olusturulup yapildi

#include <stdio.h>
#include <math.h>
#define x1 9
#define x2 10
#define x3 7    // rastgele sayilar tanimlandi
#define x4 8

int fonk;
int enbuyuksonuc;
int toplam,karetoplamm,kuptoplamm;//atama yapilmak icin tanimlamalar yapildi

int sayitoplam(int a,int b,int c,int d) {  // toplam fonksiyonu olusturuldu 
	 toplam=a+b+c+d;
     return toplam;  // toplam deðeri döndürüldü
}
int karetoplam (int a,int b,int c,int d) { //karelerinin toplamý fonksiyonu 
	 karetoplamm=pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2);
	return karetoplamm;//geri dönüþü yapildi 
}
int  kuptoplam (int a,int b,int c,int d) { //küüplerinin toplamiinin fonksiyonu yapildi
	 kuptoplamm=pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3);
	return kuptoplamm;	 // geri donusu yapildi
}
int enbuyuk(int a,int b,int c,int d) {  // enbuyuk karsilastirilmasi fonksiyonu yapýldi 
        sayitoplam(x1,x2,x3,x4);
		karetoplam(x1,x2,x3,x4);   //sonuclar bulunmasý icin diger fonksiyonlardan sonuclar alýndi
		kuptoplam(x1,x2,x3,x4);
		
		if (toplam<karetoplamm)  enbuyuksonuc=karetoplamm;                    
		if (karetoplamm<kuptoplamm) enbuyuksonuc=kuptoplamm;  // hangisinin buyuk oluncagý bulunduu
	    else enbuyuksonuc=toplam;
		
		return enbuyuksonuc;  // atama yapýldý 
}
int main () {
/*                 eðer  hepsini tek seferde gözükülmesi istenirse bu kodu main fonksiyonunda aktif etmek gerekli
	 
	
	sayitoplam(x1,x2,x3,x4); 	
	printf("girilen dort sayinin toplami=%d\n",toplam);
 	karetoplam(x1,x2,x3,x4);    
	 printf("girilen dort sayinin karelerinin toplami=%d\n",karetoplamm);
	kuptoplam(x1,x2,x3,x4);
		printf("girilen dort sayinin karelerinin toplami=%d\n",kuptoplamm);
	enbuyuk(x1,x2,x3,x4);
	printf("en buyuk degerin sonucu=%d",enbuyuksonuc);
	  */ 
	  
	  printf("sayilariniz bunlardir %d %d %d %d\n",x1,x2,x3,x4);
  printf("hangi fonksiyonu cagirmak istiyorsunuz\n");
  printf("1.fonk sayilarin toplamini gosterir gormek istiyorsaniz 1 yazin\n2.fonksayilarin kare toplami gosterir gormek istiyorsaniz 2 yazin \n3.fonk sayilarin kup toplami gosterir  gormek istiyorsaniz 3 yazin \n4.fonk hangi toplamin en buyukk oldugunu gosteren fonksiyondur cagirmak icin 4 yazin\n");
  scanf("%d",&fonk);  // burada hangi fonksiyonu cagirilmak isteniyor o sorulup alindi

	if (fonk==1) {
		sayitoplam(x1,x2,x3,x4);  // fonksiyona degerler atandi 
			printf("girilen dort sayinin toplami=%d\n",toplam); // returndan gelen deger yazildi 
	}
	else if (fonk==2) {
		karetoplam(x1,x2,x3,x4);  // fonksiyona degerler atandi 
		printf("girilen dort sayinin karelerinin toplami=%d\n",karetoplamm); // returndan gelen deger yazildi
	}
	else if(fonk==3) {
		kuptoplam(x1,x2,x3,x4);  // fonksiyona degerler atandi  
	printf("girilen dort sayinin karelerinin toplami=%d\n",kuptoplamm); // returndan gelen deger yazildi 
	}
	else if (fonk==4) {
	 
	 enbuyuk(x1,x2,x3,x4); // fonksiyona degerler atandi 
	 printf("en buyuk degerin sonucu=%d",enbuyuksonuc);// returndan gelen deger yazildi
	 
	}
	
	
	else printf("lutfen 1 ve 4 arasi rakam giriniz");  // eger baska yazi girilirse atandi
	}
	

	



