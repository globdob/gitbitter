#include <stdio.h>

int main (void){
    int sixnumber;
    printf ("Enter a six-digit number: ");
    scanf ("%d", &sixnumber);

    int first = ((sixnumber/100000)%10)+((sixnumber/10000)%10)+((sixnumber/1000)%10);
    int second = ((sixnumber%10)+((sixnumber/100)%10)+((sixnumber/10)%10));
    
    printf("Sum of first half: %d\n", first);
    printf("Sum of second half: %d\n", second);
    printf("First half greater than the second half? %d\n", first>second);

    return 0;
}