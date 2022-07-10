#include <stdio.h>


// bu kodda 5x5 matrisin degerleri girilecek ve matrisin upper triangle ve lower triangle sonuclar� g�sterilecektir
#define size 5
int dizi[size][size];
int i,j;
int main  () {

for(i=0;i<size;++i){
 
 for (j=0;j<size;++j) {
 	printf("%d.satirin %d.sutununun degerini girin=",i+1,j+1);  // bu dongude matrislerin sat�r ve sutun atamalar� yap�l�yor 
 	scanf("%d",&dizi[i][j]);
 }
}


printf("%dX%d matrisiniz\n",size,size);

for(i=0;i<size;++i){
	for(j=0;j<size;++j) {
	
	printf(" %d ",dizi[i][j]);// burada i. sat�r�n j.sutunun elemanlar� yaz�l�yor
	}
	printf("\n");//burada bir alta inerek diger sat�r�n ba�lang�c� 
}

printf("\n\n upper triangle of matris \n");
for(i=0;i<size;++i){            
	for(j=0;j<size;++j){             
		if (i<=j) {  
		/* upper matrisde
		 1.1-1.2-.1.3-.1.4-1.5 
		 2.2-2.3-2.4-2.5
		 3.3-3.4-3.5
		 4.4-4.5
		 5.5 kulllann�laca�� i�in buradan j nin i ile e�it oldugu ve i den b�y�k oldugu durumlar alindi
		
		
		
		*/
		printf(" %d ",dizi[i][j]);
		}
		else printf(" 0 ");
		
	}
	printf("\n");//burada bir alta inerek diger sat�r�n ba�lang�c� 
}

printf("\n\n lower triangle of matris \n");



// burada alt tarafta lower ucgen icin yazilicak kod bulunmakta


for(i=0;i<size;++i){            
	for(j=0;j<size;++j){             
		if (i>=j) {  
		/* upper matrisde
		 1.1
		 2.1-2.2
		 3.1-3.2-3.3
		 4.1-4.2-4.3-4.4
		 5.1-5.2-5.2-5.3-5.4-5.5
		  kulllann�laca�� i�in buradan j nin i ile e�it oldugu ve i den b�y�k oldugu durumlar alindi
		
		
		
		*/
		
		printf(" %d ",dizi[i][j]);
		}
		else printf(" 0 ");
		
	}
	printf("\n");//burada bir alta inerek diger sat�r�n ba�lang�c� 
}

}
