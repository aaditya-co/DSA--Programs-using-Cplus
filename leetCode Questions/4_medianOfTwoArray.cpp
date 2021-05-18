#include <bits/stdc++.h>
using namespace std;



int main(){
    int nums1[] = {1,2};
    int nums2[] = {3,4};
    
    int a= sizeof(nums1)/sizeof(int);
    int b= sizeof(nums2)/sizeof(int);

    int M[a+b];
    merge(nums1 , (nums1 + a),nums2, (nums2+b),M);

    int  low = 0;
    int  high = (a+b);

    if(high % 2 == 0){
        int  mid = high/2;

        int median = (M[mid] +M[mid -1]); 
        double res =(double) median/2;
        cout<<res;
    }else{
        int mid = high/2;
        int median = M[mid];
        cout<<median;
    }
  

 
    
    
    
        
    

}