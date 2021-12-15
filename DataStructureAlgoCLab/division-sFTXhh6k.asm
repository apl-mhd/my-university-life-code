;mov ax, 6F00h
;mov bx, 1200h
;mul bx ;dx:ax = ax*ax    

;divided FF651h by 231Ah
;.....................
;mov ax, 651Ah
;mov dx, 0FFh
;cwd
;mov ax,1200h
;mov bx, 231Ah
;idiv bx; 

;-------------------