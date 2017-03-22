/*
 * (c) Ricardo Moreno <morenoricardo237@gmail.com>
 *
 * For more details about the license of this source code,
 * please view the file LICENSE.
 */

#include <stdio.h>
#include "util.h"

/* Print a array of integers */
void print_arr_int(int arr[], size_t size) {
  int length = GET_LEN_INT(size);
  
  printf("[ ");
  for (int j = 0; j < length; j++) {
    printf("%d", arr[j]);

    if (j == length - 1)
      printf(" ");
    else
      printf(", ");
  }
  printf("]\n");
}

/* Print a array of floats */
void print_arr_float(float arr[], size_t size) {
  int length = GET_LEN_INT(size);
  
  printf("[ ");
  for (int j = 0; j < length; j++) {
    printf("%.4f", arr[j]);

    if (j == length - 1)
      printf(" ");
    else
      printf(", ");
  }
  printf("]\n");
}

/* Find the max value in a array of integers */
int max_int (int arr[], size_t size) {
  int length = GET_LEN_INT(size);
  int max = 0;

  for (int i = 0; i < length; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  return max;
}

/* Find the min value in a array of integers */
int min_int (int arr[], size_t size) {
  int length = GET_LEN_INT(size);
  int min_val = arr[0];

  for (int i = 0; i < length; i++) {
    if (arr[i] < min_val)
      min_val = arr[i];
  }

  return min_val;
}

