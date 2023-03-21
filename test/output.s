addi sp, zero, ffff0000
.globl main
main:
addi sp, sp, -68
sw ra, 64(sp)
sw s0, 60(sp)
sw s1, 56(sp)
sw s2, 52(sp)
sw s3, 48(sp)
sw s4, 44(sp)
sw s5, 40(sp)
sw s6, 36(sp)
sw s7, 32(sp)
sw s8, 28(sp)
sw s9, 24(sp)
sw s10, 20(sp)
sw s11, 16(sp)
addi s0, sp, 68
li x9, 10
sw x9, -56(s0)
li x9, 20
sw x9, -60(s0)
lw x9, -56(s0)
lw x18, -60(s0)
add x9, x9, x18
sw x9, -64(s0)
li x9, -64
add x9, x9,s0
lw x18, -64(s0)
lw x19, -56(s0)
sub x18, x18, x19
sw x18, 0(x9)
lw x18, -64(s0)
mv a0, x18
j __main_Label__0
__main_Label__0:
lw s0, 60(sp)
lw s1, 56(sp)
lw s2, 52(sp)
lw s3, 48(sp)
lw s4, 44(sp)
lw s5, 40(sp)
lw s6, 36(sp)
lw s7, 32(sp)
lw s8, 28(sp)
lw s9, 24(sp)
lw s10, 20(sp)
lw s11, 16(sp)
lw ra, 64(sp)
addi sp, sp, 68
ret
nop

