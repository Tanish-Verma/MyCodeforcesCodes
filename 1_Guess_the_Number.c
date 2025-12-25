#include <stdio.h>
#include <string.h>

int main(){
    int l =1;
    int r = 1000000;
    while (l!=r)
    {
        int mid = (l+r+1)/2;
        printf("%d\n",mid);
        fflush(stdout);
        
        char s[3];
        scanf("%s", s);
        
        if (strcmp(s,"<")==0)
        {
            r = mid -1;
        }
        else{
            l = mid;
        }
    }
    printf("! %d",l);
    fflush(stdout);
    return 0;
}