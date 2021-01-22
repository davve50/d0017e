#include <stdio.h>
#include <stdlib.h>

#if 0
//Task 2
int main()
{
    printf("In C, lowercase letters are significant.\n");
    printf("main() is where program execution begins.\n");
    printf("Opening and closing braces enclose program statements in a routine.\n");
    printf("All program statements must be terminated by a semicolon.\n");

    printf("\n");

    printf("87 - 15 = %d\n",87-15);

    printf("\n");

    int sum;
    sum = 25 + 37 - 19;
    printf("The answer is %d", sum);

    return 0;
}
#endif

#if 0
//Task 3

int nextMultiple(int i, int j){
    int result;
    result = (i+j) - (i%j);
    return result;

}

int main()
{
    float x = 2.55;
    printf("%f\n", 3*pow(x,3) - 5*pow(x,2) + 6);

    printf("\n");

    printf("%d\n", nextMultiple(256,7));
    printf("%d\n", nextMultiple(365,7));
    printf("%d\n", nextMultiple(12.258,23));
    printf("%d\n", nextMultiple(996,4));

    return 0;
}
#endif

#if 1
//Task 4
int main(){

    printf (" n      n^2\n");
    printf ("---     ---\n");
    for(int i = 1; i <= 10; i++){
        if(i == 10){
            printf(" %d      %d\n",i,i*i);
        }else{
            printf(" %d       %d\n",i,i*i);
        }
    }

    printf("\n");

    printf (" n       n!\n");
    printf ("---     ---\n");
    int fact;
    for(int i = 1; i <= 10; i++){
        fact = 1;
        for(int j  = i; j > 0; j--){
            fact *= j;
        }
        if(i == 10){
            printf(" %d      %d\n",i,fact);
        }else{
            printf(" %d       %d\n",i,fact);
        }
    }

    printf("\n");

    int n, two_to_the_n;

    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n     2 to the n\n");
    printf("---    ---------------\n");

    two_to_the_n = 1;

    for(n = 0; n <= 10; ++n){
        printf("%2i           %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
    }

    printf("\n");

    int x, number, triangularNumber, counter, num;

    printf("Number of calculations? ");
    scanf("%i", &num);

    for(counter = 1; counter <= num; ++counter){
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for(n = 1; n <= number; ++n){
            triangularNumber += n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }


    return 0;
}
#endif
