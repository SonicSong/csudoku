#include "sudoku.h"
#include "mloop.h"
#include "rngnumb.h"
#include "numcheck.h"

void mloopr() {
    int loopm, insudo;

    rngnumgen();


    //Filling empty spaces in sudoki array
    for(insudo = 1; insudo < 80; insudo++){
        for(int i = 1; i < 9; i++)
            sudoki[i][insudo] = rngnum[insudo];

    /*for(loopm = 1; loopm < 9; loopm++){
        printf("%d ", rngnum[loopm]);
    }
    cout << endl;
*/
    //Trying to find a better way to print out a numbers in range of 9
    //And making it to separate to don't look so messy
    for(int a = 1; a < 10; a++){
        //printf("%d ", rngnum[loopm]);
        for(loopm = 0; loopm < 80; loopm++)
        printf("%d ", rngnum[loopm]);
        cout << " | ";
        loopm == 0;

    }
    cout << endl;
/*
    //Filling empty spaces in sudoki array
    for(insudo = 1; insudo < 80; insudo++){
        for(int i = 1; i < 9; i++)
        sudoki[i][insudo] = rngnum[insudo];
    }
*/
    numcheck();
    sudokuprint();
    return;
}

//TODO loop for rngnum prints out the last num because of task repeating 10 times but in the end only giving the last num.
//TODO fix it by using one loop as it's better and it will print and output the data that you want and not only the one num.
//TODO start working on working algorithm