#include <iostream>

using namespace std;

int twoSum(int *arr,int t,int n){
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i] + arr[j]==t){
               cout<<"["<<i<<","<<j<<"]";
               
           }
       }
       
   }
   
}

int main(){
int arr[] = {2,7,11,15};
int target = 26;
int size =sizeof(arr)/sizeof(int);
twoSum(arr,target,size);
}