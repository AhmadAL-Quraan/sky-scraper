#include "rush01.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    write(1, "Error\n", 6);
    return (1);
  }
  int arr[size][size] = {{0}}; // init them with zeros

  // Handle if the  string is not valid and put it in the arr;
  int saveArr[16];
  int cnt = 0;
  while (cnt != 16) {
    if (argv[1][cnt] >= 48 && argv[1][cnt] <= 57) {
      saveArr[cnt] = argv[1][cnt] - '0';
    } else {
      write(1, "Not valid Input\n", 16);
      return 1;
    }
    cnt += 1;
  }
  // Check if nothing will work
  if (solvePuzzle(arr, saveArr, 0, 0) == 0) {
    printPuzzle(arr);
  } else {
    write(1, "No valid solution found\n", 24);
    return 1;
  }
}
