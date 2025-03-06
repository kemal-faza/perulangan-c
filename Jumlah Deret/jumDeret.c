/*Nama File 	: jumDeret.c*/
/*Deskripsi 	: Program menghitung jumlah bilangan dari deret artimatika 1 sampai N.*/
/*Pembuat   	: 24060124120013-Muhamad Kemal Faza*/
/*Tgl Pembuatan	: 5/03/2025 - 16.35*/
#include <stdio.h>

int main()
{
    // Kamus
    int total = 0, N;

    // Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Nilai N harus positif");
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            total += i;
        }
        printf("Jumlah deret dari 1 sampai %d = %d", N, total);
    }
}