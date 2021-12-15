mov bx,0


init:
cmp bx,5
jl lop

hlt
lop:
add bx,1

jmp init