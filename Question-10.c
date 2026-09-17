#include <stdio.h>
int main() {
    int size , quantity , current_time , crust_type , fulfillment;
    char cheese_choice, studentID;
    float total_bill , discount_amount = 0;
    printf("========================================\n");
    printf(" WELCOME TO SLICE & DICE PIZZA PALACE   \n");
    printf("========================================\n");
    printf("Select pizza size (1.Small, 2.Medium, 3.Large):");
    scanf("%d",&size);
    if(size == 1)
        printf("'Small size selected'\n\n"); 
    else if (size == 2)
        printf("'Medium size selected'\n\n");
    else if (size == 3)
        printf("'Large size selected'\n\n");     
    else {
        printf("Invalid size selected");
        return 0; //exits the whole program
        }
    
    printf("How many pizzas (1-3):");
    scanf("%d" , &quantity);
    if(quantity == 1) {
        printf("1 pizza: $8.00\n\n");
        total_bill = total_bill + 8;
    }   else if (quantity == 2) {
        printf("2 pizzas: $15.00(Save $2.00!)\n\n");
        total_bill = total_bill + 15;
    }   else if (quantity == 3) {
        printf("3 pizzas: $21.00(Save $3.00!)\n\n");
        total_bill = total_bill + 21;
    }   else {
        total_bill = quantity * 8;
    }

    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed):");
    scanf("%d" ,&crust_type);
    if(crust_type == 1) {
        printf("Regular crust selected (+$0.00)\n\n");
    }  else if(crust_type == 2) {
        printf("Thin crust selected (+$1.00)\n\n");
        total_bill = total_bill + 1;
    }  else if(crust_type == 3){
        printf("Stuffed crust selected (+$2.00)\n\n");
        total_bill = total_bill + 2;
    }  else {
        printf("Invalid option selected(+$0.00)\n\n");
    }
    
    printf("Extra cheese (Y/N):");
    scanf(" %c", &cheese_choice);
    if(cheese_choice == 'Y' || cheese_choice == 'y') {
        printf("Extra cheese added (+$1.50)\n\n");
        total_bill = total_bill + 1.5;
    }
    else if(cheese_choice == 'N' || cheese_choice == 'n') {
        printf("No extra cheese added (+$0.00)\n\n") ;
    }

    printf("Enter current hour (0-23):");
    scanf("%d", &current_time);
    if(current_time >=11 && current_time <=14){
        discount_amount = total_bill * 0.1;
        printf("Happy Hour 10 discount applied! (-$%.2f)\n\n" , discount_amount);
        total_bill = total_bill - discount_amount;
    }   else if (current_time >=0 && current_time < 11 && current_time >14 && current_time <=23){
        printf("No discount applied(-$0.00)\n\n");
    }   else {
        printf("Invalid time entered(-$0.00)\n\n");
    }

    printf("Student ID (Y/N):");
    scanf(" %c", &studentID);
    if(studentID == 'Y' || studentID == 'y') {
        printf("Student discount applied! (-$2.00)\n\n");
        total_bill = total_bill - 2;
    }   else if(studentID == 'N' || studentID == 'n') {
            printf("Student discount not applied! (-$0.00)\n\n");
    }   else {
            printf("'Invalid option selected.'\n\n");
    }

    if(quantity == 3 && crust_type == 3) 
        printf("You get free garlic bread!\n\n");

    printf("Fulfillment Option (1. Pickup, 2. Delivery):");
    scanf("%d", &fulfillment);
    if(fulfillment == 1){
        printf("Pickup option selected (+$0.00)");
    }   else if(fulfillment == 2){
            printf("Delivery selected (+$3.00)\n\n");
            total_bill = total_bill + 3;
    }   else {
            printf("Invalid option selected (Selecting pickup option)\n\n");
    }

    printf("========================================\n");
    printf("            ORDER RECEIPT\n");
    printf("========================================\n");
    if(size == 1)
        printf("Pizza Size:     Small\n"); 
    else if (size == 2)
        printf("Pizza Size:     Medium\n");
    else if (size == 3)
        printf("Pizza Size:     Large\n");
    else 
        printf("Pizza Size:     Invalid\n");
    
    printf("Quantity:       %d pizza(s)\n", quantity);

    if(crust_type == 1) 
        printf("Crust Type:     Regular\n");  
    else if(crust_type == 2)
        printf("Crust Type:     Thin\n");
    else if(crust_type == 3)
        printf("Crust Type:     Stuffed\n");
    else 
        printf("Crust Type:     Invalid\n");

    if(cheese_choice == 'Y' || cheese_choice == 'y')
        printf("Extra Cheese:   Yes\n");
    else if(cheese_choice == 'N' || cheese_choice == 'n') 
        printf("Extra Cheese:   No\n") ;
    
    if(studentID == 'Y' || studentID == 'y') 
        printf("Student ID:     Yes\n");
    else if(studentID == 'N' || studentID == 'n') 
        printf("Student ID:     No\n");
    else 
        printf("Student ID:     Invalid\n");

    if(fulfillment == 1)
        printf("Fulfillment:    Pickup\n");
    else if(fulfillment == 2)
        printf("Fulfillment:    Delivery\n");
    else 
        printf("Fulfillment:    Invalid\n");

    printf("----------------------------------------\n");
    
    if(quantity == 3 && crust_type == 3){ 
        printf("BONUS: Free Garlic Bread included!\n");
    }
    printf("========================================\n");
    if(total_bill < 0) 
        printf("FINAL TOTAL:    $0\n");
    else
        printf("FINAL TOTAL:    $%.2f\n", total_bill);
    printf("========================================\n");
    printf("   Thank you for dining with us!\n");
    printf("   Have a slice-tastic day!\n");
    printf("========================================\n");

    return 0;
}
