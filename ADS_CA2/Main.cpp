// ADS_CA2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "XMLUtility.h"

using namespace std;

void demoParsingXMLTags();

int main()
{
	//useful for Question 3 - XML validation
	demoParsingXMLTags();
}

/// @brief Demo to show how to use XMLUtility::getNextTag to read a tag from a string of XML
void demoParsingXMLTags() {
	//string data = "<xml><studentlist><student><name>Jane Smith</name><dob><date>14</date><month>1</month><year>2000</year></dob></student></studentlist></xml>";
	string data = "<library><book><year>1990</year><title>XML Labelling</title><author>Smart Publ.</author></book></library>";

	int pos = 0;
	bool isClosing = false;
	string tag = "";

	while (pos != data.length()) {
		tag = XMLUtility::getNextTag(data, pos, isClosing);
		cout << tag << "Type: " << (isClosing ? "Closing" : "Opening") << endl;
	}
}