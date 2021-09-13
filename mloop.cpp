#include "sudoku.h"
#include "mloop.h"
#include "rngnumb.h"

void mloopr() {
    int loopm;
    int insudo;
    rngnumgen();
    for(loopm = 1; loopm < 10; loopm++){
        cout << rngnum[loopm] << " ";
    }
    cout << endl;
    for(insudo = 1; insudo < 10; insudo++){
        sudoki[1][insudo] = rngnum[insudo];
    }
    sudokuprint();
    return;
}

//TODO loop for rngnum prints out the last num because of task repeating 10 times but in the end only giving the last num.
//TODO fix it by using one loop as it's better and it will print and output the data that you want and not only the one num.

//THE FUCKING LOOPS DON'T WORK IN PARALLEL MODE. FUCK ME AAAAAAAAAAAAAAAAAAAAAAAAAAAA