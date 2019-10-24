#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main (void)
{
    int z = 0, n_in, k_in, k = 0, n = 0, result, nfr = 0, kfr = 0;
    do
    {
        printf("Enter the number of items in the list (n):");
        scanf("%d*c", &n_in);

        if (n_in>1 && n_in<11)
        {
            printf("Enter the number of items to choose (k)");
            scanf("%d*c", &k_in);
            if (k_in>0 && k_in<5)
            {
                if (k_in <= n_in)
                {
                    k_in = k;
                    n_in = n;
                    result = factorial(n) / (factorial(n-k)*factorial(k));
                    //result = n! / ((n-k)!*k!);
                    z = 1;
                }
                else
                    printf("?Please Try again k must be less than n \n");
            }
            else
                printf("?Invalid input: Number must be between 1 and 4 \n");
        }
        else
            printf("?Invalid input: Number must be between 1 and 10 \n");
    } while (z == 0);
    //result = (nfr / (nfr * kfr));
    printf("k value = %d n value = %d the result is %d\n", nfr, kfr, result);
    return 0;
}
