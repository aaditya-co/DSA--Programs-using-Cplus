#include <iostream>

using namespace std;

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
    
}
void selectionSort(int *arr, int n){
    cout<<"Selection sort running..."<<endl;
    int minIndex,temp;
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j] < arr[minIndex]){
                minIndex= j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int size;
    cout<<"Enter Size of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elemnts of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    };

    display(arr,size);
    selectionSort(arr,size);
    display(arr,size);
}