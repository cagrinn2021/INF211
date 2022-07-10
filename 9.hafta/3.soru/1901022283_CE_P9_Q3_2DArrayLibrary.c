#include <stdio.h>
#include "1901022283_CE_P9_Q3_2DArrayLibrary.h"
	int i=0;
	int j=0;
void matris(int n,int m, int *dizi) {     // gelen dizi adresi ile pointer ile matrisi yazd�rma yap�yoruz 
		for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			printf(" %d ",*dizi);  // pointerda tutulan de�erleri yazd�r�yoruz 
			++dizi;  // say�s�n� artt�r�yoruz 
		}
		printf("\n");
	}
}



  void sayibulma(int goster1,int goster2,int n, int m,int *dizi) {   // verilen sat�r sutunun yerni g�stermek i�in de�erler aliniyor
  for(i=0;i<n;i++) {
  	for(j=0;j<m;j++) {
  		if(goster1-1==i && goster2-1==j) {    // sorulan yere gore i�lem yapiliyor 
  		
  		printf("\neleman =%d\n\n\n\n",*dizi);  // eleman yazdiriliyor 
		  }++dizi;   // artt�r�ld� 
		  
	  }
  
  }
 
 }
 
 void indexgoster (int n ,int m,int *dizi,int ara)  {   //sayiyi bulmak i�in fonksiyon olusturuldu 
 	int s1=0;
 			for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			
			if(ara==*dizi) {  // gelen ara sayisi ile pointerdaki say� ile e�itse oran�nn� konumunu vericek 
		 printf("%d elemani matrisin %d.satiri %d.sutunundadir \n\n",*dizi,i+1,j+1); 	} 
			dizi++;  // adres sayisini artt�r�yoruz 
			}
			
		}
	}

///////
	void enkucuk(int n,int m,int *dizi) {   // matrisin en kucuk sayisini bulmak icin  fonk olu�turuldu 
		int x=0;
int y=0;
int enkucukk;
enkucukk=*dizi;   // ilk eleman en kucuke atand�
	for(x=0;x<n;++x) {
		for(y=0;y<m;++y) {
 if(enkucukk>*dizi) {
 	enkucukk=*dizi;  //  �art sa�lan�rsa atama yapiliyor kucuk sayi de�i�tiriliyor 
 } dizi++;  // adres konumu artt�r�l�yor 

}
 }
printf("\n\nmatrisin en kucuk sayisi %d\n\n",enkucukk);
 
	}
	
	
	
	
	
	void rowmax(int n,int m,int *dizi) {  // satirda en buyuk bulan fonksiyonlar� yapt�k 
		int satirinbuyugu;

for (i=0;i<n;++i) {
	satirinbuyugu=*dizi; // for i�ine atanda ��nk� her sat�rda o sat�r�n ilkine g�re de�erlendirme laz�m 
	for(j=0;j<m;++j) {
		if(satirinbuyugu<*dizi) {
		satirinbuyugu=*dizi;	     // ko�ul sa�lan�rsa atama yap�ld� 
		}
		dizi++;
	} printf("%d.satirin en buyuk sayisi=%d\n\n",i+1,satirinbuyugu);  // en kucuk say� yazd�r�ld�o 
}
	}
	
	void birimmatris(int n, int m,int *dizi) {   // birim matris olup olmad�g�n� kontrol ediyoruz 
	int sifirsayac=0,birsayac=0;    // kontrol sayaclar� olusturuldu 
	for(i=0;i<n;++i) {

	for(j=0;j<m;++j) {
		if(i!=j)  {  // ayn� olmayan sat�r ve sutunlar oldugu zaman ifin i�ine girecektir 
			if(*dizi==0) { // bunlar s�f�r oldugunda s�f�r sayac� artt�r�lcak 
				++sifirsayac;
			}
		}
		if(i==j) { // e�it olanlarda ise say�n�n bir olup olmad�g� kontrol edilecek 
		if(*dizi==1) {
			++birsayac;
		}     
	}

   
dizi++; }

}  
if(sifirsayac==m*m-m && birsayac==m) { printf("Birim matristir\n");  // burada matrisin boyutuna g�re do�ru say�da s�f�r ve bir sayac�n� kontrol edilecek sa�lan�yorsa birimdir
   }
   else printf("Birim matris degildir\n");
	}
	
	
	
	
	
	void transpoz(int n,int m,int *dizi,int *trans){  // transpoz ald�rma 
		int *ptr1;
		int *ptr2;
		printf("\n\nTRANSPOZ   \n");
		
		ptr1=dizi;
		ptr2=trans;
		for (i=0;i<m;i++) {
			dizi=ptr1;
			for(j=0;j<n;++j) {
				*trans=*dizi;  // sayilar�n yerleri de�i�tirildi 
				trans++;
				dizi+=m;  
				
			} 
			ptr1++;
		} 
		
		trans=ptr2; for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				printf(" %d ",*trans);  // transpozu yaz�ld� 
				trans++;
			}
	printf("\n");	}
	}
	
	
			void tekrarsayan(int n,int m,int *dizi) {   // tekrar etmeyen say�s�n� bulma 
			int q,w,sy1=0,sy2=0;  // sayac olusturuldu 
			int *ptr1,*ptr2;    // pointer olusturuldu 
			
			ptr1=dizi;
			ptr2=dizi;   // adresler pointera atand� 
			
			
			for(i=0;i<n;i++) {
				for(j=0;j<m;j++) { 
				sy1=0;
				for(q=0;q<n;++q){
					for(w=0;q<m;w++) {
						if(*ptr1==*dizi) { // pointerdaki de�er  di�er pointer ile e�it olup olmad�g� bak�ld� 
							sy1++; // sayac artt�r�ld� 
						}
						dizi++;
					}}
			if(sy1==1){
				sy2++; // eger sayac iki tekrar ederse artt�cakt�r 
			} *ptr1++;
			dizi=ptr2;	}
				}
			printf("\ntekrar etmeyen eleman sayisi=%d ",sy2); // sayac 2 kadar tekrar etmeyen say� vard�r 	
			
		
	}
	
	
		void simetrik(int n,int m,int *dizi,int *trans)  {  // simetrik olup olmad�g�n� kontrol ediyoruz 
		
		int simetrikk=0;
for(i=0;i<n;++i) {
	for(j=0;j<m;++j) {
		if (i!=j) {
			if(*dizi!=*trans) {  // bir matrisin simetrik olup olmas� transpozu ile ayn� rakamlar ile olmad�g�n� sorgulauyoruz 
				simetrikk++; // eger transpozundan farkl� de�ilse sayac artt�r�l�yor 
			}
		}dizi++;  // adresleri artt�r�l�yor 
	trans++;
}	
}
   if(simetrikk==0 ) // eger simetrik say�s� hi� artmad�ysa simetriktir ��nk� hepsi ayn� say�lardan olusmustur b�ylece sayac artmaz
          printf("\nMatris Simetriktir\n");
      else
          printf("\nMatris Simetrik Degildir\n");



}



		

 
