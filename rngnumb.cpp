#include "rngnumb.h"
#include "sudoku.h"
#include "mloop.h"
#include "numcheck.h"

void rngnumgen(){
    srand(time(0));
//    rngnum = (rand() % 10) + 1;
    int i;
    for(i = 1; i < 81; i++) {
        rngnum[i] = (rand() % 9);
        cout << rngnum[i] << " ";
    }

}