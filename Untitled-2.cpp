#include <iostream>

int main()
{
	int base;
	int altura;
	int area;
	printf("Base: ");
	scanf_s("%i", &base);
	printf("Altura: ");
	scanf_s("%d", &altura);
	area = base * altura / 2;
	printf("El Area del triangulo: %10i", area);
}