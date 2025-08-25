// Q-4
// print 1 to n numbers while loop!
#include <stdio.h>

int main() {
    int num;

    printf("Enter Any Number: \n");
    scanf("%d",&num);

    while (num>=1)
    {
        printf("%d\n",num);
        num--;
    }
    return 0;
}