section .text
	global ft_strdup

extern ft_strlen
extern malloc
extern ft_strcpy
extern ft_write

ft_strdup:
	mov rdi, rsi
	call ft_strlen
	add rax, 1

	mov rdi, rax
	call malloc
	test rax, rax
	jz malloc_error

	mov rdi, rax
	mov rsi, rsi
	call ft_strcpy
	
malloc_error:
	xor rax, rax
	ret