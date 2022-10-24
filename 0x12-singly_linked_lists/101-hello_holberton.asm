	SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

	SECTION .text
	extern main
	global main
main:
	mov esi, msg
	mov edi, msg
	mov eax, 0
	call main

	mov eax, 0
	ret
