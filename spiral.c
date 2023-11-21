#include <stdio.h>
const int n = 5;

void writer(int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int arr[n][n] = {0}, k = 1;

    for (int s = 0; s < n / 2; s++)
    {
        for (int i = s; i < n - s - 1; i++)
        {
            arr[s][i] = k++;
        }
        for (int j = s; j < n - s - 1; j++)
        {
            arr[j][n - s - 1] = k++;
        }
        for (int i = n - s - 1; i > s; i--)
        {
            arr[n - s - 1][i] = k++;
        }
        for (int i = n - s - 1; i > s; i--)
        {
            arr[i][s] = k++;
        }
    }
    arr[n / 2][n / 2] = k;

    writer(arr);
}
