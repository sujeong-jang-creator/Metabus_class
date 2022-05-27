#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

// int argc : ���� ����
// char* argv[] : ������
int main(int argc, char* argv[]) {

    int c;  // getchar()�� ����.
    FILE* fp;
    FILE* fp2;

    if (argc == 1) {
        while ((c = getc(stdin)) != EOF)          // getc(stdin)
            putc(c, stdout);
    }
    else if (argc == 2) {
        fp = fopen(argv[1], "r");                  // ȭ�� ����
        while ((c = (getc(fp))) != EOF)                                  // �Է�
            putc(c, stdout);
    }
    else if (argc == 3) {
        if (!strcmp(argv[1], "@")) {
            fp = fopen(argv[2], "w");
            while ((c = getc(stdin)) != EOF)
                putc(c, fp);
        }
        else {
            fp = fopen(argv[1], "r");                  //�Է�
            fp2 = fopen(argv[2], "w");
            while ((c = getc(fp)) != EOF)
                putc(c, fp2);
        }
    }
    fclose(fp);
    fclose(fp2);

    return 0;
}