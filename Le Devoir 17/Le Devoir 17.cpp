#include<iostream>

double mean(double num1,double num2){
	return(num1 + num2) / 2;
}
double mean_arr(int mas[], const int lung) {
	double sum = 0;
	for (int i = 0; i < lung; i++)
		sum = sum + mas[i];
	return sum / lung;
}
int powers(int N,int M) {
	int k = 0;
	int s = 1;
	while (k <= M) {
		std::cout << "Число " << N << " в степени " << k << " = " << s << "\n";
		k++;
		s *= N;
	} 
	return 0;
}
void positive_arr(int terra[], const int nova) {
	for (int i = 0; i < nova; i++)
		if (terra[i] < 0)
			terra[i] *= (-1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	// Задача 1.
	std::cout << "Задача 1. Среднее арифметическое.\n\n";
	int un, deux;
	std::cout << "Введите два числа : ";
	std::cin >> un >> deux;
	std::cout <<"Среднее арифметическое равно "<< mean(un, deux) << "\n\n";

	// Задача 2. 
	std::cout << "Задача 2. Среднее арифметическое элементов массива.\n\n";
	const int cette = 7;
	int bloc[cette]{ 53,65,27,87,16,5,90 };
	for (int i = 0; i <cette; i++)
		std::cout << bloc[i] << ' ';
	std::cout << "\nСреднее арифметическое равно " << mean_arr(bloc, cette) << "\n\n";

	// Задача 3.
	std::cout << "Задача 3. Степень числа.\n\n";
	std::cout << "Введите число и его степень : ";
	int K, S;
	std::cin >> K >> S;
	std::cout << powers(K, S);

	// Задача 4.
	std::cout << "\n\nЗадача 4. Положительный массив.\n\n";
	std::cout << "Массив :\n";
	const int sei = 6;
	int bric[sei]{ -82,-7,24,71,-4,-9635 };
	for (int i = 0; i < sei; i++)
		std::cout << bric[i] << ", ";
	std::cout << "\b\b.\n\n";
	positive_arr(bric, sei);
	for (int i = 0; i < sei; i++)
		std::cout << bric[i] << ", ";
	std::cout << "\b\b.\n\n";

	return 0;
}