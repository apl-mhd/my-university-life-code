  mov ax , 5d     
  mov bx , 7d 
  mov cx , 4d
  
  add dx , ax
  add dx , ax
  add dx , ax
  mov ax , dx   
  
  sub bx , dx
  add bx , bx
  
  mov dx , cx
  add dx ,cx
  add dx ,cx
  mov cx , dx
  
  mov ax , cx 
  add ax , bx
  
  mov dx , ax 
  add dx , ax
  add dx , ax   
  mov ax , dx
  
  mov dx , 1
  
  cmp ax , 0  
 

*********************

  mov ax , 5d     
  mov bx , 7d 
  mov cx , 4d
  
  cmp ax , bx
  jl lable1
  jmp l3
  
  
  
  lable1:
  mov bx , ax
  jmp l3
  
  
  l3:
  cmp cx , bx
  jl l2
  
  
  l2:
  mov bx , cx