#include <stdio.h>

int main() {
    //set up all variables
    int salary;
    float tax;

    // Ask the user to type their salary
    printf("What's your salary: ");

    // Get and save their salary
    scanf("%d", &salary);
    
    //debugging output statement
    printf("%d",salary);

    switch (salary) {
        case 0 ... 18200:
        //actually, not necessary to include as any value less than 
        //18200 will default to tax = 0  anyway
            tax = 0;
            break;

        case 18201 ... 45000:
            tax = 0.16 * (salary - 18200);
            break;

        case 45001 ... 135000:
            tax = 0.3 * (salary - 45000) + 4288;
            break;

        case 135001 ... 190000:
            tax = 0.37 * (salary - 135000) + 31288;
            break;
        
        default:
            if (salary > 190000) {
                tax = 0.45 * (salary - 190000) + 51638;
            }
        
    }

     printf("The tax on your income is: $%.2f. Your salary was %d \n", tax, salary);

}


