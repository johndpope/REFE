#include <stdio.h>
#include <unistd.h>

int main(void) {
    char* filename = "/usr/games/oneko";

    char* arg1 = filename;
    char* arg2 = "-sakura";
    char* arg3 = 0x00000000;
    char* argv[] = {arg1, arg2, arg3};

    char* env1 = "DISPLAY=:0";
    char* env2 = 0x00000000;
    char* envp[] = {env1, env2};

    execve(filename, argv, envp);

    return 0;
}
