#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

// int argc : 정보 갯수
// char* argv[] : 실행경로
int main(int argc, char* argv[]) {

    int c;  // getchar()할 변수.
    FILE* fp;
    FILE* fp2;

    if (argc == 1) {
        while ((c = getc(stdin)) != EOF)          // getc(stdin)
            putc(c, stdout);
    }
    else if (argc == 2) {
        fp = fopen(argv[1], "r");                  // 화일 오픈
        while ((c = (getc(fp))) != EOF)                                  // 입력
            putc(c, stdout);
    }
    else if (argc == 3) {
        if (!strcmp(argv[1], "@")) {
            fp = fopen(argv[2], "w");
            while ((c = getc(stdin)) != EOF)
                putc(c, fp);
        }
        else {
            fp = fopen(argv[1], "r");                  //입력
            fp2 = fopen(argv[2], "w");
            while ((c = getc(fp)) != EOF)
                putc(c, fp2);
        }
    }
    fclose(fp);
    fclose(fp2);

    return 0;
}