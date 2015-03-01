#ifndef __ClassString_H__
#define __ClassString_H__

#define TMP_STRING_SIZE 4096

class p2String
{
private:
	char* string;
	unsigned int memLen;

public:

	p2String();
	p2String(const char* string);
	p2String(const char* format, ...);

	~p2String();

	p2String& operator += (const p2String &a);
	p2String& operator += (const char* a);
	int operator == (const p2String &a) const;
	int operator == (const char* a) const;
	int operator != (const p2String &a)

};

