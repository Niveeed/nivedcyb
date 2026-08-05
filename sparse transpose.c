#include <stdio.h>

int main()
{
    int a[100][3], b[100][3], n, i, j, c;

    printf("Enter no. of rows and column: ");
    scanf("%d %d", &a[0][0], &a[0][1]);

    printf("Enter no. of non zero elements: ");
    scanf("%d", &n);

    a[0][2] = n;

    for(i = 1; i <= n; i++)
    {
        printf("Enter row and column elements %d: ", i);
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }

    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = n;

    int k = 1;

    for(c = 0; c <= a[0][1]; c++)
    {
        for(i = 1; i <= n; i++)
        {
            if(a[i][1] == c)
            {
                b[k][0] = a[i][1];
                b[k][1] = a[i][0];
                b[k][2] = a[i][2];
                k++;
            }
        }
    }

    printf("\nTranspose sparse matrix\n");
    printf("rows\tcolumn\tvalue\n");

    for(i = 0; i <= n; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }

    return 0;
}
