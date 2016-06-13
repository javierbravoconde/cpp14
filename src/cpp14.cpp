//============================================================================
// Name        : cpp14.cpp
// Author      : Javier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "uniform_initialization/uniformInit.h"
#include "default_initialization/Widget.h"

using namespace std;

void runUniformInit()
{
	std::cout << "runUniformInit()" << std::endl;

	UniformInit::initContainer();
}

void runDefaultInit()
{
	std::cout << "runDefaultInit()" << std::endl;

	Widget aWidget;
	std::cout << aWidget._NumberPets << std::endl;

}

int main() {

	runUniformInit();
	runDefaultInit();
	return 0;
}
