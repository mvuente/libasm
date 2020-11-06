segment .text
	global _ft_strcmp

_ft_strcmp:
        xor rax, rax

comparing:
        mov dl, byte [rdi]
        mov cl, byte [rsi]
        cmp dl, cl
        jz moving
        movzx eax, dl
        movzx edx, cl
        sub eax, edx
        ret

moving:
        test dl, dl
        jnz increment
        ret

increment:
        inc rdi
        inc rsi
        jmp short comparing


