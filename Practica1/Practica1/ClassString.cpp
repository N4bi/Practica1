#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "ClassString.h"

///////////////////////
// Constructors
///////////////////////

P2String::P2String()
{
	memLen = 1;
	string = new char[memLen];
	string[0] = '\0';
}

P2String::P2String(const char* a)
{
	memLen = strlen(a) + 1;
	string = new char[memLen];
	strcpy_s(string,memLen, a);
	
}


///////////////////////
// Destructor
///////////////////////

P2String::~P2String()
{
	delete[] string;
}

///////////////////////
// Operators
///////////////////////

bool P2String::operator == (const char* a) const
{
	if (string != NULL)
		return strcmp(a,string) == 0;
		
}

bool P2String::operator != (const char* a)
{
	if (string != NULL)
		return strcmp(a,string) != 0;
}

bool P2String::operator == (const P2String &a) const
{
	return(a.string, string) == 0;
}

bool P2String::operator != (const P2String &a)
{
	return(a.string, string) != 0;
}

const P2String& P2String::operator = (const char* a)
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

const  P2String& P2String::operator = (const P2String &a)
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

/*P2String& P2String::operator += (const char* a)
{
	if (string != NULL)
	{
		
	}
}*/

/*P2String& P2String::operator += (const P2String &a)
{

}*/

///////////////////////
// Functions
///////////////////////

unsigned int P2String::length() const
{
	return strlen(string);
}

unsigned int P2String::capacity() const
{
	return(TMP_STRING_SIZE);
}

void P2String::clear()
{
	string[0] = '\0';
}

