#include <iostream>

using namespace std;

int BinarySearch(int a[],int element,int size){
    int high,low,mid;
    low=0;
    high=size-1;

    while(low<=high){
        mid = (high+low)/2;

        if(a[mid]==element){
            cout<<"Element found at index "<<mid;
        }
        if(a[mid] > high){
            high= mid -1;
        }else{
            low = mid +1;
        }
    }
    return -1;
}

int main(){
    int arr[10]={2,4,6,8,10,12,16,18,20,22};
    int element=10;
    BinarySearch(arr,element,10);

}