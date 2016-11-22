# Utilitys

Simple utilitys for programing in c.

A simple example:

```c
#include "stdio.h"
#include "utilitys-c/util.h"

int main () {
  char str[] = "";

  if (str_empty(str)) {
    puts("Yes.");
  }

  int arr[] = {22, 6, 28, -99};
  print_arr_int(arr, sizeof(arr)); // [22, 6, 28, -99]

  return false;
}
```
