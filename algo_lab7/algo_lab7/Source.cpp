#include <iostream>
void to_triple(int number) {
	int array[50];
	int k = 0;
	while (true) {
		int b;
		if (number <= 3) {
			array[k] = number;
			break;
		}
		b = number % 3;
		number -= b;
		number = number / 3;
		array[k] = b;
		k++;
	}
	std::cout << std::endl;
	for (int i = k - 0 ; i >= 0 ; i--) {
		std::cout << array[i];
	}
}

void to_triple(int number1, int number2, int number3) {
	int arr[] = { number1,number2, number3 };
	for (int g = 0; g < 3; g++) {
		int number = arr[g];
		int array[50];
		int k = 0;
		while (true) {
			int b;
			if (number <= 3) {
				array[k] = number;
				break;
			}
			b = number % 3;
			number -= b;
			number = number / 3;
			array[k] = b;
			k++;
		}
		for (int i = k - 0; i >= 0; i--) {
			std::cout << array[i];
		}
		std::cout << std::endl;
	}
}
void to_triple(int number1, int number2, int number3, int number4) {
	int arr[] = { number1,number2, number3, number4 };
	for (int g = 0; g < 3; g++) {
		int number = arr[g];
		int array[50];
		int k = 0;
		while (true) {
			int b;
			if (number <= 3) {
				array[k] = number;
				break;
			}
			b = number % 3;
			number -= b;
			number = number / 3;
			array[k] = b;
			k++;
		}
		for (int i = k - 0; i >= 0; i--) {
			std::cout << array[i];
		}
		std::cout << std::endl;
	}
}
void to_triple(int number1, int number2, int number3, int number4, int number5, int number6, int number7) {
	int arr[] = { number1,number2, number3, number4, number5, number6, number7 };
	for (int g = 0; g < 7; g++) {
		int number = arr[g];
		int array[50];
		int k = 0;
		while (true) {
			int b;
			if (number <= 3) {
				array[k] = number;
				break;
			}
			b = number % 3;
			number -= b;
			number = number / 3;
			array[k] = b;
			k++;
		}
		for (int i = k - 0; i >= 0; i--) {
			std::cout << array[i];
		}
		std::cout << std::endl;
	}
}
int main() {
	to_triple(12, 53, 72);
	std::cout << std::endl;
	to_triple(12, 53, 72, 42);
	std::cout << std::endl;
	to_triple(12, 53, 72, 42, 78, 568, 32);
	system("pause");
}