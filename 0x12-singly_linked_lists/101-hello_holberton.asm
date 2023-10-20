; Define some constants
    SECTION .data
msg:    db "Hello, Holberton", 10, 0 ; The string to print, 10 is newline
len:    equ $-msg                   ; The length of the string
fmt:    db "%s", 0                  ; The format string for printf

; Declare external functions
    extern printf

; Define the code section
    SECTION .text
    global main

main:
; Save the base pointer and stack pointer
    push rbp
    mov rbp, rsp

; Pass the arguments to printf: fmt and msg
    mov rdi, fmt     ; First argument is the format string
    mov rsi, msg     ; Second argument is the message string
    xor rax, rax     ; Clear rax to indicate no floating point arguments
    call printf      ; Call the printf function

; Restore the base pointer and stack pointer
    mov rsp, rbp
    pop rbp

; Return 0 as exit code
    mov rax, 0
    ret

