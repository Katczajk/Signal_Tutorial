#include "class1.h"


using namespace std;

class1::Baum::Baum() {
	MessageBox(nullptr, "Constructor reached", "Class Information", MB_OK | MB_ICONINFORMATION);
}

class1::Baum::~Baum() {
	std::cout << "Destructor reached" << std::endl;
}

void class1::Baum::get_Text(string g_text)
{
	cout << g_text << endl;
}

void class1::Baum::show_info(LPCSTR g_text)
{
	MessageBox(nullptr, g_text, "Info", MB_OK | MB_ICONINFORMATION);
	
}

void class1::Baum::public_class()
{
	this->inside_class();
	cout << "But rest is outside and used from object without static function..." << endl;
}

void class1::Baum::inside_class()
{
	cout << "This called only from inside a Class." << endl;
}


void class1::Baum::InTest()
{
	// TODO: Fügen Sie hier Ihren Implementierungscode ein..
}
