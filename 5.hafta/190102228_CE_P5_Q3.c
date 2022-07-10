#include <stdio.h>

//iscinin haftalik maas bordrosunu hesaplamasi icin yazilan bir program 
 int iscisayisi,gunluksaat,haftalikgun,i,maasorani,gunlukmaas,maas,toplam=0,y;
 double x;
int main ()

{
	printf("hesaplanilacak isci sayisi giriniz\n");
	scanf("%d",&iscisayisi);  // gün sayisi alindi
	for (i=1;i<=iscisayisi;i++)//bilgileri almak icin dongu kuruldu
	{
		printf("iscinin gunluk calisma saatini giriniz ="); 
		scanf("%d",&gunluksaat);//atama yapildi
		printf("\niscinin haftalik calisma gunu giriniz=");
		scanf("%d",&haftalikgun); // atama yapildi
		printf("\niscinin maas orani degerini girin=");
		scanf("%d",&maasorani);// atama yapildi
		
		maas=gunluksaat*maasorani;//gunluk saati
		
		toplam+=maas;//maaslar toplaniyor
		
		
		
			printf("\nbu iscinin gunluk maasi=%d\n",maas);
			y=maas*haftalikgun;//haftalik maas hesaplaniyor 
			printf("\nhaftalik maasi=%d\n",y); 
			
			
			
	
	}
	x=toplam/7;// haftalik ortamalama iþcilerin masrafý 
	
	printf("\n\niscilerin gunluk ortalama ucreti=%.2f",x);
}	

