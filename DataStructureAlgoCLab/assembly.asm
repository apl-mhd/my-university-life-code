;proc

.STACK 100h
.CODE

main proc
    mov ax,5H
    call fact
    
    call prime
    
    ret
    main endp
     
     
    
fact proc
push ax    

MOV BX,AX
sub bx ,1
LOOP1:
    MUL BX    ;AX=AX*BX
    MOV CX,AX 
    DEC BX
    CMP BX,0H
    JE BREAK
    JMP LOOP1
BREAK:
pop ax
MOV BX,CX

    ret
    fact endp
    
 
 
prime proc
    
    mov dx, 2h
    
    div dx 
    
    
    mov ah,4ch
    int 21h
    ret
   proc endp
     
    
   ;factorial
;MOV AH,1
;INT 21H
MOV AX,5H
MOV BX,4H
LOOP1:
    MUL BX    ;AX=AX*BX
    MOV CX,AX 
    DEC BX
    CMP BX,0H
    JE BREAK
    JMP LOOP1
BREAK:
MOV BX,CX   

;triangle number
MOV CL,1;LINE NUMBER
MOV BL,CL
MOV DL,'1'
MOV AH,2
INT 21H
LEVEL1:
        CMP CL,5
        JE BREAK
        INC CL
       JMP LEVEL2
       
       MOV DL,0DH
       INT 21H
       MOV DL,0AH
       INT 21H
       
       JMP LEVEL1
LEVEL2:

 CMP BL,CL
 JG LEVEL1
 ;MOV DL,50
 INT 21H
 INC BL
 INC DL
; MOV DL,BL
 INT 21H
 JMP LEVEL2
 
BREAK:       

;gcd

MOV AX,10D
MOV BX,25D 
MOV CX,1D
LEVEL1:
      CMP AX,BX
      JE EXIT 
      CMP AX,BX
      JG LEVEL2 
      SUB BX,AX 
      JMP LEVEL1
      
          
LEVEL2:
        SUB AX,BX 
        

EXIT:
    MOV CX,AX