/*
 * uniforminit.cpp
 *
 *  Created on: Jun 12, 2016
 *      Author: javier
 */
#include "uniformInit.h"
#include <iostream>
#include <vector>



namespace UniformInit
{

void initContainer()
{
	std::vector<int> aExampleVector {1, 2, 3, 4};

	for (int value: aExampleVector)
	{
		std::cout << "value: " << value << std::endl;
	}
}

}



