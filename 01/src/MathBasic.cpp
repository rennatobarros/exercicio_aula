#include <iostream>
#include "MathBasic.hpp"

namespace mbasic{
	MathBasic::MathBasic(){}

	MathBasic::~MathBasic(){}

	int MathBasic::add(int v1, int v2){
		return v1 + v2;
	}

	int MathBasic::dif(int v1, int v2){
		return v1 - v2;
	}

	int MathBasic::mux(int v1, int v2){
		return v1 * v2;
	}

	int MathBasic::div(int v1, int v2){
		return v1 == 0 ? 0 : v1 / v2;
	}
}



