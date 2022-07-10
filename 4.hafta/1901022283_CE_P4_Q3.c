#include <stdio.h>
// girilen sinav sonucunun harf notunu hesaplama 
int yil;


main() {
	printf("lutfen yil giriniz\n");
	scanf("%d",&yil);
	if(yil>=2010 && yil<=2100){
	
	if(yil%4==0){
		printf("yiliniz 4 ile bolunebiliyor");
	}
	else{
		printf("yiliniz 4 ile bolunemiyor");
	}
	}
else {printf("lutfen 2010 ve 2100 arasinda bir yil giriniz");
}
return 0;
}

