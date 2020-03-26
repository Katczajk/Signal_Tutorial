#pragma once
#ifndef CLASS1_H
#define CLASS1_H

#include <stdio.h>
#include <string>
#include <string.h>


// declare using namespace class1
namespace class1 {

	// this two function here declare a form of overload
	// used to provide functions with or without parameters
	// two with same name and can have some int zahl1 or not

	// we declare first function here
	void infoTxt();
	// using as same with submit parameter
	void infoTxt(int zahl1);




}

#endif // CLASS1_H
