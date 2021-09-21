#include "sudoku.h"
#include "mloop.h"
#include "rngnumb.h"
#include "numcheck.h"

void mloopr() {
    int loopm, insudo, qwe;
    int numeq[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //TODO: This is fucked up so rewrite this crap

    rngnumgen();
    for(loopm = 1; loopm < 10; loopm++){
        cout << rngnum[loopm] << " ";
    }
    cout << endl;
    for(insudo = 1; insudo < 10; insudo++){
        sudoki[1][insudo] = rngnum[insudo];
        for(qwe = 0; qwe < 9; qwe++)
        if(sudoki[1][insudo] == numeq[qwe]){
            cout << "CHUJ" << endl;
            numcheck();
        }
    }
    sudokuprint();
    return;
}

//TODO loop for rngnum prints out the last num because of task repeating 10 times but in the end only giving the last num.
//TODO fix it by using one loop as it's better and it will print and output the data that you want and not only the one num.
//TODO start working on creating the working algorithm