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

#define MAX_DEPTH 3

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

#define LOG_ERR(...) fprintf(stderr, __VA_ARGS__)
#define LOG_INFO(...) printf(__VA_ARGS__)

#define DIE(...) LOG_ERR(__VA_ARGS__); exit(EXIT_FAILURE);

#define FOR(i, n) for(int (i) = 0; (i) < (n); ++(i))

static char pos_name(int pos)
{
    if (pos == W) {
        return 'W';
    }
    if (pos == B) {
        return 'B';
    }
    if (pos == X) {
        return 'X';
    }
    if (pos == C) {
        return 'C';
    }

    DIE("unexpected position: %d", pos);
}

void display_pos(int pos[ES])
{

    FOR(i, E)
    {
        printf("\n");

        FOR(j, E)
        {
            printf("%c ", pos_name(pos[NUM(i, j)]));
        }
    }
}

int main(int argc, char** argv)
{
    display_pos(start_pos);
    return (EXIT_SUCCESS);
}