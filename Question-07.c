#include <stdio.h>
int main() {
    int bill;
    char StudentID;
    printf("Enter total bill: $");
    scanf("%d", &bill);

    printf("Do you have a student ID?(Y/N)\n");
    scanf(" %c", &StudentID);
    
    if(StudentID == 'Y' || StudentID == 'y') {
        bill = bill - 2;
    }
    else if(StudentID == 'N' || StudentID == 'n') {
        bill = bill ;
    }
    else {
        printf("'Invalid option selected.'\n");
    }

    if(bill < 0) {
        bill = 0;
    }
    printf("Your total bill is $%d", bill);

    return 0;
}