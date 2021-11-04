#include "sudoku.h"
#include "mloop.h"
#include "rngnumb.h"
#include "numcheck.h"

void mloopr() {
    int loopm, insudo;

    rngnumgen();

    //Filling empty spaces in sudoki array
    for(insudo = 1; insudo < 81; insudo++) {
        for (int a = 1; a < 9; a++)
        for (int i = 1; i < 9; i++)
        sudoki[a][i] = rngnum[insudo];
    }
    //TODO Trying to find a better way to print out a numbers in range of 9
    //TODO And making it to separate to don't look so messy

    /*    for(int a = 0; a < 1; a++){
        for(loopm = 0; loopm < 81; loopm++)
        printf("%d ", rngnum[loopm]);
        cout << " | ";

    }*/
    cout << endl;

    //numcheck();
    sudokuprint();
    return;
    }

//TODO loop for rngnum prints out the last num because of task repeating 10 times but in the end only giving the last num.
//TODO fix it by using one loop as it's better and it will print and output the data that you want and not only the one num.
//TODO start working on working algorithm.
