#include <stdio.h>
#include <math.h>

struct Complex   // struch tan�mland�
{
float real;  // real ve imag ifadeleri tan�mland� struct�n 
float imag;
};
typedef struct Complex Complex;   // str com yerine sadece complex tan�mland� 
Complex add(Complex n1,Complex n2);
void Print(Complex n);
float Abs(Complex n);
void skalercarp(Complex n3, float carpansayi);
void skalerbol(Complex n3, float bolensayi);  // fonksiyonlar tan�malnd� 
void gercekgoster(Complex n3);
void gercelgoster(Complex n3);
float skaler;
float skalerb;
int main()
{
Complex n1,n2,n3,temp;  // struct�n  al�nacak de�erleri tan�d�ld� 

printf("1.karmasik sayinizi giriniz \n");
printf("gercek ve gercel kisimlari giriniz:\n");
scanf("%f %f", &n1.real,&n1.imag);  // n1'in real ve imagi al�nd� 
Print(n1); // say�lar yazd�r�ld� 
printf("\n2.karmasik sayinizi giriniz\n");
printf("gercek ve gercel kisimlari giriniz:\n");
scanf("%f %f",&n2.real,&n2.imag);// n1'in real ve imagi al�nd� 
Print(n2);// say�lar yazd�r�ld�
temp = add(n1, n2);  // fonksiyon bast�r�ld� 
printf("Toplam = "); //sonu� yazd�r�ld� 
Print(temp);//sonucu bast�rd�k 
printf("toplamin mutlak degeri = %f", Abs(temp)); //  mutlak de�eri 

printf("\ncarpim yapacaginiz skaler sayiyi girin\n");  // skaler i�lem yapacag�m�z say�y� sordurup ald�rd�k
scanf("%f",&skaler); // skaler �arpma i�lemi bu sayi ile ile yapilacak 

printf("karmasik sayinizi giriniz\n"); // n3 de�erleri al�nd� 
scanf("%f %f",&n3.real,&n3.imag);
skalercarp(n3,skaler); // skaler �arpma i�lemi bu sayi ile yapilcaka
printf("\n\n\nbolme islemi yapacaginiz skaler sayiyi girin\n");
scanf("%f",&skalerb);//
skalerbol(n3,skalerb); // bolme i�lemi yapt�r�lcak 
gercekgoster(n3); // real kismi g�sterilcek
gercelgoster(n3); //  imag k�sm� gosterilcek
}
Complex add(Complex n1, Complex n2)
{
Complex temp;
temp.real = n1.real + n2.real;//reellerin toplam� yap�ld� 
temp.imag = n1.imag + n2.imag; // imaglar�n toplam� yap�ldi 
return(temp); // temp d�n�� yapildi
}
void Print (Complex n) // fonnksiyon olu�turuduldu 
{
printf("%.1f + %.1fi\n", n.real, n.imag); // complexin elemanlar� yazd�r�ld� 
}
float Abs(Complex n)
{
	return sqrt( pow(n.real,2) + pow(n.imag,2)); // mutlak de�erli i�lem yap�ld�  pow ile kareleri al�nd� sonra bunlar�n k�k� al�nd� ve geri d�nd�r�ld� 
}


void skalercarp(Complex n3, float carpansayi) {  // fonksiyon olu�turuldu  n3 struct� al�nd�
	float sonuc;
	float sonuci;
	printf("(%.1f) * ",carpansayi);
	Print(n3);
	sonuc=carpansayi*n3.real; //alinancarpan sayi ile real carp�ldi
	sonuci=carpansayi*n3.imag; // alinan sayi ile imag carpildi 
	printf("carpimin sonucu= %.1f+%.1fi'dir",sonuc,sonuci);//sonuc yazd�r�ld� 
}

void skalerbol(Complex n3, float bolensayi) { // fonksiyon olusturuldu n3 struct� ve bolen say�s� geldi
	float sonuc;
	float sonuci;
	Print(n3);
	sonuc=n3.real/bolensayi;//alinan b�len sayi  reale b�l�nd� 
	sonuci=n3.imag/bolensayi;// imag ile b�ld�k 
	printf("bolumun sonucu= %.1f+%.1fi'dir",sonuc,sonuci);// sonuclar� bast�rd�k 
}

void gercekgoster(Complex n3) { //real kisim g�steren fonksiyon 
	printf("\n\nGercek sayi=%.1f\n",n3.real); //n3�n reeli alindi
}
void gercelgoster(Complex n3) { // imag g�steren kisim yapildi 
	printf("Gercel sayi=%1.fi,\n",n3.imag); // gelen n3 strucht�n i�inden imagin de�eri g�sterilcek fonksiyon
}


