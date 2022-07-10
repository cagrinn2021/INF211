#include <stdio.h>
int a1,a2,a3,a4;
int b1,b2,b3,b4;
int c1,c2,c3,c4;

int x,y,z,t;
int q,w,e,s;

// sonucta sifir gosterirse bunun anlami o hanede eleman yok demektir

main(){
	printf("lutfen a1 degerinizi girin\n");
	scanf("%d",&a1);
	printf("lutfen a2 degerinizi girin\n");
	scanf("%d",&a2);
	printf("lutfen a3 degerinizi girin\n");
	scanf("%d",&a3);
	printf("lutfen a4 degerinizi girin\n");
	scanf("%d",&a4);
	printf("lutfen b1 degerinizi girin\n");
	scanf("%d",&b1);
	printf("lutfen b2 degerinizi girin\n");
	scanf("%d",&b2);
	printf("lutfen b3 degerinizi girin\n");
	scanf("%d",&b3);
	printf("lutfen b4 degerinizi girin\n");
	scanf("%d",&b4);
	printf("lutfen c1 degerinizi girin\n");
	scanf("%d",&c1);
	printf("lutfen c2 degerinizi girin\n");
	scanf("%d",&c2);
	printf("lutfen c3 degerinizi girin\n");
	scanf("%d",&c3);
	printf("lutfen c4 degerinizi girin\n");
	scanf("%d",&c4);
	// 33 ve 54  kodlar birleþim ABC kesisim gösterir
	if(a1==b1 || a1==b2 || a1==b3 || a1==b4) { 
	 if(a1==c1 || a1==c2 || a1==c3 || a1==c4){
	
	 x=a1; }
	}  
	if (a2==b1 || a2==b2 || a2==b3 || a2==b4){
		if(a2==c1 || a2==c2 || a2==c3 || a2==c4){
			y=a2;
		}
	
	}
	 if(a3==b1 || a3==b2 || a3==b3 || a3==b4){
		if(a3==c1 || a3==c2 || a3==c3 || a3==c4){
			z=a3;
		}
	}
	 if(a4==b1 || a4==b2 || a4==b3 || a4==b4){
		if(a4==c1 || a4==c2 || a4==c3 || a4==c4){
			t=a4;
		}
	}
	 //33 ve 54  kodlar birleþim ABC kesisim gösterir 
	 
	 
	 //alt tarafta a ve b kesisim c fark olucak
	 if(a1==b1 || a1==b2 || a1==b3 || a1==b4) { 
	 if(a1!=c1 && a1!=c2 && a1!=c3 && a1!=c4){
	
	 q=a1; }
	}  
	if (a2==b1 || a2==b2 || a2==b3 || a2==b4){
		if(a2!=c1 && a2!=c2 && a2!=c3 && a2!=c4){
			w=a2;
		}
	
	}
	 if(a3==b1 || a3==b2 || a3==b3 || a3==b4){
		if(a3!=c1 && a3!=c2 && a3!=c3 && a3!=c4){
			e=a3;
		}
	}
	 if(a4==b1 || a4==b2 || a4==b3 || a4==b4){
		if(a4!=c1 && a4!=c2 && a4!=c3 && a4!=c4){
			s=a4;
		}
	}
	
	 
printf(" sonucta 0 yazar ise orasi bostur \n kesisim kumesýnde olan sayilar bunlardir =%d, =%d, =%d, =%d \n ",x,y,z,t);
printf("\na kesisim b fark c sonucu =%d, =%d, =%d, =%d",q,w,e,s);
}
