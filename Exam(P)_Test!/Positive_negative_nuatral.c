// Q-3

#include <stdio.h>

int main() {
    float num;
    printf("Enter The Number: \n");
    scanf("%f",num);

    if(num > 0) {
        printf("The Given Number is Positive.");
    } else if(num < 0) {
        printf("The Given Number is Negative.");
    } else {
        printf("The Given Number is Neutral.");
    }
    return 0;
}