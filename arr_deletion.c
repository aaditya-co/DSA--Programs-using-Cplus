#include <stdio.h>

void display(int arr[], int n)
{
  for (int i = 0; i <= n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void deletion(int arr[], int indexd, int size)
{
  for (int i = indexd; i <= size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  printf("\n");
}

int main()
{
  int arr[25] = {12,23,45,65};
  int size = 4, indexd = 3;

  display(arr, size);
  deletion(arr, indexd, size);
  size -= 1;
  display(arr, size);

}
