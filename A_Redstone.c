#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool Redstone(int *arr,int n){
    int max = -1;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];   
        }
    }
    int *countArray = (int*)calloc((max+1),sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        countArray[arr[i]]++;   
    }
    for (size_t i = 0; i < max+1; i++)
    {
        if (countArray[i]>1)
        {
            return true;
        }
        
    }
    return false;
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int *gears = (int*)malloc(sizeof(int)*n);
        for (size_t i = 0; i < n; i++)
        {
            scanf("%d",&gears[i]);
        }
        if(Redstone(gears,n)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}