//Uso de operandos logicos para manejo de bits

#include <stdio.h>
int main()
{
	unsigned char a = 5; // a = 00000101
	unsigned char b = 9; // b = 00001001
	
	printf("a = %X, b = %X\n", a, b);
	printf("a & b = %X\n", a&b); // 00000001 (0x1) AND a nivel bit
	printf("a | b = %X\n", a|b); // 00001101 (oxD) OR a nivel bit
	printf("a ^ b = %X\n", a^b); // 00001100 (0xC) XOR a nivel bit
	printf("~a = %X\n", a=~a); // 11111010 (0xFA) complemento a uno (unario)
	printf("b<<1 = %X\n", b<<1); // 00010010 (0x12) Desplazamiento a la izquierda
	printf("b>>1 = %X\n", b>>1); // 00000100 (0x4) Desplazamiento a la derecha
	
	return 0;
}
