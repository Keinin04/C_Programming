/* File: assignchar.c */
/* Penulis : Rifqy, email rifqypratama04@gmail.com */
/* Deskripsi : */
/* Program ini berisi contoh sederhana untuk mendefinisikan */
/* variabel bertype karakter */

#include <stdio.h>

int main(){

	/* KAMUS */
  char c = 65; /* inisialisasi nilai karakter dengan 65, kode huruf ‘A’ */
  char c1;
  char c2;

/* Algoritma */

/* penulisan karakter sebagai huruf */
  printf ("Karakter = %c\n", c);
  c1 = 'Z'; /* variabel c1 diisi dengan huruf ‘Z’ */
  c2 = 'B';
  printf ("Karakter = %c\n", c1);
  printf ("Karakter c2 = %c\n",c2);
 
/* penulisan karakter */

  printf ("Karakter dalam kode ASCII = %d\n", c);
  printf ("Karakter sebagai huruf = %c\n", c);
  printf ("Karakter dalam kode ASCII = %d\n", c1);
  printf ("Karakter sebagai huruf = %c\n", c1);
  printf ("Karakter dalam kode ASCII = %d\n", c2);
  printf ("Karakter sebagai huruf = %c\n",c2);

  
 
  return 0;	
}
