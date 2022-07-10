#include <stdio.h>
// iki tane tanima ait degerlerin swap ile yeri deðiþtirilecektir 
int x,y;   // ifadeler tanimlandi
 int sw;
void swap(int a,int b) {  //fonksiyon olusturuldu 

 sw=a;  // a degeri bos degere atandi
 a=b;  // bosalan a degerine b sayisi atandi
 b=sw;  // bosalan b sayisina swdeki a sayisi atandi 

    printf("yeni x degeriniz =%d\n",a);
    printf("yeni y degeriniz =%d\n",b);   // swap islemi yapilmis islem yazildi 
    printf("swap islemi yapildi");  // bilgilendirme yapildi 
}

int main () {

    printf("lutfen x degerinizi girin=");
    scanf("%d",&x);  // sayi1 alindi
    printf("lutfen y degerinizi girin=");
    scanf("%d",&y); // sayi 2 alindi

    printf("simdi swap islemi yapilacak\n\n");
    swap(x,y); // alinan sayi degerleri fonksiyona gonderildi


}
