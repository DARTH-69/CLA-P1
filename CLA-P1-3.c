#include <stdio.h>

int main() {
  int values[5];

  printf("Enter your marks: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
     if (values[i]<0){
         printf("Invalid Value\n");
     }else{
         continue;
     }
  }

  printf("Your marks are: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
