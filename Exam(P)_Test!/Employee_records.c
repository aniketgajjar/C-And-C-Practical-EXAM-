// Q-9.
// write a program to store and display 5 employee details using class and object!

#include <stdio.h>

class Employee {
    public:
        int id;
        char name[50];
        float salary;

        void getDetails() {
            printf("Enter Employee ID: ");
            scanf("%d", &id);
            printf("Enter Employee Name: ");
            scanf("%s", name);
            printf("Enter Employee Salary: ");
            scanf("%f", &salary);
        }
        void display() {
            printf("Employee ID: %d\n", id);
            printf("Employee Name: %s\n", name);
            printf("Employee Salary: %.2f\n", salary);
        }
};

int main() {
    Employee e;
    e.display();
    e.getDetails();
    
    return 0;
}   