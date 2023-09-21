   exterm printf
   global main

main:
   push rbp

   mov rdi,fmt
   xor rax,rax
   call printf
   mov rax,0
   ret

format: db "Hello, Holberton", 0 
