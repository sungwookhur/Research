#include <iostream>
#include "testClass.h"
using namespace std;

namespace test {

	AClass::AClass() : a(1), b(1.0) { // ��� �ʱ�ȭ
	};
	
	void AClass::get_data() {
		cout << a << endl;
	}

};

