.section .data

.section .text
.globl _start
_start:
	mov r0, #16
	mov r1, #16
	subs r0, r0, r1
	
	mov r7, #1
	svc #0
.end

