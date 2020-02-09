#pragma once
#include <iostream>
using namespace std;

class StringCompressor {
	public:
		StringCompressor(string originalString);
		string stringCompression();
	private:
		string originalString;
		string compressedString;
};
