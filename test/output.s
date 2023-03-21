addi sp, zero, ffff0000
.globl g
g:
addi sp, sp, -64
sw ra, 60(sp)
sw s0, 56(sp)
sw s1, 52(sp)
sw s2, 48(sp)
sw s3, 44(sp)
sw s4, 40(sp)
sw s5, 36(sp)
sw s6, 32(sp)
sw s7, 28(sp)
sw s8, 24(sp)
sw s9, 20(sp)
sw s10, 16(sp)
sw s11, 12(sp)
addi s0, sp, 64
sw a0, -56(s0)
li x9, -60
add x9, x9,s0
li x18, 0
sw x18, 0(x9)
lw x9, -56(s0)
j __switchStart_Label__0
__switchStart_Label__0:
li x18, 0
bne x9, x18, __CASE_Label__0
li x9, -60
add x9, x9,s0
li x18, 1
sw x18, 0(x9)
j __switchEnd_Label__0
__CASE_Label__0:
li x18, 2
bne x9, x18, __CASE_Label__1
li x9, -60
add x9, x9,s0
li x18, 2
sw x18, 0(x9)
__CASE_Label__1:
li x18, 1
bne x9, x18, __CASE_Label__2
li x9, -60
add x9, x9,s0
lw x18, -60(s0)
li x19, 1
add x18, x18, x19
sw x18, 0(x9)
j __switchEnd_Label__0
__CASE_Label__2:
__switchEnd_Label__0:
lw x18, -60(s0)
mv a0, x18
j __g_Label__0
__g_Label__0:
lw s0, 56(sp)
lw s1, 52(sp)
lw s2, 48(sp)
lw s3, 44(sp)
lw s4, 40(sp)
lw s5, 36(sp)
lw s6, 32(sp)
lw s7, 28(sp)
lw s8, 24(sp)
lw s9, 20(sp)
lw s10, 16(sp)
lw s11, 12(sp)
lw ra, 60(sp)
addi sp, sp, 64
ret
nop

