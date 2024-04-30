#include <iostream>
#include "testClass.h"

using namespace std;

int main() {
	test::AClass test; //namespace를 이용한 클래스의 객체 생성
	test.get_data(); //객체를 통해 메서드 접근
}