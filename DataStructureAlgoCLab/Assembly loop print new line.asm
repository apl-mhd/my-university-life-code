mov bh,0


init:
cmp bh,10
jl lop

hlt
lop:
add bh,1 





mov ah,2    ;digit print
mov dl,bh

add dl, 30h

int 21h


mov ah,2

mov dl, 0AH
int 21h


mov ah,2

mov dl, 0DH
int 21h

 

jmp init