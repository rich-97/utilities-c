#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* Utilitys */

// macros
#define str_empty(str) ((str[0]) == '\0')
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

// booleans
#define true 1
#define false 0

// print a array of integers
void print_arr_int(int arr[], size_t size) {

  int length = size / sizeof(int);
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

// print a array of floats
void print_arr_float(float arr[], size_t size) {

  int length = size / sizeof(int);
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

// return the length of an array of integers
int get_len_int (int size) {
  return size / sizeof(int);
}

// find the max value in a arrray of integers
int max_int (int arr[], size_t size) {
  int length = get_len_int(size);
  int max = 0;

  for (int i = 0; i < length; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  return max;
}

// find the min value in a array of integers
int min_int (int arr[], size_t size) {
  int length = get_len_int(size);
  int min_val;
  int max_val = 0;

  for (int i = 0; i < length; i++) {
    if (arr[i] > max_val)
      max_val = arr[i];
  }

  int min_temp = max_val;

  for (int i = 0; i < length; i++) {
    if (!i || i % 2 == 0) {
      if (i == length - 1) {
        min_val = min(min_temp, arr[i]);
      } else {
        min_val = min(arr[i], arr[i + 1]);
      }

      if (min_val < min_temp)
        min_temp = min_val;
    }
  }

  return min_val;
}
