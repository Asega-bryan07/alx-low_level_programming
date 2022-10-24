SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov rdi, msg
	mov rsi, msg
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret
