nasm -f elf32 kernel.asm -o kasm.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
ld -m elf_i386 -T link.ld -o root/boot/kernel.bin kasm.o kc.o 
qemu-system-i386 -kernel root/boot/kernel.bin
grub-mkrescue -o libreos.iso root/

read a


