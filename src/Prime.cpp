//#include "../include/Prime.h"
#include "Prime.h"
#include <algorithm>

void Prime::setValue(int n) {
	value = n;
	isPrime = testPrime(n);
}
bool Prime::isValid() {
	return isPrime;
}
bool Prime::testPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}
int Prime::countBetween(Prime& p) {
	int count = 0;
	for (int i = std::min(value, p.value) + 1; i < std::max(value, p.value); i++) {
		if (testPrime(i)) count++;
	}
	return count;
}
Prime Prime::nextPrime() {
	int i;
	for (i = value + 1; 1; i++) {
		if (testPrime(i)) break;
	}
	Prime p;
	p.value = i;
	p.isPrime = true;
	return p;
}
int Prime::getValue() {
	return value;
}
bool Prime::checkPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}