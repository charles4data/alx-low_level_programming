; declare the printf function prototype
extern printf

; declare the .data section
section .data
    ; define the message to print
    msg db "Hello, Holberton", 10, 0 ; 10 is the newline character, 0 is the null terminator

; declare the .text section
section .text
    ; define the main function
    global main

main:
    ; save the stack pointer in rbp
    push rbp
    mov rbp, rsp

    ; set the first argument for printf (rcx) to the address of the message
    mov rcx, msg

    ; call the printf function
    call printf

    ; restore the stack pointer from rbp
    mov rsp, rbp
    pop rbp

    ; exit with code 0
    mov eax, 0
    ret
