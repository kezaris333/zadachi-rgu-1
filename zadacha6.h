#include <stdio.h>

int main () {
    int result;

    int arr [3] [3] = {
    {2, 1 , 3},
    { -1, 8 , 7},
    { 10, 11 , -2},
    };

    result = (arr [0][0] * arr [1][1] * arr [2][2])  +  (arr [0][1] * arr [1][2] * arr [2][0])
    +  (arr[0][2] * arr [1][0] * arr [2][1]) - (arr [0][2] * arr [1][1] * arr [2][0])
    - (arr [0][1] * arr [1][0] * arr [2][2])  -  (arr [0][0] * arr [1][2] * arr [2][1]);


    printf ("Result opedeliteeeeeel %d", result);

    return 0;
}