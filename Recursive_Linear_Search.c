#include <stdio.h>
#include <stdlib.h>

int solve(int n, long long* arr, long long target) {
    //===== Write Your Logic Here =====
    static int i = 0;
    if(i == n){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    i++;
    return solve(n,arr,target);

}

int main() {
    int n; scanf("%d", &n);
    long long* arr = (long long*)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    long long target; scanf("%lld", &target);
    printf("%d\n", solve(n, arr, target));
    free(arr);
    return 0;
}