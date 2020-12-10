#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class FileUtility {
public:

	/// @brief Read the contents of a file into a string
	/// @param filename Full path and suffix (e.g. c:/temp/xml.txt)
	/// @return String contents
	static string readFile(string filename)
	{
		string contents;
		string line;
		ifstream in(filename);
		if (in)
		{
			while (!in.eof())
			{
				getline(in, line);
				contents += line;
			}
			return contents;
		}
		return "";
	}
};
