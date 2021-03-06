#include "stdafx.h"
#include "../DualNumber/dual_number.h"
#include "../DualNumber/non_polynomial.h"
#include <iostream>

DualNumber f(const double x) {
	DualNumber xi = DualNumber(x, 1);
	return xi * xi + DualNumber(2) * xi;
}

DualNumber g(const double x) {
	DualNumber xi = DualNumber(x, 1);
	return xi + DualNumber(1);
}

int main()
{
	DualNumber resSummation = f(1) + g(1);
	DualNumber resSubtraction = f(1) - g(1);
	DualNumber resMultiplication = f(1) * g(1);
	DualNumber resDivision = f(1) / g(1);

	std::cout << "+:" << resSummation.getFprime() << std::endl;
	std::cout << "-:" << resSubtraction.getFprime() << std::endl;
	std::cout << "*:" << resMultiplication.getFprime() << std::endl;
	std::cout << "/:" << resDivision.getFprime() << std::endl;

	std::cout << std::endl;

	std::cout << (nonPolynomial::cos(1) * nonPolynomial::sin(1)).getFprime() << std::endl;
	
	return 0;
}