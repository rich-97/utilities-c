# Utilities

Simple utilities for programing in c.

A simple example:

```c
#include <stdio.h>
#include <stdlib.h>
#include "utilities-c/util.h"

int main (void) {
  char str[] = "";

  // Is the string empty.
  if (STR_EMPTY(str)) {
    puts("Yes.");
  }

  // Print array of integers.
  int arr[] = {22, 6, 28, -99};
  print_arr_int(arr, sizeof(arr)); // [22, 6, 28, -99]

  // Find the max value.
  printf("%d", max_int(arr, sizeof(arr))); // 28

  // Find the min value.
  printf("%d", min_int(arr, sizeof(arr))); // -99

  return EXIT_SUCCESS;
}
```

Compile and execute:
```shell
gcc main.c utilitys-c/util.c -o main; ./main
```
