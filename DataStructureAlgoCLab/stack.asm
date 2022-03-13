.STACK 100h
.CODE
mov ah,1
mov cx,0
int 21h

loop1:
    cmp al,0dh   ; comparing with "enter"
    je loop2
    push ax
    int 21h
    inc cx
    jmp loop1
    
loop2:
    mov ah,2
    mov dl,0dh
    int 21h
    mov dl,0ah
    int 21h
    
    top:
    pop dx
    int 21h
    
    loop top