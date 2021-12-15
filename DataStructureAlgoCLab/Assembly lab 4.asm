mov AX, 7FFEH

TEST AX, 01
 
 JZ even
 MOV BX,0
 Hlt
 EVEN:
 MOV BX,1
 
  mov AH,1
INT 21H
*************************************

ADD AL,1

MOV AH,2

MOV DL, AL
INT 21H


*****************************************
mov AH,1
INT 21H
ADD AL,1 ;input
MOV BL, AL 


MOV AH,2     ;mode setup

MOV DL, ' '
INT 21H 
 
 
 mov ah,2      
       
MOV DL, Bl

INT 21H

*********************************

MOV AL, 66H
MOV BL, 62H


cmp AL,BL
  
JLE  small

mov ah,2
mov dl, bl
int 21h
hlt




 small:

 mov ah, 2 
 
 mov dl,al
 int 21H
 
 
******************

MOV AL, 66H
MOV BL, 62H


cmp AL,BL

JLE  small

mov ah,2
mov dl, bl
int 21h
hlt

small:

mov ah, 2

mov dl,al
int 21H

MOV AH, 1
INT  21H


CMP AL, 'A'
JGE inside_if

cmp AL, 'Z'
JLE inside_if
hlt

inside_f:

dispdd

end_if