#include <stdio.h>

#define DIMENSION 8

typedef char bmatrix[DIMENSION];

typedef struct {
    bmatrix size[DIMENSION];
    int win;
    int b_castle_rights;
    int w_castle_rights;
    
} board;