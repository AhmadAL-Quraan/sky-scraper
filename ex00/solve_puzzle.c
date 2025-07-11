#include "rush01.h"

/*
 * first thing is duplication
 * second thing is check if rules are valid
 * back track if the solution is not valid;
 */
void check(int *next_row, int *next_col, int *col, int *row) {
  if (*col == 3) {
    *next_row = *row + 1;
    *next_col = 0;
  } else {
    *next_row = *row;
    *next_col = *col + 1;
  }
}

int solve_puzzle(int arr[4][4], int *save_arr, int row, int col) {
  int next_row;
  int next_col;
  int cnt;

  check(&next_row, &next_col, &col, &row);
  if (row == 4) {
    return (1);
  }
  cnt = 1;
  while (cnt != 5) {
    arr[row][col] = cnt;
    if (no_duplication(arr, row, col)) {
      if (valid_rules(arr, save_arr, row, col)) {
        if (solve_puzzle(arr, save_arr, next_row, next_col))
          return (1);
      }
    }
    arr[row][col] = 0;
    cnt += 1;
  }
  return (0);
}
