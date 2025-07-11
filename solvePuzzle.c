#include "rush01.h"

int solvePuzzle(int arr[size][size], int *saveArr, int row, int col) {
  /*
   * first thing is duplication
   * second thing is check if rules are valid
   * back track if the solution is not valid;
   */
  int next_row;
  int next_col;

  if (col == 3) {
    next_row = row + 1;
  } else {
    next_row = row;
  }
  if (col == 3) {
    next_col = 0;
  } else {
    next_col = col + 1;
  }
  // base case to stop the rec
  if (row == 4) {
    return 1;
  }
  int cnt = 1;
  while (cnt != 5) {
    arr[row][col] = cnt;
    if (no_duplication(arr, saveArr, row, col)) {
      if (validRules(arr, saveArr, row, col)) {
        // Move to the next
        if (solvePuzzle(arr, saveArr, next_row, next_col)) {
          return 1;
        }
      }
    }
    arr[row][col] = 0;
    cnt += 1;
  }
  return 0;
}
