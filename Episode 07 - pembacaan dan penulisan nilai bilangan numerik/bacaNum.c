/* contoh membaca nilai numerik: bilangan bulat, bilangan riil */
/* kemudian menuliskan nilai yang di baca */

#include <stdio.h>
int main ()
{
	/*kamus*/
	int a;
	float x;
	

	/*program*/
	

	printf("Ketik nilai integer: ");
	scanf("%d", &a); /* membaca nilai a bertype integer, nama variable di tulis dengan &a(address of ...) */
	printf("Nilai yang dibaca: %d \n", a);

	printf("Ketik nilai bilangan riil: ");
	scanf("%d", &x); 
	printf("nilai yang dibaca: %f \n", x);





	return 0;
}