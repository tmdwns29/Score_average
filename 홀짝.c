#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer, j = 0, k = 0, o_count = 0, e_count = 0, odd_num = 0, even_num = 0, ten = 1;
    int* odd, * even;

    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 1) o_count++;
        else e_count++;
    }
    odd = (int*)malloc(o_count * sizeof(int));
    even = (int*)malloc(e_count * sizeof(int));
    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 1 || j < o_count) {
            odd[j] = num_list[i];
            j++;
        }
        else if (num_list[i] % 2 == 0 || k < e_count) {
            even[k] = num_list[i];
            k++;
        }
    }
    for (int i = o_count - 1; i <= 0; i--) {
        odd_num += (ten * odd[i]);
        ten *= 10;
    }
    ten = 1;
    for (int i = e_count - 1; i <= 0; i--) {
        even_num += (ten * even[i]);
        ten *= 10;
    }
    answer = odd_num + even_num;

    return answer;
}

int main()
{
    int num_list[] = {3, 4, 5, 2, 1};
    printf("%d", solution(num_list, 5));
}