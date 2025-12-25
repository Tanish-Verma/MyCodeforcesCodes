#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,b;
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        if(b>=a && (n%2 == b%2)){
            printf("YES\n");
        }
        else if ((a % 2 == b % 2) && (a % 2 == n % 2)) {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }         
    }
    return 0;
}