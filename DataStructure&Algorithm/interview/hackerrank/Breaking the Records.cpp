#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *score = malloc(sizeof(int) * n);
    for(int score_i = 0; score_i < n; score_i++){
       scanf("%d",&score[score_i]);
    }
    // your code goes here
    return 0;
}
