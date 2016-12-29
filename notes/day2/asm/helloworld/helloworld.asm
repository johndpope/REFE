global _start

section .text
_start:
    ; print routine
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, message
    mov edx, mlen
    int 0x80   

    ; exit routine
    mov eax, 0x1
    mov ebx, 0x0
    int 0x80

section .data
    message: db "Hello, world!", 0x0a, 0x00
    mlen: equ $-message
