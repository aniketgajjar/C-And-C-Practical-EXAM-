// Q-2

#include <stdio.h>

int main() {
    int num;

    printf("Enter Any Number: \n");
    scanf("%d",&num);

    do
    {
        printf("%d\n",num);
        num--;
    } while (num>=1);
    
    
    return 0;

}