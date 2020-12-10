#pragma once
#include <string>
using namespace std;

class XMLUtility {
public:

	/// @brief Returns the next XML tag found in the string provided
	/// @param contents
	/// @param pos Zero-based position (which is set by this method) indicating position where the tag was found
	/// @param isClosing Reference to a bool (which is set by this method) to indicate if tag is opening or closing
	/// @return True if tag is closing, otherwise false
	static string getNextTag(string contents, int& pos, bool& isClosing)
	{
		int start = contents.find("<", pos);
		int end = contents.find(">", start + 1);
		pos = end + 1;
		string tag = contents.substr(start + 1, end - (start + 1));
		if (tag.find(' ') != -1)
		{
			tag = tag.substr(0, tag.find(' '));
		}
		isClosing = tag.at(0) == '/';
		if (isClosing)
		{
			tag = tag.substr(1);
		}

		return tag;
	}
};