// #include <stdio.h>

// void display(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
// }

// int insert(int arr[], int size, int capacity, int index, int element)
// {
//   if (size >= capacity)
//   {
//     return -1;
//   }
//   for (int i = size - 1; i >= index; i--)
//   {
//     arr[i + 1] = arr[i];
//   }
//   arr[index] = element;
//   return 1;
// }

// int main()
// {
//   int arr[50] = {2, 4, 6, 8, 10};
//   int size = 5, element = 12, index = 4;
//   display(arr, size);
//   insert(arr, size, 100, index, element);
//   size += 1;
//   display(arr, size);
//   return 0;
// }
























#include<stdio.h>

int display(int arr[],int n){
  for(int i=0;i<n;i++){
     printf("%d ", arr[i]);
    }
    printf("\n");
}


int insert(int arr[],int size,int index,int element,int capacity){
  if(size > capacity){
    return -1;
  }
  for(int i=size -1;i>=index;i--){
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
  return 1;
}

int main(){
  int arr[15] = {23,45,67,23,24};
  int element=12,index=2,size=5;
  display(arr,size);
  insert(arr,size,index,element,15);
  size += 1;
  display(arr,size);


}




















