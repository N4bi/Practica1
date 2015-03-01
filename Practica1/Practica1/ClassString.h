#ifndef __ClassString_H__
#define __ClassString_H__
#define TMP_STRING_SIZE 4096

class p2String
{
private:
	char* string;
	unsigned int memLen;

public:

	///////////////////////
	// Constructors
	///////////////////////

	p2String();
	p2String(const char* a);
	p2String(const char* format, ...);

	///////////////////////
	// Destructor
	///////////////////////

	~p2String();

	///////////////////////
	// Operators
	///////////////////////
	
	bool operator == (const char* a) const;
	bool operator != (const char* a);
	bool operator == (const p2String &a) const;
	bool operator != (const p2String &a);
	const p2String& operator = (const char* a);
	const p2String& operator = (const p2String &a);
	p2String& operator += (const char* a);          //////////////
	p2String& operator += (const p2String &a);     //////////////

	///////////////////////
	// Functions
	///////////////////////

	unsigned int length() const;
	unsigned int capacity() const;
	inline char* getString() const {return (string);}
	void clear();

};

#endif //__ClassString_H__