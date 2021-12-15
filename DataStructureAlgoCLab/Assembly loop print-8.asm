mov bh,0


init:
cmp bh,10
jl lop

hlt
lop:
add bh,1 

mov ah,2

mov dl,bh

add dl, 30h

int 21h 

jmp init