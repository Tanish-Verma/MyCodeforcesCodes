#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((min(a,b)+1)*2<max(a,b))
        {
            printf("NO\n");
            continue;
        }
        c= c-a;
        d=d-b;
        if ((min(c,d)+1)*2<max(c,d))
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
    return 0;
}