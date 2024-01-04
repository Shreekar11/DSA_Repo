#include<stdio.h>

void selectionSort(int n, int arr[]){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return;
}

void insertionSort(int n, int arr[]){
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return;
}

int main(){

    int arr[] = {5, 6, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // selectionSort(n, arr);
    insertionSort(n, arr);

    return 0;
}