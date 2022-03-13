
mov bx,0 


lop:
cmp bx, 4
JL printspace  
hlt



printspace:
       
mov cx, 4
sub cx, bx
add cx,1

cmp cx,0
jz hold

mov cx,cx
mov ah,2
mov dl, ' '    ; print space
top1: 
int 21H
loop top1
  
  
  cmp bx,0
  jz addbx
  
  
  add bx,2
  
  
  
  
jmp printstar



printstar:  

 
 mov cx,bx
 mov ah,2
 mov dl, '*'
 top2:
 int 21h
 loop top2  
 
 
 
 

mov ah,2
mov dl, 0AH
int 21h
              ;print newline
mov ah,2
mov dl, 0DH
int 21h


cmp bx,1
JNE subbx



jmp lop

hlt 


hold: 
hlt


addbx:

add bx,1 

jmp printstar 
hlt

subbx:

sub bx,1 
jmp lop