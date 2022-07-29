title onechar.asm despliega un caracter
.model small
.stack 100H
.code
	main proc 
	mov dl, 44H
	mov ah, 2
	int 21h
	mov ah, 4ch
	int 21h
	main endp
	end