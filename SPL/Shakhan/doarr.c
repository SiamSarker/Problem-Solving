#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            int count = 0;
            for (int k = m - 1; k >= 0; k--)
            {
                for (int l = n - 1; l >= 0; l--)
                {
                    if (arr[i][j] == arr[k][l])
                    {
                        count++;
                    }
                    if (count > 1)
                        arr[i][j] = -1;
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}