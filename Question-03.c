#include <stdio.h>
int main() {
    int quantity;
    printf("Enter your desired pizza quantity(Only limited to 1,2 or 3): ");
    scanf("%d", &quantity);
    if(quantity == 1){
        printf("'Your total for 1 pizza is $8'");
    }
    else if(quantity == 2){
        printf("'Your total for 2 pizzas is $15'");
    }
    else if(quantity == 3){
        printf("'Your total for 3 pizzas is $21'");
    }
    else {
        printf("'Please enter pizza quantity only limited to 1,2 or 3'");
    }
    return 0;
}