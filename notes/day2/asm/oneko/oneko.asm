global _start

section .text
_start:
    ; execute command
    mov eax, 0xb
    mov ebx, filename
    mov ecx, argv
    mov edx, envp
    int 0x80

    ; exit
    mov eax, 0x1
    mov ebx, 0x0
    int 0x80

section .data
filename: db "/usr/games/oneko", 0x00

arg1: db "/usr/games/oneko", 0x00
arg2: db "-sakura", 0x00
argv: dd arg1, arg2, 0x00000000

env1: db "DISPLAY=:0", 0x00
envp: dd env1, 0x00000000
