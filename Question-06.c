#include <stdio.h>
int main(){
    int total_bill , current_time;
    printf("Enter total bill: $");
    scanf("%d", &total_bill);

    printf("Enter current time in 24-hour format(0-23): ");
    scanf("%d", &current_time);

    if(current_time >=11 && current_time <=14){
        total_bill = total_bill * 0.9;
    }
    
    else if (current_time >=0 && current_time < 11 && current_time >14 && current_time <=23){
        total_bill = total_bill;
    }

    else {
        printf("Invalid time entered.\n");
    }

    printf("Your total bill is: $%d" , total_bill);
    
    return 0;
}