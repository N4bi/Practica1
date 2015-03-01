#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "ClassString.h"

///////////////////////
// Constructors
///////////////////////

p2String::p2String()
{
	memLen = 1;
	string = new char[memLen];
	string[0] = '\0';
}

p2String::p2String(const char* a)
{
	memLen = strlen(a) + 1;
	string = new char[memLen];
	strcpy_s(string,memLen, a);
	
}

p2String::p2String(const char* format, ...)
{

}

///////////////////////
// Destructor
///////////////////////

p2String::~p2String()
{
	delete[] string;
}

///////////////////////
// Operators
///////////////////////

bool p2String::operator == (const char* a) const
{
	if (string != NULL)
		return strcmp(string, a) == 0;
	return false;

}

bool p2String::operator != (const char* a)
{
	if (string != NULL)
		return strcmp(string, a) != 0;
	return true;
}

bool p2String::operator == (const p2String &a) const
{
	return(a.string, string) == 0;
}

bool p2String::operator != (const p2String &a)
{
	return(a.string, string) != 0;
}

const p2String& p2String::operator = (const char* a)
{
	if (string != NULL)
	{
		if (strlen(string) + 1 > memLen)
		{
			delete[] string;
			memLen = strlen(a) + 1;
			string = new char[memLen];
		}
		else
			clear();
		strcpy_s(string, memLen, a);
	}
	else
	{
		clear();
	}
	return(*this);

}

const  p2String& p2String::operator = (const p2String &a)
{
	if (a.length() + 1 > memLen)
	{
		delete[] string;
		memLen = a.length() + 1;
		string = new char[memLen];
	}
	else
		clear();
	strcpy_s(string, memLen, a.string);
	return (*this);

}

/*p2String& p2String::operator += (const char* a)
{
	if (string != NULL)
	{
		
	}
}*/

/*p2String& p2String::operator += (const p2String &a)
{

}*/

///////////////////////
// Functions
///////////////////////

unsigned int p2String::length() const
{
	return strlen(string);
}

unsigned int p2String::capacity() const
{
	return(TMP_STRING_SIZE);
}

void p2String::clear()
{
	if (string != NULL)
	{
		memset(string, 0, TMP_STRING_SIZE);
	}

	memLen = 0;
}

