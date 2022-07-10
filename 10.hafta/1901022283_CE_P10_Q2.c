#include <stdio.h>
#include <math.h>

struct Complex   // struch tanýmlandý
{
float real;  // real ve imag ifadeleri tanýmlandý structýn 
float imag;
};
typedef struct Complex Complex;   // str com yerine sadece complex tanýmlandý 
Complex add(Complex n1,Complex n2);
void Print(Complex n);
float Abs(Complex n);
void skalercarp(Complex n3, float carpansayi);
void skalerbol(Complex n3, float bolensayi);  // fonksiyonlar tanýmalndý 
void gercekgoster(Complex n3);
void gercelgoster(Complex n3);
float skaler;
float skalerb;
int main()
{
Complex n1,n2,n3,temp;  // structýn  alýnacak deðerleri tanýdýldý 

printf("1.karmasik sayinizi giriniz \n");
printf("gercek ve gercel kisimlari giriniz:\n");
scanf("%f %f", &n1.real,&n1.imag);  // n1'in real ve imagi alýndý 
Print(n1); // sayýlar yazdýrýldý 
printf("\n2.karmasik sayinizi giriniz\n");
printf("gercek ve gercel kisimlari giriniz:\n");
scanf("%f %f",&n2.real,&n2.imag);// n1'in real ve imagi alýndý 
Print(n2);// sayýlar yazdýrýldý
temp = add(n1, n2);  // fonksiyon bastýrýldý 
printf("Toplam = "); //sonuç yazdýrýldý 
Print(temp);//sonucu bastýrdýk 
printf("toplamin mutlak degeri = %f", Abs(temp)); //  mutlak deðeri 

printf("\ncarpim yapacaginiz skaler sayiyi girin\n");  // skaler iþlem yapacagýmýz sayýyý sordurup aldýrdýk
scanf("%f",&skaler); // skaler çarpma iþlemi bu sayi ile ile yapilacak 

printf("karmasik sayinizi giriniz\n"); // n3 deðerleri alýndý 
scanf("%f %f",&n3.real,&n3.imag);
skalercarp(n3,skaler); // skaler çarpma iþlemi bu sayi ile yapilcaka
printf("\n\n\nbolme islemi yapacaginiz skaler sayiyi girin\n");
scanf("%f",&skalerb);//
skalerbol(n3,skalerb); // bolme iþlemi yaptýrýlcak 
gercekgoster(n3); // real kismi gösterilcek
gercelgoster(n3); //  imag kýsmý gosterilcek
}
Complex add(Complex n1, Complex n2)
{
Complex temp;
temp.real = n1.real + n2.real;//reellerin toplamý yapýldý 
temp.imag = n1.imag + n2.imag; // imaglarýn toplamý yapýldi 
return(temp); // temp dönüþ yapildi
}
void Print (Complex n) // fonnksiyon oluþturuduldu 
{
printf("%.1f + %.1fi\n", n.real, n.imag); // complexin elemanlarý yazdýrýldý 
}
float Abs(Complex n)
{
	return sqrt( pow(n.real,2) + pow(n.imag,2)); // mutlak deðerli iþlem yapýldý  pow ile kareleri alýndý sonra bunlarýn kökü alýndý ve geri döndürüldü 
}


void skalercarp(Complex n3, float carpansayi) {  // fonksiyon oluþturuldu  n3 structý alýndý
	float sonuc;
	float sonuci;
	printf("(%.1f) * ",carpansayi);
	Print(n3);
	sonuc=carpansayi*n3.real; //alinancarpan sayi ile real carpýldi
	sonuci=carpansayi*n3.imag; // alinan sayi ile imag carpildi 
	printf("carpimin sonucu= %.1f+%.1fi'dir",sonuc,sonuci);//sonuc yazdýrýldý 
}

void skalerbol(Complex n3, float bolensayi) { // fonksiyon olusturuldu n3 structý ve bolen sayýsý geldi
	float sonuc;
	float sonuci;
	Print(n3);
	sonuc=n3.real/bolensayi;//alinan bölen sayi  reale bölündü 
	sonuci=n3.imag/bolensayi;// imag ile böldük 
	printf("bolumun sonucu= %.1f+%.1fi'dir",sonuc,sonuci);// sonuclarý bastýrdýk 
}

void gercekgoster(Complex n3) { //real kisim gösteren fonksiyon 
	printf("\n\nGercek sayi=%.1f\n",n3.real); //n3ün reeli alindi
}
void gercelgoster(Complex n3) { // imag gösteren kisim yapildi 
	printf("Gercel sayi=%1.fi,\n",n3.imag); // gelen n3 struchtýn içinden imagin deðeri gösterilcek fonksiyon
}


