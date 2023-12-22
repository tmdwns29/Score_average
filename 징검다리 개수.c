#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int stone, max = 0, count = 1;
    int* high;
    high = (int*)malloc(sizeof(int));

    scanf("%d", &stone);
    for (int i = 0; i < stone; i++) { // 1 7 8 2 3 4
        scanf("%d", &high[i]);
        if (i == 0)
            max = high[i];
        else if (max < high[i]) { // 7 8
            max = high[i];
            count++;
        }
        else if (max != high[stone - 1]) {
            count--;
        }
    }
    printf("%d", count);
    return 0;
}