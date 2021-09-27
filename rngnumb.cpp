#include "rngnumb.h"
#include "sudoku.h"
#include "mloop.h"
#include "numcheck.h"

void rngnumgen(){
    srand(time(0));
//    rngnum = (rand() % 10) + 1;
    int i;
    for(i = 0; i < 80; i++) {
        rngnum[i] = (rand() % 9);
    }
}