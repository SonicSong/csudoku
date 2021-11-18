#include "sudoku.h"
#include "mloop.h"
#include "numcheck.h"
#include "rngnumb.h"


void sudokuprint() {
    int i, a, c;
    int d[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << " / ";
    for(c = 0; c < 9; c++) {
        printf("_%d_", d[c]);
    }
    cout << endl;
    for(i = 1; i < 10; i++) {
        printf("%d |", i);
        for(a = 1; a < 10; a++)
            printf(" %d ", sudoki[i][a], "\n ");
            cout << endl;
    }

    return;
}

void numfill() {
    //Filling empty spaces in sudoki array
    for (int a = 1; a < 10; a++){
        for (int i = 1; i < 10; i++)
            sudoki[a][i] = rngnum[a][i];
    }
}

void print_num() {
    for (int s = 1; s < 10; s++){
        for (int d = 1; d < 10; d++){
            printf("%d", sudoki[s][d]);
        }
        cout << " | ";
    }
    cout << endl;
}