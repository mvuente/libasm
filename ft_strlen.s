	segment .text
	global _ft_strlen

_ft_strlen:
		xor	rax, rax

compare:
		cmp		BYTE[rdi + rax], 0x0
		jnz		increment
		ret

increment:
		inc	rax
		jmp	compare
		


    