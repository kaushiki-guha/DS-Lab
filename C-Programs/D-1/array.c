/*1. C program to implement a Array ADT (Abstract Data Type) using a
structure with array, size of array, and length as members and
perform following basic matrix operations:
1. Create an Array
2. Insert an element
3. Delete an element
4. Search an element
5. Display array elements*/

#include<stdio.h>
int main()
{
    struct ArrayADT
    {
        
    }
    void insert(int n,int *a, int num,int p);
    void delete(int n,int *a, int p);
    void search(int n, int *a,int s);
    void display(n);
    int n,ch,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }

    while (1)
    {
        
        printf("\n MENU\n");
        printf("1. Insert an element.\n");
        printf("2. Delete an element.\n");
        printf("3. Search for an element. \n");
        printf("4. Display array elements.\n");
        printf("5. EXIT.\n");
        switch (ch)
        {
            case 1:
            {
                insert(num,p);
                break;
            }
            case 2:
            {
                delete(p);
                break;
            }
            case 3:
            {
                search(s);
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                printf("Exiting program...\n");
                return 0;
            }
            default:
            {
                printf("WRONG CHOICE!!!");
            }

        }
    }
    return 0;
}

void insert(int n,int *a, int num, int p)
{
    int b[n+1];
    printf("Enter the number you want to insert: ");
    scanf("%d", &num);
    printf("\n");
    printf("Enter required position: ");
    scanf("%d",&p);
    printf("\n");
    for (int i=0; i<p-1;i++)
    {
        b[i]=a[i];
    }
    b[p-1]=num;
    for (int i=p; i<=n;i++)
    {
        b[i]=a[i-1];
    }
}

void delete(int n,int *a int p)
{
    int b[n-1];
    int p;
    printf("Enter required position to be eleminated: ");
    scanf("%d",&p);
    printf("\n");
    if (p < 1 || p > n) 
    {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i=0; i<p-1;i++)
    {
        b[i]=a[i];
    }
    for (int i=p-1; i<n-1;i++)
    {
        b[i]=a[i+1];
    }
}

void search(int n, int *a, int s)
{
    printf("Enter search target: ");
    scanf("%d",&s);
    for (int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("Target found at index %d.",i);
            break;
        }
    }
    printf("\n");
}

void display(n)
{
    for(int i=0;i<n;i)
}