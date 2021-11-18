#include "rngnumb.h"
#include "sudoku.h"
#include "mloop.h"
#include "numcheck.h"

void rngnumgen(){
    srand(time(0));
//    rngnum = (rand() % 10) + 1;
    int i;
    int a;
    for(a = 1; a < 10; a++){
        for(i = 1; i < 10; i++)
        rngnum[a][i] = (rand() % 9);
    }

/*
    for(int a = 1; a < 10; i++){
        for(int f = 1; a < 10; f++) {
            rngnum[a][f] = (rand() % 9);
        }
    }
*/
}