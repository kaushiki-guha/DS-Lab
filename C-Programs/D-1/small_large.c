#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,ch;
    int *a;
    int min;
    int max=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    
    if (a == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    min=a[0];
    max=a[0];
    
    while(1)
    {
        printf("Menu:\n");
        printf("1. Minimum value from the array.\n");
        printf("2. Maximum value from the array.\n");
        printf("3. EXIT.\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                for (int i = 1; i < n; i++) 
                {
                    if (a[i] < min)
                        min = a[i];
                }
                printf("Smallest: %d\n", min);
                return 0;
                break;
            }
            case 2:
            {
                for (int i = 1; i < n; i++)
                {
                    if (a[i] > max)
                        max = a[i];
                }
                printf("Largest: %d\n", max);
                return 0;
                break;
            }
            case 3:
            {
                printf("Exiting program.\n");
                if (a != NULL) 
                {
                    free(a);
                }
                return 0;
                break;
            }

            default:
                printf("Wrong Choice!!!");
            return 0;
        }

    }
    free(a);

    return 0;
}
