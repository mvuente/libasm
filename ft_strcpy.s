segment .text
	global _ft_strcpy

_ft_strcpy:

        mov rax, rdi
copier:
        mov dl, byte [rsi]
        mov byte [rdi], dl
        test dl, dl
        jnz increment
        ret
        
increment:
        inc rdi
        inc rsi
        jmp short copier