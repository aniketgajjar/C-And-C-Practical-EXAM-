// Q-1
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter Any Two Number: \n");
    scanf("%d",num1);
    scanf("%d",num2);

    if(num1 < num2) {
        printf("Minimum Number is: %d",num1);
    } else {
        printf("Minimum Number is: %d",num2);
    }

    return 0;
}