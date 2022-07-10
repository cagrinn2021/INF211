#include <stdio.h>
#include "my_array_library.h"
// ÇAÐRI ESEN 1901022283  ÝNF211 PROJE 8 
// ÇAÐRI ESEN 1901022283  ÝNF211 PROJE 8 



int i=0;
int j=0;
int dizinormal[1000][1000];
void matris(int n,int m, int dizi[n][m]) { 
		for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			printf(" %d ",dizi[i][j]);
			
		}
		printf("\n");
	}
}
  void sayibulma(int goster1,int goster2,int n, int m,int dizi[n][m]) { 
  
 printf("%d.satirin %d.sutununda  bulunan sayi =%d\n",goster1,goster2,dizi[goster1-1][goster2-1]); 
 }
 
 void indexgoster (int n ,int m,int dizi[n][m],int ara)  {
 	int s1=0;
 			for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			
			if(ara==dizi[i][j]) printf("%d elemani matrisin %d.satiri %d.sutunundadir \n\n",dizi[i][j],i+1,j+1);
			
			                    			}
			
		}
	}
	
	void enkucuk(int n,int m,int dizi[n][m]) {
		int x=0;
int y=0;
int enkucuk;
enkucuk=dizi[x][y];
	for(x=0;x<n;++x) {
		for(y=0;y<m;++y) {
 if(enkucuk>dizi[x][y]) {
 	enkucuk=dizi[x][y];
 }

}
 }
printf("matrisin en kucuk sayisi %d\n\n",enkucuk);
 
	}
	
	
	void rowmax(int n,int m,int dizi[n][m]) {
		int satirinbuyugu;
satirinbuyugu=dizi[i][j];
for (i=0;i<n;++i) {
	for(j=0;j<m;++j) {
		if(satirinbuyugu<dizi[i][j]) {
		satirinbuyugu=dizi[i][j];	
		}
	} printf("%d.satirin en buyuk sayisi=%d\n\n",i+1,satirinbuyugu);
}
	}
	
	void transpoz(int n,int m,int dizi[n][m]) {
     printf("TRANSPOZU \n");
    int i,j,t[n][m];
	for(i=0;i<n;++i) 
		for(j=0;j<m;++j) {
			t[j][i] = dizi[i][j];
		}
			
	for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
	printf(" %d ",t[i][j]);
		}
		printf("\n");}	
		///////
	}
	void carpma(int n,int m,int dizi[n][m]) {
		
	printf("\nTRANSPOSU ILE MATRISI CARPMA:\n");
	 int t[n][m],result[n][m];
	 int k;
for(i=0;i<n;++i) 
		for(j=0;j<m;++j) {
			 t[j][i]=dizi[i][j];
		}
		
	for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        {
            result[i][j] = 0;
        }

	
	for(i=0;i<n;++i) 
	for(j=0;j<m;++j)
	 for(k=0; k<m; ++k){
	 
		
   result[i][j]+= dizi[i][k]*t[k][j];}
    
	       
    for(i=0; i<n;++i)
        for(j=0;j<m;++j)
        {
            printf("%d  ",result[i][j]);
            if(j==m-1)
                printf("\n\n");
        }
	}
	///////////
	void birimmatris(int n, int m,int dizi[n][m]) {
	int sifirsayac,birsayac; 
	for(i=0;i<n;++i) {

	for(j=0;j<m;++j) {
		if(i!=j)  {
			if(dizi[i][j]==0) {
				++sifirsayac;
			}
		}
		if(i==j) {
		if(dizi[j][j]==1) {
			++birsayac;
		}     
	}

   
}

}  
if(sifirsayac==m*m-m && birsayac==m) { printf("Birim matristir\n");
   }
   else printf("Birim matris degildir\n");
	}
	
	
	void simetrik(int n,int m,int dizi[n][m])  {
		int simetrik=0;
for(i=0;i<n;++i) {
	for(j=0;j<m;++j) {
		if (i!=j) {
			if(dizi[i][j] != dizi[j][i]) {
				simetrik=1;
			}
		}
	}
}
   if(simetrik==0 )
          printf("\nMatris Simetriktir\n");
      else
          printf("\nMatris Simetrik Degildir\n");



}

void bubble(int n, int m, int dizi[n][m]) { 
		 
int t;
		for(i=0;i<=n;++i) {
				for(j=0;j<m-1;++j){
		
			if(dizi[i][j]<dizi[i][j+1]){ t=dizi[i][j+1];
		dizi[i][j+1]=dizi[i][j];
		dizi[i][j]=t;
			}
			if(j==m-2){for(j=0;j<m-1;++j){
			
			if(dizi[i][j]<dizi[i][j+1]){ t=dizi[i][j+1];
		dizi[i][j+1]=dizi[i][j];
		dizi[i][j]=t;
		}
		}} } }
		printf("Bubble yapilmis hali\n");
		for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
			printf(" %d ",dizi[i][j]);
			
		}
		printf("\n");
	}	
}

void tekrar( int n,int m,int dizi[n][m]){
	
	int i,j,x,y,con=0,con2=0;
		for(i=0;i<n;++i){
		
		for(j=0;j<m;++j) {
			con=0;
				for(x=0;x<n;++x){
				
		for(y=0;y<m;++y) 
		{ if(dizi[i][j]==dizi[x][y]){++con;}}}
		if(con==1){++con2;}}
		}
		printf("tekrar etmeyen eleman sayisi: %d\n",con2);
		
		
		}
	


		

 
