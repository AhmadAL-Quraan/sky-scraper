#include "rush01.h"
int check_filled_row(int arr[4][4], int row) {
  int col = 0;
  while (col != 4) {
    if (arr[row][col] == 0) {
      return 0;
    }
    col += 1;
  }
  return 1;
}
int check_filled_col(int arr[4][4], int col) {
  int row = 0;
  while (row != 4) {
    if (arr[row][col] == 0) {
      return 0;
    }
    row += 1;
  }
  return 1;
}

int valid_rules(int arr[4][4], int *save_arr, int row, int col) {
  int row_filled = check_filled_row(arr, row);
  int col_filled = check_filled_col(arr, col);
  // up down
  if (col_filled && !check_up_down(arr, col, save_arr)) {
    return 0;
  }

  if (row_filled && !check_left_right(arr, row, save_arr)) {
    return 0;
  }
  return 1;
}
