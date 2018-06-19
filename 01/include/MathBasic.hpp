#ifndef _MATHBASIC_
#define _MATHBASIC_ 

#include <iostream>

using namespace std;

namespace mbasic{
	class MathBasic
	{
	public:
		MathBasic();
		~MathBasic();

		static int add(int, int);
		static int dif(int, int);
		static int mux(int, int);
		static int div(int, int);	
	};
}

#endif


