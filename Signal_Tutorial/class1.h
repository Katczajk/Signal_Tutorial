#pragma once
#ifndef CLASS1_H
#include <iostream>
#include <Windows.h>
#include <string>

#define CLASS1_H

using namespace std;

namespace class1 {

	
	class Baum
	{
		public:
			Baum();
			~Baum();
			static void get_Text(string g_text);
			static void show_info(LPCSTR g_text);
			void public_class();
		private:
			void inside_class();

	public:
		static void InTest();
	};
	


}

#endif // CLASS1_H
