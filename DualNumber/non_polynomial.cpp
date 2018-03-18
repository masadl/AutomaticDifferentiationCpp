#include "stdafx.h"
#include "non_polynomial.h"
#include <cmath>

namespace nonPolynomial {
	DualNumber exp(const DualNumber& x) {
		return DualNumber(
			std::exp(x.getFval()), std::exp(x.getFval()) * x.getFprime()
		);
	}


	DualNumber cos(const DualNumber& x) {
		return DualNumber(
			std::cos(x.getFval()), -std::sin(x.getFval()) * x.getFprime()
		);
	}

	DualNumber sin(const DualNumber& x) {
		return DualNumber(
			std::sin(x.getFval()), std::cos(x.getFval()) * x.getFprime()
		);
	}

	DualNumber log(const DualNumber& x) {
		return DualNumber(
			std::log(x.getFval()), 1.0 / (1 + x.getFval()) * x.getFprime()
		);
	}

	DualNumber exp(const double x) {
		return exp(DualNumber(x, 1));
	}

	DualNumber cos(const double x) {
		return cos(DualNumber(x, 1));
	}

	DualNumber sin(const double x) {
		return sin(DualNumber(x, 1));
	}

	DualNumber log(const double x) {
		return log(DualNumber(x, 1));
	}
}
