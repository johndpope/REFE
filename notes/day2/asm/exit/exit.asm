global _start
section .text

_start:
    mov eax, 0x1
    mov ebx, 0x5
    int 0x80
