#include "numcheck.h"
#include "rngnumb.h"
#include "mloop.h"
#include "sudoku.h"

int numeqe[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//TODO: This is fucked up so rewrite this crap

void numcheck(){
    for(int a = 1; a < 10; a++){    //Loop for checking all number in one array and not just single one
        printf("Number %d ", numeqe[a]);
        for(int d = 1; d < 10; d++)
        if(sudoki[1][a] == numeqe[d]){      //To check if number in array is equal to randomly generated number
            cout << "is equal to " << numeqe[d];        //Dev stuff. Later remove that
        }
        cout << endl;
    }

    cout << "--------------------------------------" << endl;

    for(int b = 1; b < 10; b++){
        printf("Number %d ", numeqe[b]);
        for(int c = 1; c < 10; c++)
        if(sudoki[b][1] == numeqe[c]){
            cout << "is equal to " << numeqe[c];
        }
        cout << endl;
    }

   cout << "--------------------------------------" << endl;
}