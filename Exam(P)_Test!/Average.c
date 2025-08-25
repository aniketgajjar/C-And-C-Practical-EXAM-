// Q-5.

#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    float average;

    printf("Enter The Marks of Three Subjects: \n");
    scanf("%d", &sub1);
    scanf("%d", &sub2);
    scanf("%d", &sub3);

    average = (sub1 + sub2 + sub3) / 3.0;
    printf("The Average of Three Subjects is: %.2f", average);  

    return 0;
}