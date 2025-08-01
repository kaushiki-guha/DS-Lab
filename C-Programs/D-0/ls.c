#include<stdio.h>
int main()
{
    int n, s;
    printf("Enter length of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of the array: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
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
    return 0;
}

