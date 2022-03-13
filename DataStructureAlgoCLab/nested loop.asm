mov bh,0
mov bl,0
mov ch,0


lop: 
mov bl,0 
mov ch,0
cmp bh,10     ;bh<5
JL innerlop
hlt



innerlop:
cmp bl,bh
jl print


add bh,1 
   
mov ah,2
mov dl, 0AH
int 21h
        
        

mov ah,2
mov dl, 0DH
int 21h




jmp lop
hlt


print:
mov ah,2
add ch,30h
mov dl, ch
int 21h
       
       
sub ch,30h
add ch,1       
add bl,1
jmp innerlop