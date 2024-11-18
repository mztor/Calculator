#include <stdio.h>

void oddOrEven(int n);
void timesTable(int n);
void square(int n);
void prime(int n);

int main(void)
{
    int number;

    printf("What's your number? ");
    scanf("%d", &number);

    oddOrEven(number);
    timesTable(number);
    square(number);
    prime(number);
}

void oddOrEven(int n)
{
    //checks the remainder of n/2 and if it is 0, it is even
    //if remainder is 1, it is odd. Print the result
    if (n%2==0){
        printf("%d is an even number.\n",n);
    } else {
        printf("%d is an odd number.\n",n);
    }
    return;
}

void timesTable(int n)
{
    return;
}

void square(int n)
{
    return;
}

void prime(int n)
{
    return;
}