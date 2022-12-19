#include "../headers/headersReq.h00"

bool com_isnumber(std::string str) {
	double number; //setup a container to catch the value
	std::istringstream value(str); //transfer the string variable to a stream variable value
	value >> number; //output value to the number variable
	return !value.fail() && value.eof(); //if the output didnt fail and is eof return true
}

int com_stoi(std::string str, int initvalue) {
	//return an int version of the string (or if not available the initialise value)
	return com_isnumber(str) ? stoi(str) : initvalue;
}

std::string com_tolower(std::string str) {
	std::transform(str.begin(), str.end(),str.begin(), ::tolower);
	return str;
}