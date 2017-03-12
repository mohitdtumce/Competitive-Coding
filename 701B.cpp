#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define REPEAT(token, num) for (token = 0; token < num; token++)

typedef long long dimen;
typedef struct {
    dimen x, y;
} point;
typedef long long num_cells;

dimen size;
num_cells numRowsTaken, numColumnsTaken, numRooks;
bool takenRow[100001], takenColumn[100001];

int main() {
    point curRook;
    scanf("%lli %lli", &size, &numRooks);

    //Input numRooks rook:
    while (numRooks--) {
        //Input the current rook:
        scanf("%lli %lli", &curRook.x, &curRook.y);

        //If the current column has not been attacked yet, mark it as attacked and increment the number of attacked columns:
        if (!takenColumn[curRook.x]) {
            takenColumn[curRook.x] = true;
            numColumnsTaken++;
        }
        //Do the same thing for rows:
        if (!takenRow[curRook.y]) {
            takenRow[curRook.y] = true;
            numRowsTaken++;
        }
        //Print the current number of free spaces left using the formula from the editorial:
        printf("%lli", (size-numRowsTaken)*(size-numColumnsTaken));
        //If this is the last rook, put a newline; otherwise, put a space:
        putchar(numRooks ? ' ' : '\n');
    }
    
    exit(0);
}