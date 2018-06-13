#include <iostream>
#include "MathBasic.hpp"

using namespace std;
using namespace mbasic;

int main(void){
	int v1 = 6, v2 = 2;

	cout << MathBasic::add(v1, v2) << endl;
	cout << MathBasic::dif(v1, v2) << endl;
	cout << MathBasic::mux(v1, v2) << endl;
	cout << MathBasic::div(v1, v2) << endl;

	return 0;
}