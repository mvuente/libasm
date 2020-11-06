segment .text
	global _ft_write
    extern ___error

_ft_write:
        mov rax, 0x2000004
        syscall

        jc error_proc
        ret

error_proc:
        mov rdi, rax
        call ___error
        mov [rax], rdi
        mov rax, -1
        ret

