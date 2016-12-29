#include <stdio.h>
#include <string.h>
#define BUF_LEN 125

char hash(char* s) {
    char c = '\0';

    for (int i=0; i<(int)strlen(s); i++)
        c = c ^ s[i];

    return c;
}

int main() {
    /* This prints 0x20 */
    // char* key = "xor_hashing_is_dangerous";
    // char k = hash(key);
    // printf("0x%x\n", k);


    char guess[BUF_LEN];
    printf("Password: ");
    scanf("%120s", guess);

    char g = hash(guess);

    if (g == 0x20)
        printf("Correct!\n");
    else
        printf("Try again.\n");

    return 0;
}
