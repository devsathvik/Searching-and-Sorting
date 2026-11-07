#include <stdio.h>
#include <stdlib.h>

long long solve(int n, long long* arr) {
    //===== Write Your Logic Here =====
    int max = 0;

    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;

}

int main() {
    int n; scanf("%d", &n);
    long long* arr = (long long*)malloc(n * sizeof(long long));
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    printf("%lld\n", solve(n, arr));
    free(arr);
    return 0;
}