#pragma once
#define DllExport __declspec(dllexport)

class DllExport DualNumber {
private:
	double fval_;
	double fprime_;

public:
	DualNumber (const double fval, const double fprime = 0);
	
	DualNumber& operator-();
	DualNumber& operator+=(const DualNumber& rhs);
	DualNumber& operator-=(const DualNumber& rhs);
	DualNumber& operator*=(const DualNumber& rhs);
	DualNumber& operator/=(const DualNumber& rhs);

	DualNumber operator+(const DualNumber& rhs) const;
	DualNumber operator-(const DualNumber& rhs) const;
	DualNumber operator*(const DualNumber& rhs) const;
	DualNumber operator/(const DualNumber& rhs) const;

	double getFval() const;
	double getFprime() const;
};