#include "rush01.h"

int check_row(int arr[4][4], int row, int col, int *frq) {
  int move_on_rows;
  int num;
  int checkfrq;

  move_on_rows = 0;
  while (move_on_rows != row + 1) {
    num = arr[move_on_rows][col];
    num -= 1;
    frq[num] += 1;
    move_on_rows += 1;
  }
  checkfrq = 0;
  while (checkfrq != 4) {
    if (frq[checkfrq] > 1) {
      return (0);
    }
    frq[checkfrq] = 0;
    checkfrq += 1;
  }
  return (1);
}

int check_col(int arr[4][4], int row, int col, int *frq) {
  int checkfrq;
  int move_on_col;
  int num;

  move_on_col = 0;
  while (move_on_col != col + 1) {
    num = arr[row][move_on_col];
    num -= 1;
    frq[num] += 1;
    move_on_col += 1;
  }
  checkfrq = 0;
  while (checkfrq != 4) {
    if (frq[checkfrq] > 1) {
      return (0);
    }
    checkfrq += 1;
  }
  return (1);
}

int no_duplication(int arr[4][4], int row, int col) {
  int check_dup_row;
  int check_dup_col;
  int frq[4];
  int i;

  i = 0;
  while (i != 4) {
    frq[i] = 0;
    i += 1;
  }
  check_dup_row = check_row(arr, row, col, frq);
  check_dup_col = check_col(arr, row, col, frq);
  return check_dup_col && check_dup_row;
}
