#include <stdio.h>
// 1 gün içindeki 24 saatin her bir saatin degerini girip havanin durumunu yazdirma programý 

int i,x=1;
float derece,sicaksaat,iliksaat,soguksaat;  // tanimlama yapildi
float toplam=0;

int main ()   { 

printf("gun icindeki degerleri giriniz\n");
for( i=1;i<=24; ++i)    //dongu olusturuldu
{
	printf("fahrenheit cinsinden degerinizi girin \n");
	scanf("%f",&derece);                  //derece atamasý yapildi
	if (derece>=85) {
		++sicaksaat;       // degerler arttýrýlýyor 
		printf("%d. saate hava sicak \n",i);
	}
	else if (derece>=60 && derece<=84) {
		++iliksaat;
		 printf("%d. saatte hava ilik \n",i);
	}
	else if (derece<=60) {
 ++soguksaat; 
	printf("%d. saatte hava soguk \n",i);
}
toplam+=derece;	// derecelerin hepsi toplanýyor 
	
}
float dereceort=toplam/24;             // ortalama bulunuyor s
printf("gun icerisindeki sicak toplam saat=%.2f,\ngun icerisindeki toplam ilik saat=%.2f,\n gun icerisindeki toplam soguk saat=%.2f\n",sicaksaat,iliksaat,soguksaat);
printf("ortalama sicaklik degeriniz %.2f\n",dereceort);
if(dereceort<60)
 printf("bugun hava soguktur");
else if(dereceort>=60 && dereceort<=84)
printf("bugun hava  iliktir");
else if(dereceort>=85)
printf("bugun hava sicaktir");




}





