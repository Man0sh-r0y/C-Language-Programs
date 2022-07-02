#include <stdio.h>

int main()
{
    int n, k, maxAND = 0, maxOR = 0, maxXOR = 0, temp = 0;
    printf("Enter the value of n and k: ");
    scanf("%d %d", &n, &k);
    for (int i = 1; i < n; i++)
    {
        temp += (n - i);
    }
    // printf("%d---->temp value\n", temp);
    int bitwiseAND[temp];
    int bitwiseOR[temp];
    int bitwiseXOR[temp];
    int i = 0, a = 1, b;
    while (i < temp)
    {
        b = a + 1;
        while (b <= n)
        {
            bitwiseAND[i] = a & b;
            bitwiseOR[i] = a | b;
            bitwiseXOR[i] = a ^ b;
            i++;
            b++;
        }
        a++;
    }

    for (int i = 0; i < temp; i++)
    {
        if (bitwiseAND[i] > maxAND && bitwiseAND[i] < k)
        {
            maxAND = bitwiseAND[i];
        }
        if (bitwiseOR[i] > maxOR && bitwiseOR[i] < k)
        {
            maxOR = bitwiseOR[i];
        }
        if (bitwiseXOR[i] > maxXOR && bitwiseXOR[i] < k)
        {
            maxXOR = bitwiseXOR[i];
        }
    }
    printf("%d\n%d\n%d", maxAND, maxOR, maxXOR);
    return 0;
}