// C program to find union and intersection of two arrays.

#include <stdio.h>
#include <stdlib.h>
int main() {
    int A[20], B[20], C[20], D[20];
    int lenA, lenB, lenC = 0, lenD = 0;
    int i, j, flag;
    scanf("%d", &lenA);
    for (i = 0; i < lenA; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &lenB);
    for (i = 0; i < lenB; i++) {
        scanf("%d", &B[i]);
    }
    for (i = 0; i < lenA; i++) {
        flag = 1;
        for (j = 0; j < lenC; j++) {
            if (A[i] == C[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            C[lenC++] = A[i];
        }
    }
    for (i = 0; i < lenB; i++) {
        flag = 1;
        for (j = 0; j < lenC; j++) {
            if (B[i] == C[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            C[lenC++] = B[i];
        }
    }

    for (i = 0; i < lenA; i++) {
        for (j = 0; j < lenB; j++) {
            if (A[i] == B[j]) {
                D[lenD++] = A[i];
                break;
            }
        }
    }
    printf("\nC: ");
    for (i = 0; i < lenC; i++) {
        printf("%d ", C[i]);
    }
    printf("\nD: ");
    for (i = 0; i < lenD; i++) {
        printf("%d ", D[i]);
    }

    return 0;
