
mov ah,1
mov al, 1

mov bl, 1  

mov ch, 0

fib:

cmp bl, 3
  JE  end_
  
 add  ch, al
 
 add ch, ah
 
 mov al,ah
 mov ah,ch 
 
add bl,1
 
 jmp fib
  
    



end_: