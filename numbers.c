#include <stdio.h>

void oddOrEven(int n);
void timesTable(int n);
void square(int n);
void prime(int n);
void myEnglishName(int n);

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
    //print the times table for n from 1 x n to 12 x n.
    //first line has been started for you. Try the inefficient
    //method first, then try using a loop

    printf("%i x %i = %i\n", 1,n, 1*n);
    return;
}

void square(int n)
{
    //print out whether the number is a square number or not.
    //if its square root is a floating point number, it is not square

    return;
}

void prime(int n)
{
    //print out whether the number is prime or not
    return;
}

void myEnglishName(int n)
{
    //can you print out what n is in English? E.g.
    //if the user typed 5, can you print Your name in English is five.
    //you may assume that we won't exceed a hundred.
    return;
}