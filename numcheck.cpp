#include "numcheck.h"
#include "rngnumb.h"
#include "mloop.h"
#include "sudoku.h"

int numeqe[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void numcheck(){
    for(int i = 0; i < 9; i++){
        for(laso = 0; laso < 9; laso++)
        if(sudoki[1][i]  == numeqe[laso]) {
            cout << "SMOOKE YOU!" << endl;
            break;
        }
    }
    /* printf("%d ", laso);
    cout << endl;
    for(int a = 0; a < 9; a++)
    printf("%d ", numeqe[a]);
    cout << endl; */
}