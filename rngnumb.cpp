#include "rngnumb.h"
#include "sudoku.h"
#include "mloop.h"
#include "numcheck.h"

void rngnumgen(){
    srand(time(0));
//    rngnum = (rand() % 10) + 1;
    int i = 0;
    for(i = 0; i < 10; i++) {
        rngnum[i] = (rand() % 9);
    }
}