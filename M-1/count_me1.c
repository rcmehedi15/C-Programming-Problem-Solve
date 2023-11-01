#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int count_divided_by_2 = 0;
    int count_divided_by_3 = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            count_divided_by_2++;
        }
        else if (A[i] % 2 == 0 && A[i] % 3 == 0)
        {
            count_divided_by_2++;
        }
        if (A[i] % 2 != 0 && A[i] % 3 == 0)
        {
            count_divided_by_3++;
        }
    }

    printf("%d %d\n", count_divided_by_2, count_divided_by_3);

    return 0;
}
