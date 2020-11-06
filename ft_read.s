segment .text
	global _ft_read
    extern ___error

_ft_read:
        mov rax, 0x2000003
        syscall

        jc error_proc
        ret

error_proc:
        mov rdi, rax
        call ___error
        mov [rax], rdi
        mov rax, -1
        ret