#include <stdio.h>

/*
 *  The below program will ask for a int value and will print an right-angle triangle with asterisks.

    enter n:5

    *
    **
    ***
    ****

*/

int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("*");

        }
        printf("\n");

    }
}