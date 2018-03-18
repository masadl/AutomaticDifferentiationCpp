#pragma once
#include "dual_number.h"
#define DllExport __declspec(dllexport)

namespace nonPolynomial {
	DllExport DualNumber exp(const DualNumber& x);
	DllExport DualNumber cos(const DualNumber& x);
	DllExport DualNumber sin(const DualNumber& x);
	DllExport DualNumber log(const DualNumber& x);

	DllExport DualNumber exp(const double x);
	DllExport DualNumber cos(const double x);
	DllExport DualNumber sin(const double x);
	DllExport DualNumber log(const double x);
}

