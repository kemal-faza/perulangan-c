/*Nama File 	: faktorBil.c*/
/*Deskripsi 	: Program menampilkan apa saja faktor-faktor dari bilangan N*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 16.40*/
#include <stdio.h>

int main()
{
    // Kamus
    int N, faktor = 1;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("N harus bilangan positif");
    }
    else
    {
        printf("Faktor dari %d yaitu:\n", N);
        while (faktor <= N)
        {
            if (N % faktor == 0)
            {
                printf("%d\n", faktor);
            }
            faktor++;
        }
    }
}