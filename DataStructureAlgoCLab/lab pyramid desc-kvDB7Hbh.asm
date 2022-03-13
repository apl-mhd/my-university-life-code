
 mov bx, 1 
 mov ah,2

loop1:
    mov cx,bx
    mov dl, 0
    add dl, 30h
    
    loop2:
    
        int 21h
        add dl,1
        
        loop loop2
        
    mov dl, 0Dh
    int 21h
    
    mov dl, 0Ah
    int 21h 
    
    
    add bx,1
    cmp bx,5
    jle loop1