#ifndef RUSH01_H
#define RUSH01_H

#include <stdlib.h>
#include <unistd.h>

#define size 4

void printPuzzle(int arr[size][size]);
int solvePuzzle(int arr[size][size], int *saveArr, int row, int col);
int no_duplication(int arr[size][size], int *saveArr, int row, int col);
int validRules(int arr[size][size], int *saveArr, int row, int col);
#endif // !
