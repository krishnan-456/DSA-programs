#include <stdio.h>

void shellSort(int array[], int n) {

  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[50];
  int size;
  printf("enter the no of element:");
  scanf("%d",&size);
  printf("enter the array elements:");
  for(int i=0;i<size;i++)
  {
      scanf("%d",&data[i]);
  }
  shellSort(data, size);
  printf("Sorted array: \n");
  printArray(data, size);
  }
