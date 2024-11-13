#include <stdio.h>

int main() {
    //ask for the mark later
    int mark;

    // Ask the user to type a mark
    printf("Type a mark: ");

    // Get and save the mark the user types
    scanf("%d", &mark);

    switch (mark) {
        case 85 ... 100:
            printf("High Distinction\n");
            break;

        case 75 ... 84:
            printf("Distinction\n");
            break;

        case 65 ... 74:
            printf("Credit\n");
            break;

        case 50 ... 64:
            printf("Pass\n");
            break;
        
        default:
            printf("You are not defined by a number. There's always next time.\n");
        
    }

}
