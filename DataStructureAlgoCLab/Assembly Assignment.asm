org 100h


.stack 100h
.DATA
W dw 1,2,3,4,5,6,7,8  

.CODE 
                  
                  
                
    mov cx,8
    mov dx,0 
    mov si,0 
   
   push cx
   
    pushstack:    
    push W[SI]
    add si,2  
    LOOP pushstack
  
  mov ax,1
  mov cx,8 
  mov si,0
   
  copy:
  pop W[si]
  add si,2 
  Loop copy 
  
 
      mov si,0
      mov cx,8
      mov bx, 0   
    
   
   lvl:
      sub cx,1
    cmp cx, 4 
    jge sumation 
    
    jmp multiplication
    hlt
   
   
    
    
      
    sumation: 
    add bx, w[si]
    add si,2 
    jmp lvl
    hlt
         
    multiplication:
    
    imul  w[si]
    add si,2
     
    cmp cx,0
    jz estate
    jmp lvl
    
    estate:   
    mov cx, ax 
    mov ax, bx 
    mov bx, cx