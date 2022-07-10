#include <stdio.h>  // bu kodda alinan harf notuna göre hesaplama yapilmiþtir yalniz hesaplama mainin diþinda ayri bir fonksiyonda hesaplanmýþtýr
int grade;

 void calc(int sonuc) { // fonksiyon tanýmlandý
 	if(sonuc<=100 &&  sonuc>=0){ // degeri kontrol ediyor 
	
 	if(sonuc>=90){printf("harf notunuz AA");}
 	else if(sonuc>=80){printf("harf notunuz BA");}
 	else if(sonuc>=75){printf("harf notunuz BB");}   // uygun sayiya gore not verilicek 
 	else if(sonuc>=70){printf("harf notunuz CB");}
 	else if(sonuc>=65){printf("harf notunuz CC");}
 	else if(sonuc>=60){printf("harf notunuz DC");}
 	else if(sonuc>=50){printf("harf notunuz DD");}
 	else if(sonuc>=40){printf("harf notunuz FD");}
 	else {printf("harf notunuz FF");}
 }
 else printf("lutfen yeniden giriniz");
 
 }
 
int main() {
	printf("lutfen aldiginiz notu giriniz="); // alinan not girilecek
	scanf("%d",&grade);
	calc(grade);//fonksiyona deger gonderiliyor 
}
