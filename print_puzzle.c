#include "rush01.h"

void print_puzzle(int arr[4][4]) {
  int row;
  int col;
  char conv;

  row = 0;
  col = 0;
  while (row != 4) {
    while (col != 4) {
      conv = arr[row][col] + '0';
      write(1, &conv, 1);
      write(1, " ", 1);
      col += 1;
    }
    write(1, "\n", 1);
    row += 1;
    col = 0;
  }
}
