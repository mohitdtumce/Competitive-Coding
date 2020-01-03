#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int g; 
    scanf("%d",&g);
    for(int a0 = 0; a0 < g; a0++){
        int n; 
        int m; 
        int x; 
        scanf("%d %d %d",&n,&m,&x);
        int *a = malloc(sizeof(int) * n);
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        int *b = malloc(sizeof(int) * m);
        for(int b_i = 0; b_i < m; b_i++){
           scanf("%d",&b[b_i]);
        }
        // your code goes here
    }
    return 0;
}
