
#include <stdio.h>
// girilen sinav sonucunun harf notunu hesaplama 
int sonuc;


main() {
	aa:
 	printf(" merhaba lutfen not giriniz \n");
 	scanf("%d",&sonuc);
 	if(sonuc<=100 &&  sonuc>=0){
	
 	if(sonuc>=90){printf("harf notunuz AA");}
 	else if(sonuc>=80){printf("harf notunuz BA");}
 	else if(sonuc>=75){printf("harf notunuz BB");}
 	else if(sonuc>=70){printf("harf notunuz CB");}
 	else if(sonuc>=65){printf("harf notunuz CC");}
 	else if(sonuc>=60){printf("harf notunuz DC");}
 	else if(sonuc>=50){printf("harf notunuz DD");}
 	else if(sonuc>=40){printf("harf notunuz FD");}
 	else {printf("harf notunuz FF");}
 	 }
 	 
 	 else {
 	 	
 	 	printf("lutfen tekrar giriniz\n");
	  }
 	goto aa;
 	return 0;



}
