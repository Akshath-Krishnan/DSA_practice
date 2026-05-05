#include <stdio.h>
void selection_sort(int arr[],int length){
    int min;
    for(int i = 0; i < length - 1; i++){
        min = i;
        for(int j = i + 1; j < length; j++){
            if(arr[j] < arr[min]){
                min = j;
            } 
        }

        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Sorted Array: ");
    for(int i = 0; i < length; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    
    int n;
    printf("Enter the number of elements you want in your array:");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The Unsorted array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    selection_sort(arr,n);

    return 0;
}