#include <stdio.h>
int main() {
    float order_total;
    char extra_cheese;
    printf("Enter current order total amount: $");
    scanf("%f", &order_total);

    printf("'Do you want extra cheese (Y/N)?'\n");
    scanf(" %c" , &extra_cheese);

    if(extra_cheese == 'Y' || extra_cheese == 'y') {
        order_total = order_total + 1.5;
    }
    else if(extra_cheese == 'N' || extra_cheese == 'n') {
        order_total = order_total ;
    }
    else {
        printf("'Invalid option selected.'\n");
    }

    printf("Your total bill is $%.2f", order_total);
    
    return 0;

    
}