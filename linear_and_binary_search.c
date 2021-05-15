#include<stdio.h>

int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            printf("Element %d found at index %d by linear Search\n",element,i);
        }
    }
}

int BinarySearch(int arr[],int size,int element){
    int low ,high,mid;
    low= 0;
    high=size-1;
    while(low <= high){
        mid= (high + low)/2;

        if(arr[mid] == element){
         return mid;
        }
        if(arr[mid] > element){
            high = mid -1;
        }else{
            low=mid +1;
        }

    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[10]= {12,23,53,544,633,767};
    int size= sizeof(arr)/sizeof(int);
    int element=12;
    linearSearch(arr,size,element);

    int SearchIndex= BinarySearch(arr,size,element);
    printf("Element %d found at index %d by Binary search", element,SearchIndex);
    return 0;
}
