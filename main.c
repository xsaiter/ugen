/*
 * ugolki engine
 */

#include <stdio.h>
#include <stdlib.h>

// empty cell
#define C 0

// white
#define W 1

// black
#define B 2

// out
#define X 3

// size
#define N 8

// extended size 
#define E 10

// extended square
#define ES (E*E)

#define ROW(x) ((x)/E)
#define COL(x) ((x)%E)
#define NUM(i, j) ((i)*E + (j))

// start position
int start_pos[ES] = {
    X, X, X, X, X, X, X, X, X, X,
    X, B, B, C, C, C, C, C, C, X,
    X, B, B, C, C, C, C, C, C, X,
    X, C, C, C, C, C, C, C, C, X,
    X, C, C, C, C, C, C, C, C, X,
    X, C, C, C, C, C, C, C, C, X,
    X, C, C, C, C, C, C, C, C, X,
    X, C, C, C, C, C, C, W, W, X,
    X, C, C, C, C, C, C, W, W, X,
    X, X, X, X, X, X, X, X, X, X
};

static char cell_name(int arg)
{
    if (arg == W) {
        return 'W';
    }
    if (arg == B) {
        return 'B';
    }
    if (arg == X) {
        return 'X';
    }
    if (arg == C) {
        return 'C';
    }
}

void display_pos(int pos[ES])
{
    for (int i = 0; i < E; ++i) {
        printf("\n");
        for (int j = 0; j < E; ++j) {
            printf("%c ", cell_name(pos[NUM(i, j)]));
        }
    }
}

int main(int argc, char** argv)
{    
    display_pos(start_pos);
    return (EXIT_SUCCESS);
}