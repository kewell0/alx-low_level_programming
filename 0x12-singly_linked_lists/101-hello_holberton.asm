fmt     db "Hello, Holberton",10,0

	section .text
	extern printf
	global main

main:
	mov  edi, fmt
	mov  eax, 0
	call printf
    