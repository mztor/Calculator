#include <stdio.h>

int main() {
    //ask for the mark later
    int mark = 50;
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
            printf("FAILLLLLL\n");
        
    }

}
