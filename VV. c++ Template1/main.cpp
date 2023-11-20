#include <iostream>
#include <ctime>
#include <math.h>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

double mean_arr(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum / length << ' ';
}

void  powers (int num1, int num2) {
	for (int i = 0; i <= num2; i++)
	std::cout << pow (num1, i) << ' ';
}
void positiv_arr(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			arr[i] *= -1;
		else
			if (arr[i] >= 0)
				arr[i] *= 1;
		std::cout << arr[i] << ' ';
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n,m;
	std::cout << "Задание 1 \n";
	std::cout << "Введите два числа-> ";
	std::cin >> n >> m;
	std::cout << mean(n, m);
	std::cout << std::endl;

	std::cout << "Задание 2 \n";
	const int size = 5;
	int arr[size]{};
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand()%30;
		std::cout << arr[i] << ' ';
	}
	std::cout << "Среднее арифметическое равно " << mean_arr (arr, size);
	std::cout << std::endl;

	std::cout << "Задание 3 \n";
	int a, c;
	std::cout << "Введите два числа-> ";
	std::cin >> a >> c;
	powers (a, c);
	std::cout << std::endl;

	std::cout << "Задание 4 \n";
	const int sized = 10;
	int arrs[sized]{};
	srand(time(NULL));
	for (int i = 0; i < sized; i++) {
		arrs[i] = rand() % (5- (-10)) -10;
		std::cout << arrs[i] << ' ';
	}
	std::cout << "\n";
	positiv_arr(arrs, sized);
	std::cout << std::endl; 



	return 0;
}