#include <iostream>
#include <signal.h>
#include <Windows.h>
#include <stdio.h>
#include <string>

/* own Header Files -> not default one*/
#include "..\Dll1\msg.h"
#include "class1.h"



int main() 
{
	class1::infoTxt();
	class1::infoTxt(5);

	system("pause");
	return 0;
}
