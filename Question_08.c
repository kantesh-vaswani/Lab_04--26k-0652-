#include <stdio.h>
int main(){
    int quantity , crust_type;
    printf("How many pizzas are you having? ");
    scanf("%d", &quantity);

    printf("Enter the crust type choice (1 for Regular, 2 for Thin, 3 for Stuffed): ");
    scanf("%d", &crust_type);

    if(quantity == 3 && crust_type == 3) {
        printf("'You get free garlic bread!'");
    }
    else {
        printf("'Thank you for your order!'");
    }

    return 0;
}