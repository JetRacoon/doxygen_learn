#include "calculator.h"


Calculator::Calculator(){

}

Calculator::~Calculator() {}

void Calculator::setNums(int fnum, int snum) {
	fnum_ = fnum;
	snum_ = snum;
}

Summator::Summator() {

}

Summator::~Summator() {

}

int Summator::sum() {
	return fnum_ + snum_;
}
