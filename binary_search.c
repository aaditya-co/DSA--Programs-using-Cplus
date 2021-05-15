#include<stdio.h>

int binarySearch(int arr[],int size ,int element){
    int low, mid,high;
    low = 0;
    high = size -1;
    while(low <= high){
        mid = (low + high) /2;

        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] > element){
            high= mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {12,45,89,108,111,158,257};
    int size= sizeof(arr)/sizeof(int);
    int element = 89;
    
    int searchIndex = binarySearch(arr,size,element);
    printf("Element %d found at index %d ",element,searchIndex);
    return 0;


}