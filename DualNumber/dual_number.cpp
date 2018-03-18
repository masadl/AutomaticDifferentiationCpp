#include "stdafx.h"
#include "dual_number.h"

DualNumber::DualNumber(const double a, const double b)
	:fval_(a), fprime_(b) {}

DualNumber& DualNumber::operator-() {
	this->fval_ = -fval_;
	this->fprime_ = -fprime_;
	return *this;
}

DualNumber& DualNumber::operator+=(const DualNumber& rhs) {
	this->fval_ += rhs.fval_;
	this->fprime_ += rhs.fprime_;
	return *this;
};

DualNumber& DualNumber::operator-=(const DualNumber& rhs) {
	this->fval_ -= rhs.fval_;
	this->fprime_ -= rhs.fprime_;
	return *this;
};

DualNumber& DualNumber::operator*=(const DualNumber& rhs) {
	this->fprime_ = this->fprime_ * rhs.fval_ + this->fval_ * rhs.fprime_;
	this->fval_ *= rhs.fval_;
	return *this;
};

DualNumber& DualNumber::operator/=(const DualNumber& rhs) {
	this->fprime_ = 
		(this->fprime_ * rhs.fval_ - this->fval_ * rhs.fprime_) 
		/ (rhs.fval_ * rhs.fval_);
	this->fval_ /= rhs.fval_;
	return *this;
};

DualNumber DualNumber::operator+(const DualNumber& rhs) const {
	return DualNumber(*this) += rhs;
}

DualNumber DualNumber::operator-(const DualNumber& rhs) const {
	return DualNumber(*this) -= rhs;
}

DualNumber DualNumber::operator*(const DualNumber& rhs) const {
	return DualNumber(*this) *= rhs;
}

DualNumber DualNumber::operator/(const DualNumber& rhs) const {
	return DualNumber(*this) /= rhs;
}

double DualNumber::getFval() const {
	return this->fval_;
}

double DualNumber::getFprime() const {
	return this->fprime_;
}