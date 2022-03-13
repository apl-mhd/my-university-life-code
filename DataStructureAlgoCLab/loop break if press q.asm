mov bh, 'a'



input:
cmp bh,'q'      ;infinity loop condition
JNE cont
hlt


cont:  
mov ah, 1    ; charcter input
int 21h


mov bh, al


mov ah,2        ; display charcter
mov dl, al
int 21h

mov ah, 2
mov dl, 0AH
int 21h      ;display new line


mov ah,2
mov dl, 0DH
int 21h

 
jmp input ; bakc to input