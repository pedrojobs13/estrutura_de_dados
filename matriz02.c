#include <stdio.h>
int main()
{
    int number[2][2];
    number[0][0] = 1;
    number[0][1] = 2;
    number[1][0] = 3;
    number[1][1] = 4;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("numero [%d][%d] vale %d\n", i, j, number[i][j]);
            // eu só saio desse loop depois de terminar ele
            /*
            primeiro loop do j
            number[0][0]
            number[0][1]

            segundo loop jo j
            number[1][0]
            number[1][1]
            */
        }
    }

    return 0;
}