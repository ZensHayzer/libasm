section .text
	global _ft_read

_ft_read:
	mov rax, 0x2000003
	mov rdi, rdi
	mov rsi, rsi
	mov rdx, rdx
	syscall

	test rax, rax
	js error
	ret

error:

	mov [rax], rax
	mov rax, -1
	ret