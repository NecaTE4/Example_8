/*
Name: Necati
Surname: Koçak
Student ID: 150120053
*/
#include <stdio.h>

constructTriangle(int k,int l) {

    if (l < 64 && k <33) {
        if (k + l  > 32 && l-k < 32) {
            printf("1");
            constructTriangle(k,l+1);
        } else {
            printf("_");
            constructTriangle(k, l + 1);
        }

        }
        if(l==64) {
            printf("\n");
            k++;
            l = 1;
            constructTriangle(k, l);
        }
}

constructTriangle2(int k,int l) {

    if (l < 64 && k < 17) {
        if (k + l > 32 && l - k < 32) {
            printf("1");
            constructTriangle2(k, l + 1);
        } else {
            printf("_");
            constructTriangle2(k, l + 1);
        }

    }

    if (l < 64 && k >= 17 && k<33) {

        if (k%16 + l >16  && l - k%16 <16 || k%16 + l >48  && l - k%16 <48 ) {
            printf("1");
            constructTriangle2(k, l + 1);
        } else {
            printf("_");
            constructTriangle2(k, l + 1);
        }

    }
    if (l == 64) {
        printf("\n");
        k++;
        l = 1;
        constructTriangle2(k, l);

    }
}
int main() {
    constructTriangle(1,1);
    printf("\n");
    printf("\n");
    printf("\n");
    constructTriangle2(1,1);}