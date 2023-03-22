addi sp, zero, ffff0000
.globl main
main:
addi sp, sp, -56
sw ra, 52(sp)
sw s0, 48(sp)
sw s1, 44(sp)
sw s2, 40(sp)
sw s3, 36(sp)
sw s4, 32(sp)
sw s5, 28(sp)
sw s6, 24(sp)
sw s7, 20(sp)
sw s8, 16(sp)
sw s9, 12(sp)
sw s10, 8(sp)
sw s11, 4(sp)
addi s0, sp, 56
li x9, -52
add x9, x9,s0
addi x9, x9, 0
li x18, 1
sw x18, 0(x9)
li x18, -52
add x18, x18,s0
addi x18, x18, 0
lw x18, 0(x18)
mv a0, x18
j __main_Label__0
__main_Label__0:
lw s0, 48(sp)
lw s1, 44(sp)
lw s2, 40(sp)
lw s3, 36(sp)
lw s4, 32(sp)
lw s5, 28(sp)
lw s6, 24(sp)
lw s7, 20(sp)
lw s8, 16(sp)
lw s9, 12(sp)
lw s10, 8(sp)
lw s11, 4(sp)
lw ra, 52(sp)
addi sp, sp, 56
ret
nop

