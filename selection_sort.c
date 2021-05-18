#include<stdio.h>


void display(int *A,int n){
    for(int i=0;i<n;i++){
        printf(" %d",A[i]);
    }
    printf(" \n");
}

void selectionSort(int *A,int n){
    printf("Selection sort Running.............\n");
    int minIndex,temp;
    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for(int j=i+1;j<n;j++){
            if(A[j] < A[minIndex]){
                minIndex = j;
            }
        }
        temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
        
    }
    
    
}

int main(){
    int A[10] = {8,12,46,86,34,23,75,33,67,11};
    int size = sizeof(A)/sizeof(int);
    display(A,size);
    selectionSort(A,size);
    display(A,size);
}