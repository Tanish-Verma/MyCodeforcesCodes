#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *ConvertBase3(long num,int *returnSize){
    int size = log(num)/log(3);
    int * arr = (int*)malloc(sizeof(int)*(size+2));
    *returnSize =0;
    while (num>0){
        arr[(*returnSize)++] = num%3;
        num/=3;
    }
    return arr;
}
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
long long costOfDeal(int x){
    if(x==0) return 3;
    long long p = 3;
    for(int i=0;i<x;i++) p*=3;
    return p + (long long)x * (p/9);
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);

        int returnSize;
        int *nbase3 = ConvertBase3(n,&returnSize);
        
        long long totalCost=0;
        for (int i = 0; i < returnSize; i++){
            if(nbase3[i]>0){
                totalCost += nbase3[i]*costOfDeal(i);
            }
        }

        printf("%lld\n",totalCost);
        free(nbase3);
    }
    return 0;
}
