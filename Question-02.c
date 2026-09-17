#include <stdio.h>
int main() {
    int pizzas;
    printf("How many pizzas do you want? \n");
    scanf("%d", &pizzas);
    if(pizzas > 1){
        printf("'Check our multi-pizza deals.'");
    }
    else if(pizzas == 1){
        printf("'Your total is $8.'");
    }
    else {
        printf("'Invalid number.'");   // For negative numbers.
    }
    
    return 0;
}