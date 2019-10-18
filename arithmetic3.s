@Register = val2 + 3 + val3 - val1

.section .data
val1: .byte -60
val2: .byte 11
val3: .byte 16

.section .text
.globl _start
_start:

	ldr r0, =val1
	ldrb r0, [r0]
	ldr r1, =val2
	ldrb r1, [r1]
	ldr r2, =val3
	ldrsb r2, [r2]

	adds r1, r1, #3
	adds r1, r1, r2
	subs r1, r1, r0

	mov r7, #1
	svc #0
.end
