#include<iostream>
//#include "../include/Prime.h"
#include "Prime.h"

int main() {
	Prime p;		// создание класса, вывод его значения и проверка на простоту
	p.setValue(3);
	std::cout << "Create and set value: "<< p.getValue() << " " << p.isValid() <<'\n';

	p.setValue(4);		//изменение значения хранения класса и вывод
	bool result1 = p.isValid();
	std::cout << "Change value: " << p.getValue() << " " << p.isValid() << '\n';
	
	Prime num1, num2;		// создание 2 переменных класса, проверка функции countBetween
	num1.setValue(2);
	num2.setValue(11);
	std::cout << "The number of primes between 2 and 11: " << num1.countBetween(num2) << "\n";

	Prime num3 = num2.nextPrime();		// проверка функции nextPrime
	std::cout << "Create and set next prime value from 11: " << num3.getValue() << " " << num3.isValid() << "\n";

	std::cout << "Test if the number is prime (true): " << num3.checkPrime(149) << "\n";		// проверка функции testPrime 
	std::cout << "Test if the number is prime (false): " << num3.checkPrime(4) << "\n";
}