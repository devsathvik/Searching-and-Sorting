#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Declare Local Variables / Functions here if required =====
    int first = 1;
    int min = arr[0];
    int max = 0;
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] >  max){
            max = arr[i];
        }
    }
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    for(int i = min + 1 ; i <= max - 1 ; i++ ){
        int found = 0;
        for(int j = 0 ; j < n ; j++ ){
            if(arr[j] == i){
                found = 1;
                break;
            }
        }
        if(!found){
            if(!first){
                printf(" ");
            }
            first = 0;
            printf("%d",i);
        }
    }

    //===== Write Your Logic Here =====


}