// MAGALLANES, REMMUELENE BRIDGET D. DIT 1-2
#include <stdio.h>

int main ()
{
    int n1 = 11, n2 = 22;
    int add = n1 + n2 ;
    int subtract = n1 - n2;
    int multiply = n1 * n2 ;
    int divide = n1 / n2 ;

    printf("%d\n", add);
    printf("%d\n", subtract);
    printf("%d\n", multiply);
    printf("%d\n", divide);

    int result1 = (n1 < n2) && (n1 > 0);
    int result2 = (n1 > n2) || (n2 > 0);
    int result3 = (n1 == n2);
        printf ("\n");
    
    printf("AND result: %d\n", result1);
    printf("OR result: %d\n", result2);
    printf("NOT result: %d\n", result3);

        printf ("\n");
        
    int total = add;  // total = n1 + n2

    total += n1;  // add n1 to total
    if (total > add) {
        printf("After total += n1: %d\n", total);
    }

    total -= n2;  // subtract n2
    if (total < add + n1) {
        printf("After total -= n2: %d\n", total);
    }

    total *= n1;  // multiply by n1
    if (total > 0) {
        printf("After total *= n1: %d\n", total);
    }

    total /= n2;  // divide by n2
    if (total > 0) {
        printf("After total /= n2: %d\n", total);
    }


}