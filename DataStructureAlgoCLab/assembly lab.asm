input: 
mov ah,1 
int 21h
mov bh,al       ; input q


cmp bh,'q'
 JE quit
cmp bh, 'Q' 
  JE quit 

jmp inputChar
  
         


inputChar:


cmp bh,'a'
JNGE printstar

cmp bh,'z'
JNLE printstar
jmp inputkq

jmp  printstar:
jmp input   ; back to star if not A-Z
         
         

quit:
hlt

 inputkq:
mov ah,1 
int 21h
mov bh,al  

cmp bh,'k'
JNGE inputkq
                      ;k-z
cmp bh,'z'
JNLE inputkq
jmp chekcvo

jmp input



chekcvo:
mov ah,1 
int 21h
mov bh,al 
  
cmp bh,'o'
jE printv


cmp bh,'u'
jE printv

  jmp inputkq




 
 printv:
  mov ah,2        ; print vowel
mov dl, bh
int 21h 
jmp inputkq
 




printstar: 

 
mov cx,8
mov ah, 2
mov dl, '*'   ;display eight                  
tp:
int 21h
loop tp
 




mov ah, 2
mov dl, 0AH
int 21h      ;display new line


mov ah,2
mov dl, 0DH
int 21h
jmp input