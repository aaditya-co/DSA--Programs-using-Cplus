#include<iostream>
using namespace std;

void linerarSearch(int arr[],int size, int key){
    int i;
    for(i=0;i<size;i++){
        if(arr[i] == key){
            cout<<"Element "<<key<<" Found at index "<<i<<endl;
            break;
        }
    }
    if(i==size){
        cout<<"Key not found"<<endl;
    }
    
    
}

int main(){
    int arr[25];
    int n, key;

    cout<<"Enter Number of Elements : "<<endl;
    cin>>n;
    cout<<"Insert Element in array of size : "<<n<<endl;;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Element Inserted Now Enter Key to find : "<<endl;
    cin>>key;

    linerarSearch(arr,n,key);
    
    
}