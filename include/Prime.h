#ifndef  PRIME_H
#define PRIME_H

class Prime {
private:
	int value;
	bool isPrime;
public:
	void setValue(int);
	bool isValid();
	bool checkPrime(int);
	int countBetween(Prime&);
	Prime nextPrime();
	int getValue();
};


#endif // ! PRIME_H
