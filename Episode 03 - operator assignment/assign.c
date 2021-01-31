/* Penulis : Rifqy, rifqypratama04@gmail.com*/
/* Mengisi variabel i yg ber-type in dengan nilai 5 dan menuliskannya */

#include <stdio.h>

int main()
{
	
	/*kamus*/
	int i;

	/* Algoritma */
	i = 5; /* sekarang nilai variable i akan bernilai 5 */
	printf("Ini nilai i: %d \n", i);

	i = i + 1; /* nilai i ditambah 1, hasilnya disimpan kembali ke i */
	printf("Ini nilai i baru: %d \n", i);

	i += 1;
	printf("%d \n", i);
	return 0;
}