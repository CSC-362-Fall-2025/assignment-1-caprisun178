#include <stdio.h>

int main(int argc, char* argv[]){
  int array[4];
  for(int i=0; i <4; i++){
    printf("Enter an integer value: ");
    scanf("%d", &array[i]);
  }

  printf("Current array: \n");
  for(int i=0; i <4; i++){
    printf("array[%d] = %d\n", i, array[i]);
  }

  int reverseArray[4];
  int j =0;
  for(int i=3; i >=0; i--){
    reverseArray[j] = array[i];
    j++;
  }

 printf("Reverse array: \n");
  for(int i=0; i <4; i++){
    printf("reverseArray[%d] = %d\n", i, reverseArray[i]);
  }

  return 0;
}
