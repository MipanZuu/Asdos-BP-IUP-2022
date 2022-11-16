/*
    struct.c
    2022-11-09
    Denta Bramasta
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

struct Mahasiwa {
    char nama[100];
    char nrp[20];
    int umur;
    double ipk;
    int semester;
    int status;
};

int main() {
    struct Mahasiwa mhsIUP;
    struct Mahasiwa mhsReguler;
    
    mhsIUP.umur = 20;
    mhsIUP.ipk = 3.87;
    mhsReguler.ipk = 3.5;

    printf("%.2lf\n", mhsIUP.ipk);
    printf("%.2lf\n", mhsReguler.ipk);

    return 0;
}