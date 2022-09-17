#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* fp;
    fp = fopen("test.txt", "r");

    // Memindahkan pointer ke akhir
    fseek(fp, 0, SEEK_END);

    // Mencetak posisi pointer
    printf("Jumlah Karakter di dalam teks = %ld karakter.", ftell(fp));

    _getch();
    return 0;
}