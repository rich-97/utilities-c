# Utilitys

Simple utilitys for programing in c.

A simple example:

```c
#include "utilitys-c/util.h"

int main () {
  char str[] = "";

  // Is the string empty ?
  if (STR_EMPTY(str)) {
    puts("Yes.");
  }

  // print array of integers
  int arr[] = {22, 6, 28, -99};
  print_arr_int(arr, sizeof(arr)); // [22, 6, 28, -99]

  // find the max value
  printf("%d", max_int(arr, sizeof(arr))); // 28

  // find the min value
  printf("%d", min_int(arr, sizeof(arr))); // -99

  return false;
}
```
