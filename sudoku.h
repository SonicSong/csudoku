#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
using namespace std;

//extern int d[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
extern int sudoki[10][10];

/*
 *    1 2 3 4 5 6 7 8 9
 * 1 [][][][][][][][][]
 * 2 [][][][][][][][][]
 * 3 [][][][][][][][][]
 * 4 [][][][][][][][][]
 * 5 [][][][][][][][][]
 * 6 [][][][][][][][][]
 * 7 [][][][][][][][][]
 * 8 [][][][][][][][][]  //TODO that bs is repeating it self in the 8 9 line of y axis
 * 9 [][][][][][][][][]
 */

void sudokuprint();

#endif //CSUDOKU_SUDOKU_H
