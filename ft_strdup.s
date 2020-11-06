segment .text
	global _ft_strdup
    extern _malloc
    extern _ft_strlen
    extern _ft_strcpy

_ft_strdup:
        call _ft_strlen
        push rdi
        inc rax
        mov rdi, rax
        call _malloc
        test rax, rax
		jz erro
        pop rsi
		mov rdi, rax
		call _ft_strcpy
        ret
    
    erro:
        mov rax, 0
        pop rsi
        ret

        