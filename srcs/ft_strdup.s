section .text
	global _ft_strdup

extern _ft_strlen
extern malloc
extern _ft_strcpy

_ft_strdup:
	call _ft_strlen
	add rax, 1
	mov rdi, rax
	call malloc

	;test rax, rax
	;js malloc_error

	mov rdi, rax
	mov rsi, rdi
	call _ft_strcpy
