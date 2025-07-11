#ifndef RUSH01_H
#define RUSH01_H

#include <unistd.h>

int check_up_down(int arr[4][4], int col, int *save_arr);
int check_left_right(int arr[4][4], int row, int *save_arr);
void print_puzzle(int arr[4][4]);
int solve_puzzle(int arr[4][4], int *save_arr, int row, int col);
int no_duplication(int arr[4][4], int row, int col);
int valid_rules(int arr[4][4], int *save_arr, int row, int col);
#endif // !
