mov bx,5


lop: 

cmp bx, 1
JGE pyramid
hlt





pyramid:

mov cx, bx
mov ah,2
mov dl, '*'  ;print star
print:
int 21h
loop print

mov ah,2
mov dl, 0AH ;print space
int 21h



mov ah,2
mov dl, 0DH ;print star
int 21h

sub bx,1

jmp lop


;....................pyramid sir............................

;mov cx,4
;mov ah,2 ; mod set up fo display
;loop1:
   ; mov dl, '*'
   ; mov bx,cx
    ; inner loop
    
   ; mov bx, cx
   ; loop2:
   ; int 21h
   ; dec bx
    ;cmp bx, 0
   ; jg loop2
    ;out from inner loop
    
    ;mov dl, 0Dh
    ;int 21h
   ; mov dl, 0Ah
    ;int 21h
   ; loop  loop1  
   
   
   
   mov cx,1
mov ah,2 ; mod set up fo display
loop1:
    mov dl, '*'
    mov bx,cx
    ; inner loop
    
    mov bx, cx
    loop2:
    int 21h
    dec bx
    cmp bx, 0
    jg loop2
    ;out from inner loop
    
    mov dl, 0Dh
    int 21h
    mov dl, 0Ah
    int 21h
    
    
    loop3: 
    add cx, 1
    
    cmp cx,4
    jle loop1