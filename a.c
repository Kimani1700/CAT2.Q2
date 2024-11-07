#include <stdio.h>

int main() {

    int scores[4][2] = {
        {65, 92},
        {35, 70},
        {84, 72},
        {59, 67}
    };


    printf("Elements of the 2D array 'scores':\n");

    
    for (int i = 0; i < 4; i++) { 
    
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
               }
               
        printf("\n");
    }

    return 0;
}