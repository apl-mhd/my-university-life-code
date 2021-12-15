3(3cx + 2(bx-3ax))

MOV AX, 5
MOV BX,7
MOV CX,4

MOV DX,CX

ADD CX, CX
ADD CX, DX

MOV DX, AX
ADD AX, AX
ADD AX, DX

SUB BX, AX
ADD BX, BX

ADD CX, BX
MOV DX, CX
ADD CX, CX
ADD CX, DX

MOV AX, CX

MOV CX, 0         

         
  cmp AX,CX
  
      MOV DX, -1
     HLT 
      MOV DX, 1

MOV AX, 5
MOV BX,7
MOV CX,4

JMP lable1
 
label0:
CMP BX, CX

mov bx, cx
    hlt
    mov bx, cx

hlt


label3:
CMP CX, BX
   mov  bx, cx
    hlt
    mov bx, cx

hlt
 
 
 
 
 
lable1:
 cmp Bx,Ax
 ja label0 
 
   hlt 
   
   ja label3