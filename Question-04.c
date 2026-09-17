#include <stdio.h>
int main() {
    int bill_total , crust_type;
    printf("Enter the current total cost of the order: $");
    scanf("%d", &bill_total);
    
    printf("Enter the crust type choice (1 for Regular, 2 for Thin, 3 for Stuffed): ");
    scanf("%d", &crust_type);

    switch(crust_type) {
        case 1:
            bill_total = bill_total ;
            break;
        case 2:
            bill_total = bill_total + 1;
            break;
        case 3:
            bill_total = bill_total + 2;
            break;
        default:
            printf("Invalid number(Regular crust selected).\n");
    }

    printf("Your total bill is $%d", bill_total);

    return 0;
}