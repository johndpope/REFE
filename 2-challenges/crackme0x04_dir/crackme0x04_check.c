#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc != 2) return 0;
    char* input = argv[1];

    int sum = 0;
    int idx = 0;
    int n = 0xdeadbeef;

    while (idx < (int)strlen(input)) {
        char c = input[idx];
        char c_str[] = {c, 0};

        sscanf(c_str, "%d", &n);

        sum += n;

        if (sum == 15) {
            printf("Success\n");
            return 0;
        }

        ++idx;
    }

    printf("Failure\n");

    return 0;
}
