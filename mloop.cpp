#include "sudoku.h"
#include "mloop.h"
#include "rngnumb.h"
#include "numcheck.h"

void mloopr() {
    rngnumgen();
    numfill();
    print_num();

    //TODO Trying to find a better way to print out a numbers in range of 9
    //TODO And making it to separate to don't look so messy

    //numcheck();
    sudokuprint();
    return;
    }

//TODO add checking function and start working on inputs
//TODO Inputs can be simple as 'cin >> (x & y)' 'cin >> (1-9)'