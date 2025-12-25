#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b)
{
    long long val_a = *(const long long*)a;
    long long val_b = *(const long long*)b;
    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long total = 0;
        long long* g = (long long*)malloc(sizeof(long long)*n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &g[i]);
        qsort(g, n, sizeof(long long), comp);
        for (int i = n - 1; i >= 0; i -= 2)
            total += g[i];
        printf("%lld\n", total);
    }
    return 0;
}
