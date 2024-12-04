section .text
	global ft_strcpy

ft_strcpy:
	test rsi, rsi
	jz error
	push rdi

.loop:
	mov al, [rsi]
	mov [rdi], al
	test al, al
	jz .done
	inc rdi
	inc rsi
	jmp .loop

.done:
	pop rax
	ret

error:
	pop rdi
	xor rax, rax
	ret
