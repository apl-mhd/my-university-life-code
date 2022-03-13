.code
 
main proc
   
     mov ax, 1991d;
 
     
        call leap
     
     
     ret
     main endp
     
 
leap proc
   
       push ax
       
     mov bx, 400d
     
     div bx;
     
     pop ax
     cmp dx, 0d
     
     jz yleap  
     jmp div4
               
               
   
     
     yleap
     mov ah,2
     mov dl, '1'
     int 21h
     
     
      hlt
     
     
     
      div4:
       push ax
       
       mov bx,4d
       div bx
       
       pop ax
       cmp dx,0d
       jz div100
       jmp dead
       
        div100:
        push ax
       
        mov bx, 100d
        div bx
        pop ax
        cmp dx, 0d
        jnz yleap
        jmp dead
        hlt
       
       
        dead:
        mov ah,2
     mov dl, '0'
     int 21h
       
       
     
    ret
   
    leap endp  
   
binary proc
   
   mov dx, 10d;
   ret
   binary endp