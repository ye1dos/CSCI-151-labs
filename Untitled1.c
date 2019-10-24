#include <stdio.h>
void func(int r, int c, int vals[r][]) {

    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            vals[i][j] = vals[i][j] + i + j;
        }
    }
}

int main () {
    int arr[2][2] = {{11, 22}, {33, 44}};
    func(2, 2, arr);     
    printf("%i %i %i %i", arr[0][0], arr[0][1], arr[1][0], arr[1][1]);     

    return 0;
}

