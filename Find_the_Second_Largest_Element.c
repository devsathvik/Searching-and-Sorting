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


    //===== Write Your Logic Here =====
    int max = arr[0];
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int max2 = 0;
    int found = 0;

    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] == max){
            continue;
        }
        if(!found || arr[i] > max2){
            max2 = arr[i];
            found = 1;
        }
    }   

    if(found){
        printf("%d",max2);
    }
    else{
        printf("-1000000000000000000");
    }

}