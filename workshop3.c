#include <stdio.h>

int
checkEqual (float fA, float fB){
    int nConvA, nConvB;
    
    nConvA = (int)(fA*100);
    nConvB = (int)(fB*100);
    return nConvA==nConvB;

}

int
main (void){
    float fA, fB;

    printf("Input first float value: ");
    scanf("%f", &fA);

    printf("Input second float value: ");
    scanf("%f", &fB);

    printf("\nAre these values equal up to the second decimal place? %d\n", checkEqual(fA, fB));

    return 0;

}