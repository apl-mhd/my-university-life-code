;problem one
mov ax,8
mov bx, 9
mov cx,1
looop:
cmp ax,bx
je gcd
if :

cmp ax,bx
jl else
sub ax,bx
jmp looop
else:
sub bx,ax
jmp looop
gcd:
mov dx, ax



;problem 2
mov ah,1
int 21h
sub al, 48


mov cl ,al
mov ch,al
cwd

mov ax,1
multi:
cmp cl,1

jl movbx
mul cl
dec cl
jmp multi:

movbx:
mov bx,ax
mov al, ch
      cbw


;problem 3

mov bx,1

 add bl,1
lop: 
mov dl,0
cmp bx, 5
JLE pyramid
hlt





pyramid:

mov cx, bx

print:
mov ah,2
 add dl, 1
 ;add dl, 30
 ;mov dl, '1'




int 21h
loop print

mov ah,2
mov dl, 0AH ;print new line
int 21h



mov ah,2
mov dl, 0DH ;print start of new line
int 21h

Add bx,1
mov dl,0
jmp lop