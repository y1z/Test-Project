#pragma once
#include <iostream>
class TestClass
{
public:
	TestClass();
	~TestClass();

	void RandomMethod();
private:

};

TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

inline void TestClass::RandomMethod()
{
	printf("What going on boiiiiizizizzi \n");
}
