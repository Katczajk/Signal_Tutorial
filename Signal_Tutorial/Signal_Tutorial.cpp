// #include <iostream>
#include <iostream>
#include <signal.h>
#include "class1.h"
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "..\Dll1\msg.h"

using namespace class1;
using namespace std;

int main() 
{
	// Baum Eiche;
	string l_text = "Hello World!";
	LPCSTR l_message = "Welcome to Static Function from Class called at outside.";

	Baum::get_Text(l_text);
	Baum::show_info(l_message);

	Baum Eiche;
	Eiche.public_class();

	msg::get_infomsg();

	system("Pause");
	return 0;
}
