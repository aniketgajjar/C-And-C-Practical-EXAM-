// Q-7.
// print leap year!

#include <stdio.h>

int main() {
    int year;

    printf("Enter Any Year: \n");
    scanf("%d",&year);

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                printf("Given Year is a LEAP YEAR!");
            } else {
                printf("Given Year is NOT a LEAP YEAR!");
            }
        } else {
            printf("Given Year is a LEAP YEAR!");
        }
    } else {
        printf("Given Year is NOT a LEAP YEAR!");
    }

    return 0;
}