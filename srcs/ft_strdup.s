section .text
	global ft_strdup

extern malloc
extern ft_strlen
extern ft_strcpy
extern __errno_location

ft_strdup:
	push rdi
	call ft_strlen
	inc rax

	mov rdi, rax
	call malloc
	test rax, rax
	jz malloc_error

	mov rdi, rax
	pop rsi
	call ft_strcpy

	ret

malloc_error:
	pop rsi
	xor rax, rax

	mov rdi, 12
	call __errno_location
	mov rdi, [rax]
	mov dword [rdi], 12
	
	ret
