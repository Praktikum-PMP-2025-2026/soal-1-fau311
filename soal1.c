/*
EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
Modul               : 2 (Data Manipulation and External Files)
Hari dan Tanggal    : 22 April 2026
Nama (NIM)          : Syifa Fauziah Prasetyo (13224090)
Nama File           : prak2.c
Deskripsi           : Fungsi analisis yang dapat melaporkan jumlah, rata-rata, nilai maksimum, 
                      dan indeks saat nilai maksimum

*/

#include <stdio.h>

void SumandAvg(int *arr, int n, int *sum, float *avg){
    *sum = 0;
    for(int i = 0; i < n; i++){
        *sum = *sum + arr[i];
    }
    *avg = (float)*sum/n;
}

void MaxandIdx(int *arr, int n, int *max, int *idx){
    *max = arr[0];
    *idx = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > *max){
            *max = arr[i];
            *idx = i;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sum, max, idx;
    float avg;

    // pindahkan fungsi ke main
    SumandAvg(arr, n, &sum, &avg);
    MaxandIdx(arr, n, &max, &idx);

    // output
    printf("SUM %d\n", sum);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d\n", idx);

    return 0;
}

// REFERENSI 
// R. Darmakusuma, R. Yusuf, I. H. P. Tnunay, D. Widyanto, E. J. Brillianshah, I. T. Kurniawan, dan S. Sutandi, Modul Praktikum EL2008 Pemecahan Masalah dengan Pemrograman. Bandung, Indonesia: Program Studi Teknik Elektro, Sekolah Teknik Elektro dan Informatika, Institut Teknologi Bandung, 2026. 
// https://www.geeksforgeeks.org/c/c-pointers/
// https://www.geeksforgeeks.org/c/how-to-find-maximum-value-in-an-array-in-c/ 
// https://stackoverflow.com/questions/13530209/how-to-convert-int-to-float-in-c 
