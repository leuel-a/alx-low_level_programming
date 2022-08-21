section .data
	msg: db "Hello, Holberton", 0xa
	msg_len equ $-msg

section .text
	global main

main:
	; write Hello, Holberton to screen
	; ssize_t write(int fd, const void *buf, size_t count); -->> synatx for write syscall
	mov eax, 1 		; syscall for write
	mov edi, 1 		; prints to the stdout
	mov rsi, msg		; the argument that will be passed to write syscall
	mov edx, msg_len	; the argument that will be passd to write syscall
	syscall
	mov eax, 60		; syscall for exit
	xor edi, edi
	syscall
