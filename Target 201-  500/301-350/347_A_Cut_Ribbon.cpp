// LUOGU_RID: 103444246
#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;
int w[10], f[4010];
int main()
{
    scanf("%d%d%d%d", &n, &w[1], &w[2], &w[3]);
    memset(f, -0x3f, sizeof(f));
    f[0] = 0;
    for (int i = 1; i <= 3; ++i)
        for (int j = w[i]; j <= n; ++j)
            f[j] = max(f[j], f[j - w[i]] + 1);
    printf("%d\n", f[n]);
    return 0;
}