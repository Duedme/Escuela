title cadena.asm despliega nombre 
.model small 
.stack 100h
.data																																																														
 nombre db "laboratorio sistemas digitales", 0AH, 0DH,'$'
 apellidos db "y microprocesadores", '$'
.code 
main proc

mov ax, @data 
mov ds, ax
mov dx, offset nombre
mov ah,9
int 21h
mov dx, offset apellidos
mov ah, 9
int 21h
mov ah, 4ch
int 21h
main endp
end																																																