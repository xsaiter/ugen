/*
 * ugolki engine
 */

#include <stdio.h>
#include <stdlib.h>

// black
#define B 1

// white
#define W 2

// out
#define X 3

// size
#define N 8

// extended size 
#define E 10

// extended square
#define ES (E*E)

// start position
int start_pos[ES] ={
    X, X, X, X, X, X, X, X, X, X,
    X, B, B, X, X, X, X, X, X, X,
    X, B, B, X, X, X, X, X, X, X,
    X, X, X, X, X, X, X, X, X, X,
    X, X, X, X, X, X, X, X, X, X,
    X, X, X, X, X, X, X, X, X, X,
    X, X, X, X, X, X, X, X, X, X,
    X, X, X, X, X, X, X, W, W, X,
    X, X, X, X, X, X, X, W, W, X,
    X, X, X, X, X, X, X, X, X, X
};

int main(int argc, char** argv)
{
    return (EXIT_SUCCESS);
}

