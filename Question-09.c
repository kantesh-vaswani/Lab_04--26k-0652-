#include <stdio.h>
int main() {
    int fulfillment , total_bill;
    printf("Enter total bill: $");
    scanf("%d", &total_bill);

    printf("Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillment);

    if(fulfillment == 1){
        total_bill = total_bill;
    }
    else if(fulfillment == 2){
        total_bill = total_bill + 3;
    }
    else {
        printf("Invalid option selected.\n");
    }

    printf("Your total bill is $%d", total_bill);

    return 0;
}