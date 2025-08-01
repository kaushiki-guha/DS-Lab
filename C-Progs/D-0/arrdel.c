#include<stdio.h>
    int main()
    {
        int n;
        printf("Enter array size: ");
        scanf("%d",&n);
        int a[n];
        int b[n-1];
        printf("Enter array elements: \n");
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        int ch,num;
        printf("Enter the position you want to delete the number(beginning-1, end- 2, required position- 3): ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {
            case 1:
            {
                for(int i=0; i<n; i++)
                {
                    b[i]=a[i+1];
                }
                break;
                    
            }
            case 2:
            {
                for(int i=0; i<n-1; i++)
                {
                    b[i]=a[i];
                }
                break;
            }
            case 3:
            {
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

                break;
            }
            default:
                printf("Invalid choice!\n");
                return 1;
            
        }
            
        for (int i=0; i<(n-1);i++)
        {
            printf("%d ", b[i]);
        } 
        printf("\n");  
    }














