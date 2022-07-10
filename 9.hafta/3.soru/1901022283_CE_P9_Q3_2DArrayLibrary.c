#include <stdio.h>
#include "1901022283_CE_P9_Q3_2DArrayLibrary.h"
	int i=0;
	int j=0;
void matris(int n,int m, int *dizi) {     // gelen dizi adresi ile pointer ile matrisi yazdýrma yapýyoruz 
		for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			printf(" %d ",*dizi);  // pointerda tutulan deðerleri yazdýrýyoruz 
			++dizi;  // sayýsýný arttýrýyoruz 
		}
		printf("\n");
	}
}



  void sayibulma(int goster1,int goster2,int n, int m,int *dizi) {   // verilen satýr sutunun yerni göstermek için deðerler aliniyor
  for(i=0;i<n;i++) {
  	for(j=0;j<m;j++) {
  		if(goster1-1==i && goster2-1==j) {    // sorulan yere gore iþlem yapiliyor 
  		
  		printf("\neleman =%d\n\n\n\n",*dizi);  // eleman yazdiriliyor 
		  }++dizi;   // arttýrýldý 
		  
	  }
  
  }
 
 }
 
 void indexgoster (int n ,int m,int *dizi,int ara)  {   //sayiyi bulmak için fonksiyon olusturuldu 
 	int s1=0;
 			for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			
			if(ara==*dizi) {  // gelen ara sayisi ile pointerdaki sayý ile eþitse oranýnný konumunu vericek 
		 printf("%d elemani matrisin %d.satiri %d.sutunundadir \n\n",*dizi,i+1,j+1); 	} 
			dizi++;  // adres sayisini arttýrýyoruz 
			}
			
		}
	}

///////
	void enkucuk(int n,int m,int *dizi) {   // matrisin en kucuk sayisini bulmak icin  fonk oluþturuldu 
		int x=0;
int y=0;
int enkucukk;
enkucukk=*dizi;   // ilk eleman en kucuke atandý
	for(x=0;x<n;++x) {
		for(y=0;y<m;++y) {
 if(enkucukk>*dizi) {
 	enkucukk=*dizi;  //  þart saðlanýrsa atama yapiliyor kucuk sayi deðiþtiriliyor 
 } dizi++;  // adres konumu arttýrýlýyor 

}
 }
printf("\n\nmatrisin en kucuk sayisi %d\n\n",enkucukk);
 
	}
	
	
	
	
	
	void rowmax(int n,int m,int *dizi) {  // satirda en buyuk bulan fonksiyonlarý yaptýk 
		int satirinbuyugu;

for (i=0;i<n;++i) {
	satirinbuyugu=*dizi; // for içine atanda çünkü her satýrda o satýrýn ilkine göre deðerlendirme lazým 
	for(j=0;j<m;++j) {
		if(satirinbuyugu<*dizi) {
		satirinbuyugu=*dizi;	     // koþul saðlanýrsa atama yapýldý 
		}
		dizi++;
	} printf("%d.satirin en buyuk sayisi=%d\n\n",i+1,satirinbuyugu);  // en kucuk sayý yazdýrýldýo 
}
	}
	
	void birimmatris(int n, int m,int *dizi) {   // birim matris olup olmadýgýný kontrol ediyoruz 
	int sifirsayac=0,birsayac=0;    // kontrol sayaclarý olusturuldu 
	for(i=0;i<n;++i) {

	for(j=0;j<m;++j) {
		if(i!=j)  {  // ayný olmayan satýr ve sutunlar oldugu zaman ifin içine girecektir 
			if(*dizi==0) { // bunlar sýfýr oldugunda sýfýr sayacý arttýrýlcak 
				++sifirsayac;
			}
		}
		if(i==j) { // eþit olanlarda ise sayýnýn bir olup olmadýgý kontrol edilecek 
		if(*dizi==1) {
			++birsayac;
		}     
	}

   
dizi++; }

}  
if(sifirsayac==m*m-m && birsayac==m) { printf("Birim matristir\n");  // burada matrisin boyutuna göre doðru sayýda sýfýr ve bir sayacýný kontrol edilecek saðlanýyorsa birimdir
   }
   else printf("Birim matris degildir\n");
	}
	
	
	
	
	
	void transpoz(int n,int m,int *dizi,int *trans){  // transpoz aldýrma 
		int *ptr1;
		int *ptr2;
		printf("\n\nTRANSPOZ   \n");
		
		ptr1=dizi;
		ptr2=trans;
		for (i=0;i<m;i++) {
			dizi=ptr1;
			for(j=0;j<n;++j) {
				*trans=*dizi;  // sayilarýn yerleri deðiþtirildi 
				trans++;
				dizi+=m;  
				
			} 
			ptr1++;
		} 
		
		trans=ptr2; for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				printf(" %d ",*trans);  // transpozu yazýldý 
				trans++;
			}
	printf("\n");	}
	}
	
	
			void tekrarsayan(int n,int m,int *dizi) {   // tekrar etmeyen sayýsýný bulma 
			int q,w,sy1=0,sy2=0;  // sayac olusturuldu 
			int *ptr1,*ptr2;    // pointer olusturuldu 
			
			ptr1=dizi;
			ptr2=dizi;   // adresler pointera atandý 
			
			
			for(i=0;i<n;i++) {
				for(j=0;j<m;j++) { 
				sy1=0;
				for(q=0;q<n;++q){
					for(w=0;q<m;w++) {
						if(*ptr1==*dizi) { // pointerdaki deðer  diðer pointer ile eþit olup olmadýgý bakýldý 
							sy1++; // sayac arttýrýldý 
						}
						dizi++;
					}}
			if(sy1==1){
				sy2++; // eger sayac iki tekrar ederse arttýcaktýr 
			} *ptr1++;
			dizi=ptr2;	}
				}
			printf("\ntekrar etmeyen eleman sayisi=%d ",sy2); // sayac 2 kadar tekrar etmeyen sayý vardýr 	
			
		
	}
	
	
		void simetrik(int n,int m,int *dizi,int *trans)  {  // simetrik olup olmadýgýný kontrol ediyoruz 
		
		int simetrikk=0;
for(i=0;i<n;++i) {
	for(j=0;j<m;++j) {
		if (i!=j) {
			if(*dizi!=*trans) {  // bir matrisin simetrik olup olmasý transpozu ile ayný rakamlar ile olmadýgýný sorgulauyoruz 
				simetrikk++; // eger transpozundan farklý deðilse sayac arttýrýlýyor 
			}
		}dizi++;  // adresleri arttýrýlýyor 
	trans++;
}	
}
   if(simetrikk==0 ) // eger simetrik sayýsý hiç artmadýysa simetriktir çünkü hepsi ayný sayýlardan olusmustur böylece sayac artmaz
          printf("\nMatris Simetriktir\n");
      else
          printf("\nMatris Simetrik Degildir\n");



}



		

 
