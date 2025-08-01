/*2. Write a C program to create an Employee ADT and define an array
of structures to store information of multiple Employees. Each
Employee should contain the following fields:

Employee ID (integer)
Name (char)
Department (char)
Salary (float)
Using Employee ADT perform the following tasks:
(i) Input details of n employees.
(ii) Display the details of all employees.
(iii) Search for an employee by their Employee ID using a
user-defined function. If the employee is found,
display their full details; otherwise, print "Employee
not found".*/


#include <stdio.h>

    
    struct Employee
    {
        int empID;
        char name[50];
        char department[50];
        float salary;
    };
    void detailsEmployees(struct Employee e[], int n);
    void displayEmployees(struct Employee e[], int n);
    void searchEmployees(struct Employee e[], int n, int id);
    int main()
    {
        
        int n,ch,id;
        struct Employee e[100];
        
        printf("Enter number of employees: ");
        scanf("%d",&n);

        printf("Enter number of employees: ");
        scanf("%d",&n);

        detailsEmployees(e,n);

        
        while (1)
        {
            printf("\nMenu:\n");
            printf("1. Display all employee details\n");
            printf("2. Search employee by ID\n");
            printf("3. Exit\n");
            printf("Enter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                {
                    displayEmployees(e, n);
                    break;
                }
                case 2:
                {
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &id);
                    searchEmployees(e,n,id);
                    break;
                }
                case 3:
                {
                    printf("Exiting program.\n");
                    return 0;
                }
                default:
                    printf("Invalid choice. Try again.\n");
            }
        }
        return 0;
    }

        
    void detailsEmployees(struct Employee e[], int n)
    {
         for (int i = 0; i < n; i++) 
        {
            printf("\nEnter details for Employee %d\n", i + 1);
            printf("Employee ID: ");
            scanf("%d", &e[i].empID);

            printf("Name: ");
            scanf(" %[^\n]", e[i].name);  
            printf("Department: ");
            scanf(" %[^\n]", e[i].department);

            printf("Salary: ");
            scanf("%f", &e[i].salary);
        }
    }

    void displayEmployees(struct Employee e[], int n) 
    {
        printf("\nEmployee Details:\n");
        for (int i = 0; i < n; i++) 
        {
            printf("\nEmployee %d\n", i + 1);
            printf("ID: %d\n", e[i].empID);
            printf("Name: %s\n", e[i].name);
            printf("Department: %s\n", e[i].department);
            printf("Salary: %.2f\n", e[i].salary);
        }
    }

    void searchEmployees(struct Employee e[], int n, int id)
    {
        for (int i=0; i<n;i++)
        {
            if(e[i].empID==id)
            {
                printf("\nEmployee Found:\n");
                printf("ID: %d\n", e[i].empID);
                printf("Name: %s\n", e[i].name);
                printf("Department: %s\n", e[i].department);
                printf("Salary: %.2f\n", e[i].salary);
                return;
            }
        }
        printf("Employee not found.\n");
    }

    
