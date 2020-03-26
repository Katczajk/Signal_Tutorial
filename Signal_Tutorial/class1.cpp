#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "class1.h"

void class1::infoTxt()
{
	int zahl1 = 1;
	class1::infoTxt(zahl1);
}

void class1::infoTxt(int zahl1)
{
	std::cout << zahl1 << std::endl;
}
