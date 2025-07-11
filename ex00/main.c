#include "rush01.h"

/*
   init the arrays since we can't using = {0}
*/
void init(int arr[4][4], int *save_arr) {
  int i;
  int j;

  i = 0;
  j = 0;
  while (i != 4) {
    while (j != 4) {
      arr[i][j] = 0;
      j += 1;
    }
    i += 1;
    j = 0;
  }
  i = 0;
  while (i != 16) {
    save_arr[i] = 0;
    i += 1;
  }
}

int main(int argc, char **argv) {
  int save_arr[16];
  int cnt;
  int arr[4][4];

  init(arr, save_arr);
  if (argc != 2) {
    write(1, "Error\n", 6);
    return (1);
  }
  cnt = -1;
  while (++cnt != 16) {
    if (argv[1][cnt * 2] >= 49 && argv[1][cnt * 2] <= 52)
      save_arr[cnt] = argv[1][cnt * 2] - '0';
    else {
      write(1, "Error\n", 6);
      return (1);
    }
  }
  if (solve_puzzle(arr, save_arr, 0, 0))
    print_puzzle(arr);
  else
    write(1, "Error\n", 6);
}
