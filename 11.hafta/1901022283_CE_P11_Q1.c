#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>  // toupper için eklendi 
void PrintFileContent(FILE* yazdir) ;  
void copy_file(FILE* yazdir1,FILE* yazdir2);  // fonksiyonlar tanýmlandi 
int findnumber(FILE* yazdir2);
int sayac=0;    




int main(){	
	FILE *dosya1; // dosya pointerý olþturuldu
	
	dosya1=fopen("first.txt","r");   // dosya okutulmak için açýldý
	if(dosya1==NULL) {  // dosyanýn kontrolü yapýldi 
		printf("dosyaniz olusturulamadi\n");
		
	}
	else{
	printf("Enter the filename to open for reading\nfirst.txt\n");  
	}
	 	
	FILE *dosya2;  // 2.dosyanýn pointerý oluþturuldu 
	dosya2=fopen("second.txt","w+");  // 2.dosyanýn açýlýmý ve yazdýrýlmasý için w kullanýldý  
	if(dosya2==NULL) { // dosyanýn oluþturulup oluþturulmadýgý kontrolü yapildi 
		printf("dosyaniz olusturulmadi\n");
	}
	else {
	printf("Enter the filename to open for writing and reading\nsecond.txt\n");
	}
	
PrintFileContent(dosya1); //  1.dosyanin içindekini okutuldu 
dosya1=fopen("first.txt","r"); // ikinci fonksiyonda kullanmak için dosyalar tekrar açýldý yoksa olmuyordu 
dosya2=fopen("second.txt","w+");// ikinci fonksiyonda kullanmak için dosyalar tekrar açýldý yoksa olmuyordu 
copy_file(dosya1,dosya2);  // dosyalarýn kopyalamansý için fonksiyona gönderildi 
dosya2=fopen("second.txt","a+");//dosya fonksiyona gönderebilmek için tekrardan açýldý 
findnumber(dosya2);//fonksiyona dosya gönderildi 
dosya2=fopen("second.txt","a+");//dosya fonksiyona gönderilmek için tekrardan oluþturuldu 
PrintFileContent(dosya2);//fonksiyona dosya gönderildi
}
















void PrintFileContent(FILE* yazdir) {  // fonksiyon oluþturuldu 
	int i;
	while(yazdir!=EOF) {  // harfleri yazdýrmak için döngü oluþturuldu
	printf("%c",fgetc(yazdir));} // yazdir dosyasýnýn içinden tek tek harf çekerek bastýrcak
	printf("\n");
	fclose(yazdir);//dosyayi kapatiyoruz 
	}	
void copy_file(FILE* yazdir1,FILE* yazdir2){ // kopyalam için fonksiyon oluþturuldu 
char c;
char k;
c=fgetc(yazdir1); //dosyadan karakter çekildi c ye atanda 
k =toupper(c); // karakter küçük ise büyülterek k ya atandý
while (k!=EOF){  // eðer k dosyanýn sonu deðil ise  döngüde çalýþacak
	fputc(k,yazdir2); //k da bulunan karakteri dosya2 ye yazdýrýcak
	c=fgetc(yazdir1); //dosya1den bir karakter çekecek c ye atýcak
	k=toupper(c);   //c harfi küçük ise büyütülerek k ya atýcak       
	 }
fclose(yazdir1);  fclose(yazdir2); } // dosyalar kapatildi




  
  
int findnumber(FILE* yazdir2) { // kac karakter oldugunu bulup dosyaya yazdýrýlcak 
	
char ch;
ch=fgetc(yazdir2); // ilk karakter çekildi

while (ch!=EOF){ //dosyanýn sonu deðilse while çalýþacak 
	
	ch=fgetc(yazdir2); //sayým yapýlmasý için karakter  alindi
	sayac++; // her karakter alýndýgýnda sayac arttýrýldý 
}

fprintf(yazdir2,"\nThe file second.txt has %d characters",sayac); // dosya2nin içine alýnan karekterin sayýsý yazýldý 
fclose(yazdir2); // dosya  kapatildi
return sayac; 
}
	
	
	
	
	


