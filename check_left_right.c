int left(int arr[4][4], int row, int *save_arr) {
  int move_on_col;
  int max_number;
  int cnt_view;

  move_on_col = 0;
  max_number = 0;
  cnt_view = 0;
  while (move_on_col != 4) {
    if (arr[row][move_on_col] > max_number) {
      max_number = arr[row][move_on_col];
      cnt_view += 1;
    }
    move_on_col += 1;
  }
  if (cnt_view != save_arr[row + 8])
    return (0);
  return (1);
}

int right(int arr[4][4], int row, int *save_arr) {
  int move_on_col;
  int max_number;
  int cnt_view;

  move_on_col = 3;
  max_number = 0;
  cnt_view = 0;
  while (move_on_col != -1) {
    if (arr[row][move_on_col] > max_number) {
      max_number = arr[row][move_on_col];
      cnt_view += 1;
    }
    move_on_col -= 1;
  }
  if (cnt_view != save_arr[row + 12])
    return (0);
  return (1);
}

int check_left_right(int arr[4][4], int row, int *save_arr) {
  if (left(arr, row, save_arr) && right(arr, row, save_arr)) {
    return (1);
  }
  return (0);
}
