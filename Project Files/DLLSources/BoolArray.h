#ifndef BOOL_ARRAY_H
#define BOOL_ARRAY_H
#pragma once
// BoolArray.h

/*
 * BoolArray is used more or less like a just-in-time array.
 * Functions are named the same and to the outside world they behave the same. 
 */

class CvXMLLoadUtility;

class BoolArray
{
private:
	unsigned int* m_iArray;
	const unsigned short m_iLength;
	const unsigned char m_iType;
	const bool m_bDefault : 1;

public:
	BoolArray(JITarrayTypes eType, bool bDefault = false);

	~BoolArray();

	// reset content of an array if it is allocated
	void reset();

	// non-allocated arrays contains only default values
	// this is a really fast content check without even looking at array content
	// note that it is possible to have allocated arrays with only default content
	inline bool isAllocated() const
	{
		return m_iArray != NULL;
	}
	
	inline int length() const
	{
		return m_iLength;
	}

	// get stored value
	bool get(int iIndex) const;

	// assign argument to storage
	void set(bool bValue, int iIndex);

	JITarrayTypes getType() const
	{
		return static_cast<JITarrayTypes>(m_iType);
	}

	bool hasContent(bool bRelease = true);
	inline bool isEmpty(bool bRelease = true)
	{
		return !hasContent(bRelease);
	}

	int getNumUsedElements() const;

	int getNumTrueElements() const;

	// binary add a 1D InfoArray into the array
	// returns true if something changed
	bool add(const InfoArray* pIarray);

	// bEnable can be used like "uiFlag > x" to make oneline conditional loads
	void read (FDataStreamBase* pStream, bool bEnable);
	void write(FDataStreamBase* pStream, bool bEnable);
	void Read (FDataStreamBase* pStream);
	void Write(FDataStreamBase* pStream);
	void read(CvXMLLoadUtility* pXML, const char* sTag);
};
#endif