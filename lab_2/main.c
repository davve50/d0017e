#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#if 0
//Task 1
int main(){

    int num1,num2;

    printf("Enter a integer: \n");
    scanf("%d", &num1);
    printf("Enter a integer: \n");
    scanf("%d", &num2);

    if(num1 % num2 == 0){
        printf("%d is evenly divided by %d\n", num1, num2);
    }else{
        printf("%d is not evenly divided by %d\n", num1, num2);
    }

    printf("\n");

    double num3,num4;
    printf("Enter a integer: \n");
    scanf("%lf", &num3);
    printf("Enter a integer: \n");
    scanf("%lf", &num4);

    if(num4 == 0){
        printf("Division by zero");
    }else{
        printf("%1.3f",num3/num4);
    }

    printf("\n");


    int number, right_digit;
    printf("Enter your number.\n");
    scanf("%i", &number);
    do{
        if(number < 0){
            right_digit = -number % 10;
        }else{
            right_digit = number % 10;
        }

        printf("%i", right_digit);

        if(number % 10 == number && number < 0){
            printf("%c",'-');
        }
        number = number / 10;
    }while(number != 0);

    printf("\n");

    return 0;
}
#endif

#if 0
//Task 2
float calcAverage(float floatArray[]){
    int count = 0;
    float sum = 0;

    for(int i = 0; i < 10; ++i){
        sum += floatArray[i];
        count++;
    }
    return sum/count;
}

int main(){
    int values[10];
    int index;

    for(int i = 0; i < 10; ++i){
        values[i] = 0;
    }

    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] =
    values[5] / 10;
    --values[2];

    for(index = 0; index < 10; ++index){
        printf("values[%i] = %i\n", index, values[index]);
    }

    float floatArray[] = {23.5, 55, 10.2, 30.4, 5, 10, 200.5, 20.5, 13.2, 12};

    printf("\nAverage is: %1.2f",calcAverage(floatArray));
}
#endif

#if 0
//Task 2
int calculateTriangularNumber(int n){
    int i, triangularNumber = 0;

    for(i = 1; i <= n; ++i){
        triangularNumber += i;
    }

    printf("Triangular number %i is %i\n", n, triangularNumber);
    return triangularNumber;
}

int prime(int n){
    int x = 0;

    if(n < 0){
        printf("\nMust be a positive integer!\n");
        return x;
    }else if(n == 0) {
        return x;
    }else if(n == 1) {
        return x;
    }else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                return x;
            }else{
                continue;
            }
        }
        x = 1;
        return x;
    }
}
#endif

#if 0
//Task 3
int arraySum(int intArray[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        //printf("\n%i",intArray[i]);
        sum += intArray[i];
    }
    return sum;
}

int main(void){
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);

    int number, counter;


    for(counter = 1; counter <= 5; ++counter){
        printf("\nWhat triangular number do you want? ");
        scanf("%i", &number);
        calculateTriangularNumber(number);
    }

    for(int i = -1; i <= 11; i++){
        printf("\nNumber: %i prime: %i", i, prime(i));
    }

    int intArray[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    printf("\n%i", arraySum(intArray, n));
    return 0;
}
#endif

#if 1
//Task 4
int main(){
    int size,diff,x,y;
    int Ax = 210;
    int Ay = 297;

    printf("Which size do you want to calculate?\n A:");
    scanf("%i", &size);

    if(size < 0){
        printf("Only positive integers allowed!");
    }else if(size > 1000){
        printf("Range is between 0 and 1000!");
    }else{
        if(size == 4){
            x = Ax;
            y = Ay;
        }else if(size > 4){
            diff = size - 4;
            for(int i = 0; i < diff; i++){
                x = Ay/2;
                y = Ax;
                Ay = y;
                Ax = x;
            }
        }else if(size < 4){
            diff = 4 - size;
            for(int i = 0; i < diff; i++){
                x = Ay;
                y = Ax*2;
                Ay = y;
                Ax = x;
            }
        }
        printf("A paper of size A%i is %i by %i mm", size, x, y);
    }
}
#endif

