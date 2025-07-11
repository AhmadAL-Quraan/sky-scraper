int up(int arr[4][4], int col, int *save_arr) {
  int max_number;
  int cnt_view;
  int move_on_row;

  move_on_row = 0;
  max_number = 0;
  cnt_view = 0;
  while (move_on_row != 4) {
    if (arr[move_on_row][col] > max_number) {
      max_number = arr[move_on_row][col];
      cnt_view += 1;
    }
    move_on_row += 1;
  }
  if (cnt_view != save_arr[col])
    return (0);
  return (1);
}

int down(int arr[4][4], int col, int *save_arr) {
  int move_on_row;
  int max_number;
  int cnt_view;

  move_on_row = 3;
  max_number = 0;
  cnt_view = 0;
  while (move_on_row != -1) {
    if (arr[move_on_row][col] > max_number) {
      max_number = arr[move_on_row][col];
      cnt_view += 1;
    }
    move_on_row -= 1;
  }
  if (cnt_view != save_arr[col + 4])
    return (0);
  return (1);
}

int check_up_down(int arr[4][4], int col, int *save_arr) {
  if (up(arr, col, save_arr) && down(arr, col, save_arr)) {
    return (1);
  }
  return (0);
}
