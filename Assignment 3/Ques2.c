#include <stdio.h>

int main() {
    int patterns[5][7] = {
        {0x04, 0x0A, 0x11, 0x11, 0x1F, 0x11, 0x11}, 
        {0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11}, 
        {0x04, 0x0A, 0x11, 0x11, 0x1F, 0x11, 0x11}, 
        {0x0E, 0x11, 0x10, 0x0E, 0x01, 0x11, 0x0E}, 
        {0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11}  
    };

    int row, letter, col;

    for (row = 0; row < 7; row++) {
        for (letter = 0; letter < 5; letter++) {
            for (col = 0; col < 5; col++) {
                if ((patterns[letter][row] >> (4 - col)) & 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}
