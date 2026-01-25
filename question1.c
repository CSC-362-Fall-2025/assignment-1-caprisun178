#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int n;

  printf("Enter how many elements for the array: ");
  if (scanf("%d", &n) != 1){
    printf("Invalid Input \n");
    return 1;
  }
  else if (n <= 0)
  {
     printf("Value cannot be less than or equal to 0. \n");
    return 1;
  }
  
  int *array = (int *)malloc((size_t)n * sizeof(int));
  
  for(int i=0; i <n; i++){
    printf("Enter an integer value: ");
    if(scanf("%d", &array[i]) != 1){
      printf("Invalid Input");
      free(array);
      return 1;
    }
  }

  printf("Current array: \n");
  for(int i=0; i <4; i++){
    printf("array[%d] = %d\n", i, array[i]);
  }

  printf("Reverse array: \n");
  for(int i=n-1; i >=0; i--){
    printf("%d\n", array[i]);
  }



  return 0;
}
