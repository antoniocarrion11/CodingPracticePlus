//Manipulating and concatenating strings in C++

#include"StringManipulation.h"
#include<string>

using namespace std;

StringCompressor::StringCompressor(string originalString): originalString(originalString), compressedString("") {}

string StringCompressor::stringCompression() {
	int rep = 1;
	for (size_t i = 0; i < originalString.length(); i++) {
		if (originalString[i] == originalString[i + 1]) {
			cout << originalString[i] << " " << rep << endl;
			rep++;
		}
		else if (rep > 1) {
			compressedString +=  originalString[i] + to_string(rep);
			rep = 1;
		}
		else {
			compressedString += originalString[i];
		}
	}
	return compressedString;
}