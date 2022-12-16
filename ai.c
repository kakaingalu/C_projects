#include <stdio.h>
 
int main()
{
    int i, j, num;
 
    printf("Enter a number to factorize: ");
    scanf("%d", &num);
 
    printf("Factors of %d are:\n", num);
    for (i=2; i<=num; i++)
    {
        if (num%i==0)
        {
            for (j=2; j<=i/2; j++)
            {
                if(i%j==0)
                    break;
            }
            if (j > i/2)
                printf("%d\t",i);
        }
    }
    return 0;
}
