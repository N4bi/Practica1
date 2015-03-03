#ifndef __ClassString_H__
#define __ClassString_H__
#define TMP_STRING_SIZE 4096

class P2String
{
private:
	char* string;
	int memLen;

public:

	///////////////////////
	// Constructors
	///////////////////////

	P2String();
	P2String(const char* a);
	P2String(const P2String &a);

	///////////////////////
	// Destructor
	///////////////////////

	~P2String();

	///////////////////////
	// Operators
	///////////////////////
	
	bool operator == (const char* a) const;
	bool operator != (const char* a);
	bool operator == (const P2String &a)const;
	bool operator != (const P2String &a);
	const P2String& operator = (const char* a);
	const P2String& operator = (const P2String &a);
	P2String& operator += (const char* a);          //////////////
	P2String& operator += (const P2String &a);     //////////////

	///////////////////////
	// Functions
	///////////////////////

	int length() const;
    int capacity() const;
	inline char* getString() const {return (string);}
	void clear();

};

#endif //__ClassString_H__