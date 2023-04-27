section .data
    message_str db 'Hello, Holberton', 10, 0

section .text
    global main

    extern printf

main:
    ; prepare arguments for printf
    mov rdi, message_str
    xor rax, rax

    ; call printf
    call printf

    ; exit
    mov rax, 60
    xor rdi, rdi
    syscall
