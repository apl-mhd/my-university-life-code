org 100h


.stack 100h
.DATA
W dw 1,2,3,4,5,6,7,8  

.CODE 
                  
                  
                
    mov cx,8
    mov dx,0 
    mov si,0 
   
    copy_:    
    push W[SI]
    add si,2  
    LOOP copy_
  
  mov ax,0
  mov cx,8
  mov si,0
   
  reverse:
  pop W[si]
  add si,2 
  Loop reverse 
  
 
      mov si,0
      mov cx,8
      mov dx, 0   
    
   
   CALCULATION_:
      sub cx,1
    cmp cx, 4 
    jge SUM 
    
    jmp dead
    hlt
   
   
    ;JE MULTI_ 
    ;MULTI_:  
    ;LOOP CALCULATION_ 
    
    
      
    SUM: 
    add dx, w[si]
    add si,2 
    jmp CALCULATION_
    hlt
         
    dead:
    
    add ax, w[si]
    add si,2
    
    
    
    cmp cx,0
    jz e
    jmp CALCULATION_
    
    e: