


mov bx,0

lop:

cmp bx,10
jl cont
hlt


cont:
add bx, 1

jmp print
hlt



         
print:         
mov cx,bx
mov ah, 2
mov dl, '*'                     
tp:
int 21h
loop tp

jmp newline


hlt

newline: 

mov ah,2
mov dl, 0AH
int 21h

mov ah,2
mov dl, 0DH
int 21h

jmp lop