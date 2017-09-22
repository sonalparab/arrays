#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand( time(NULL) );
  int i;

  //first array
  int arr[10];
  for(i = 0; i < 9; i++){
    arr[i] = rand();
  }
  arr[9] = 0;

  //print arr
  printf("The original array:\n");
  for(i = 0; i < 10; i++){
    printf("arr[%d]: %d\n",i,arr[i]);
  }

  //second array
  int arr2[10];
  for(i = 0; i < 10; i++){
    *(arr2 + i) = *(arr + 9 - i);
  }

  //print arr2
  printf("The second array:\n");
  for(i = 0; i < 10; i++){
    printf("arr2[%d]: %d\n",i,arr2[i]);
  }

}
