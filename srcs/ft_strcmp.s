section .text
	global _ft_strcmp

_ft_strcmp:
	push rbp
	mov rbp, rsp
	xor rcx, rcx

.loop:
	mov r10b, [rdi + rcx]
	mov r11b, [rsi + rcx]
	cmp r10b, r11b
	jne .done
	cmp r10b, 0
	je .done
	inc rcx
	jmp .loop

.done:
	sub r10b, r11b
	movsx rax, r10b
	mov rsp, rbp
	pop rbp
	ret