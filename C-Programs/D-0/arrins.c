#include<stdio.h>
    int main()
    {
        int n;
        printf("Enter array size: ");
        scanf("%d",&n);
        int a[n];
        int b[n+1];
        printf("Enter array elements: \n");
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        int ch,num;
        printf("Enter the position you want to insert the number(beginning-1, end- 2, required position- 3): ");
        scanf("%d", &ch);
        printf("\n");
        printf("Enter the number you want to insert: ");
        scanf("%d", &num);
        printf("\n");
        switch (ch)
        {
            case 1:
            {
                b[0]= num;
                for(int i=0; i<n; i++)
                {
                    b[i+1]=a[i];
                }
                break;
                    
            }
            case 2:
            {
                for(int i=0; i<n; i++)
                {
                    b[i]=a[i];
                }
                b[n]=num;
                break;
            }
            case 3:
            {
                int p;
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
                break;
            }
            default:
                printf("Invalid choice!\n");
                return 1;
            
        }
            
        for (int i=0; i<=n;i++)
        {
            printf("%d ", b[i]);
        } 
        printf("\n");  
    }















/* num;
        printf("Enter number to be added at the beginning of the array:" );
        scanf( "%d", &num)

        int b[n+1];
        b[0]=num;
        for(int i=0; i<n; i++)
        {
            b[i+1]=a[i];
        }
        
*/