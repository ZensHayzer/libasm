section .text
	global ft_strcpy

ft_strcpy:
	push rbp
	mov rbp, rsp

.loop:
	mov al, [rsi]
	mov [rdi], al
	test al, al
	jz .done
	inc rdi
	inc rsi
	jmp .loop

.done:
	pop rbp
	ret