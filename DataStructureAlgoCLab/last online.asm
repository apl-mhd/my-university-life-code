main proc
    mov ax,1990
    call leap_year
    call binary_year    
    ret
main endp


leap_year proc
    push ax
    mov bx,4
    div bx
    cmp dx,0
    je year100
    jmp year400
    
    year100:
        mov bx,100d
        div bx
        cmp dx,0
        je exit_
        jmp print
        hlt
        
    year400:
        mov bx,400
        div bx
        cmp dx,0
        je print
        jmp exit_
        hlt
    
    print:
        mov ah,2
        mov dl,'1'
        int 21h
        hlt    
    
    exit_:
        mov ah,2
        mov dl,'0'
        int 21h
        hlt

    pop ax
    ret
leap_year endp



binary_year proc
    push ax 
    mov bx,2
    mov cx,0
    divide_for_binary:
        div bx
        push dx
        inc cx
        cmp ax,0
        jne divide_for_binary
        jmp printstack
        hlt
        
    printstack:
        mov ah,2
        loop1:
            pop dx
            int 21h
            loop loop1
        hlt
    
    pop ax
    ret
binary_year endp