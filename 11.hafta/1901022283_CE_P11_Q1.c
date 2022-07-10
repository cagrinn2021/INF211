#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>  // toupper i�in eklendi 
void PrintFileContent(FILE* yazdir) ;  
void copy_file(FILE* yazdir1,FILE* yazdir2);  // fonksiyonlar tan�mlandi 
int findnumber(FILE* yazdir2);
int sayac=0;    




int main(){	
	FILE *dosya1; // dosya pointer� ol�turuldu
	
	dosya1=fopen("first.txt","r");   // dosya okutulmak i�in a��ld�
	if(dosya1==NULL) {  // dosyan�n kontrol� yap�ldi 
		printf("dosyaniz olusturulamadi\n");
		
	}
	else{
	printf("Enter the filename to open for reading\nfirst.txt\n");  
	}
	 	
	FILE *dosya2;  // 2.dosyan�n pointer� olu�turuldu 
	dosya2=fopen("second.txt","w+");  // 2.dosyan�n a��l�m� ve yazd�r�lmas� i�in w kullan�ld�  
	if(dosya2==NULL) { // dosyan�n olu�turulup olu�turulmad�g� kontrol� yapildi 
		printf("dosyaniz olusturulmadi\n");
	}
	else {
	printf("Enter the filename to open for writing and reading\nsecond.txt\n");
	}
	
PrintFileContent(dosya1); //  1.dosyanin i�indekini okutuldu 
dosya1=fopen("first.txt","r"); // ikinci fonksiyonda kullanmak i�in dosyalar tekrar a��ld� yoksa olmuyordu 
dosya2=fopen("second.txt","w+");// ikinci fonksiyonda kullanmak i�in dosyalar tekrar a��ld� yoksa olmuyordu 
copy_file(dosya1,dosya2);  // dosyalar�n kopyalamans� i�in fonksiyona g�nderildi 
dosya2=fopen("second.txt","a+");//dosya fonksiyona g�nderebilmek i�in tekrardan a��ld� 
findnumber(dosya2);//fonksiyona dosya g�nderildi 
dosya2=fopen("second.txt","a+");//dosya fonksiyona g�nderilmek i�in tekrardan olu�turuldu 
PrintFileContent(dosya2);//fonksiyona dosya g�nderildi
}
















void PrintFileContent(FILE* yazdir) {  // fonksiyon olu�turuldu 
	int i;
	while(yazdir!=EOF) {  // harfleri yazd�rmak i�in d�ng� olu�turuldu
	printf("%c",fgetc(yazdir));} // yazdir dosyas�n�n i�inden tek tek harf �ekerek bast�rcak
	printf("\n");
	fclose(yazdir);//dosyayi kapatiyoruz 
	}	
void copy_file(FILE* yazdir1,FILE* yazdir2){ // kopyalam i�in fonksiyon olu�turuldu 
char c;
char k;
c=fgetc(yazdir1); //dosyadan karakter �ekildi c ye atanda 
k =toupper(c); // karakter k���k ise b�y�lterek k ya atand�
while (k!=EOF){  // e�er k dosyan�n sonu de�il ise  d�ng�de �al��acak
	fputc(k,yazdir2); //k da bulunan karakteri dosya2 ye yazd�r�cak
	c=fgetc(yazdir1); //dosya1den bir karakter �ekecek c ye at�cak
	k=toupper(c);   //c harfi k���k ise b�y�t�lerek k ya at�cak       
	 }
fclose(yazdir1);  fclose(yazdir2); } // dosyalar kapatildi




  
  
int findnumber(FILE* yazdir2) { // kac karakter oldugunu bulup dosyaya yazd�r�lcak 
	
char ch;
ch=fgetc(yazdir2); // ilk karakter �ekildi

while (ch!=EOF){ //dosyan�n sonu de�ilse while �al��acak 
	
	ch=fgetc(yazdir2); //say�m yap�lmas� i�in karakter  alindi
	sayac++; // her karakter al�nd�g�nda sayac artt�r�ld� 
}

fprintf(yazdir2,"\nThe file second.txt has %d characters",sayac); // dosya2nin i�ine al�nan karekterin say�s� yaz�ld� 
fclose(yazdir2); // dosya  kapatildi
return sayac; 
}
	
	
	
	
	


