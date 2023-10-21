section .data
    hello db "Hello, Holberton", 0xa, 0  ; The string to be printed with a newline character

section .text
    global main

    extern printf

main:
    push rbp
    mov rdi, hello  ; Pass the address of the string to printf
    call printf

    ; Exit the program
    mov rax, 60      ; syscall number for exit (60)
    xor rdi, rdi     ; status = 0
    syscall

    pop rbp
    ret

