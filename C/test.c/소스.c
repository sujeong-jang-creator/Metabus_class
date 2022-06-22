#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    char num[N];
    int sum = 0;
    scanf("%s", num);
    for (int i = 0; i < N; i++) {
        sum += num[i] - '0';
    }
    printf("%d", sum);

    return 0;
}