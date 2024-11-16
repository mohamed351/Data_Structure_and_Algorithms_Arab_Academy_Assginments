#include <stdio.h>

int Pow(int number, int power) {
	if (power <= 1) {
		return number;
	}
	return number * Pow(number, power - 1);
}

int Fibonacci(int number) {

	if (number <= 1) {
		return number;
	}
	
	return Fibonacci(number - 1) + Fibonacci(number - 2);

}



int main() {


	printf("------------Power---------- \n");
	printf("%d \n", Pow(2, 3));
	printf("%d \n", Pow(3, 3));
	printf("%d \n", Pow(3, 4));


	printf("------------Fibonacci---------- \n");

	printf("%d \n", Fibonacci(2));
	printf("%d \n", Fibonacci(6));





	return 0;
}
