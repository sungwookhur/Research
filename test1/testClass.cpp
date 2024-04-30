#include <iostream>
#include "testClass.h"
using namespace std;

namespace test {

	AClass::AClass() : a(1), b(1.0) { // 멤버 초기화
	};
	
	void AClass::get_data() {
		cout << a << endl;
	}

};

