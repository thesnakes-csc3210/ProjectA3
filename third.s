.section .data
a: .hword -1

.section .text

.globl _start
_start:

	mov r0, #0x1
	ldrsh r1, =a
	ldrsh r1, [r1]
	mov r1, #0xFFFFFFFF
	mov r2, #0xFF
	mov r3, #0x101
	mov r4, #0x400

	mov r7, #1
	svc #0
.end
