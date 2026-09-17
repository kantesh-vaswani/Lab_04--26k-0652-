#include <stdio.h>
int main() {
    int size;
    printf("Select a pizza size option (1 for small, 2 for Medium, 3 for Large)\n");
    scanf("%d",&size);
    switch(size){
        case 1:
            printf("'Small size selected'");
            break; 
        case 2:
            printf("'Medium size selected'");
            break;
        case 3:  
            printf("'Large size selected'");
            break;
        default:
            printf("'Invalid size'");
    }

    return 0;
}