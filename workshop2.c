#include <stdio.h>
#include <stdlib.h>

int main (void){
    int north, south, west, east;

    printf("Enter North value in km: ");
    scanf("%d", &north); 

    printf("Enter South value in km: ");
    scanf("%d", &south); 

    printf("Enter East value in km: ");
    scanf("%d", &east); 

    printf("Enter West value in km: ");
    scanf("%d", &west);

    printf ("Will he take public transportation? %d \n", abs(north-south)+abs(east-west) > 2); 

}