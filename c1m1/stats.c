/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Jacob Christensen
 * @date July 5, 2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  printf("Sorted Array: \n");
  sort_array(test, SIZE);
  print_array(test, SIZE);                              
  print_statistics(test, SIZE);                              
}

/* Add other Implementation File Code Here */
int print_statistics(unsigned char *arr, unsigned int length) {
  printf("Array Statistics: \n");
  printf("\tMedian:\t %d\n",find_median(arr, length));
  printf("\tMean:\t %d\n",find_mean(arr, length));
  printf("\tMaximum: %d\n",find_maximum(arr, length));
  printf("\tMinimum: %d\n",find_minimum(arr, length));
  return(0);
}

int print_array(unsigned char *arr, unsigned int length) {
  for(int i=0;i<length;i++) {
    printf("%d : %d\n", i, arr[i]);
  }
  return(0);
}

int find_median(unsigned char *arr, unsigned int length) {
  sort_array(arr, length);
  return(arr[length/2]);
}

int find_mean(unsigned char *arr, unsigned int length) {
  int sum = 0;
  for(int i=0;i<length;i++) {
    sum += arr[i];
  }
  return(sum/length);
}

int find_maximum(unsigned char *arr, unsigned int length) {
  int max = arr[0];
  for(int i=1;i<length;i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return(max);
}

int find_minimum(unsigned char *arr, unsigned int length) {
  int min = arr[0];
  for(int i=1;i<length;i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }
  return(min);
}

int sort_array(unsigned char *arr, unsigned int length) {
  char chr;
  for(int i=0;i<length;i++) {
    for(int j=i+1;j<length;j++){
      if(arr[i] < arr[j]) {
        chr =  arr[i];
        arr[i] = arr[j];
        arr[j] = chr;    
      }
    }
  }
  return(0);
}
