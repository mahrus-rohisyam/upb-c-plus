#include <stdio.h>

int main() {
  int age = 18;

  // if (age >= 18) {
  //   printf("You are an adult");
  // } else {
  //   printf("You are a child");
  // }
  
  (age >= 10 ? printf("You are an adult %d", age) : printf("You are a child %d", age));
}