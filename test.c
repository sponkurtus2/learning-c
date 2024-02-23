#include <stdio.h>

int main() {
  int age = 19; // Size 2 or 4 bytes
  float pi = 3.1416; // 4 bytes
  double doubleNum = 19.99999; // 8 bytes
  char myLetter = 'c'; // 1 byte
  char myName[] = "Carlitos";
  const int oneHour = 1;
  //string name = "Carlos";
  printf("age: %d, age size in memory: %lu \n", age, sizeof(age));
  printf("Pi: %f, pi size in memory: %lu \n", pi, sizeof(pi));
  printf("doubleNum: %lf, doubleNum size in memory: %lu \n", doubleNum, sizeof(doubleNum));
  printf("A letter: %c, a letter size in memory: %lu \n", myLetter, sizeof(myLetter));
  printf("My name: %s, my name's size in memory: %lu \n", myName, sizeof(myName));
  printf("My name is %s and im %d years old\n", myName, age);

  // Calculate the area of a rectangle
  int lenght = 5, width = 5, areaRectangle = lenght * width;
  printf("\nLenght  = %d \n", lenght);
  printf(" ----------------\n");
  printf("︱              ︱\n");
  printf("︱              ︱\n");
  printf("︱              ︱  Width = %d \n", width);
  printf("︱              ︱\n");
  printf("︱              ︱\n");
  printf(" ----------------\n");
  printf("Total area: %d \n", areaRectangle);

  return 0;
}
