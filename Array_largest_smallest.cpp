#include<iostream>
using namespace std;

int main(){
    int arr[9]= {12,14,17,43,66,32,78,43,56};

    int largest = INT8_MIN;
    int smallest = INT8_MAX;

    for(int i=0;i<9;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout<<"Largest : "<<largest<<endl;
    cout<<"Smallest : "<<smallest<<endl;



} 
   
    
    