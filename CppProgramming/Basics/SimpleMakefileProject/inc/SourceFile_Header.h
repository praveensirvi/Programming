
#ifndef SOURCEFILE_HEADER_H
#define SOURCEFILE_HEADER_H

// include guard helps defining multiple header with same name

// Here define the standard includes
#include <iostream>
#include <ostream>
#include <cstdio>  // This defines C input/output functions concepts
#include <cstring> // This defines library for string handling functions of narrow character
//#include <format>  // This defines library for std::format
// containers library
#include <array>
#include <list>
#include <vector>
#include <set>
#include <unordered_set>
#include <deque>
#include <forward_list>
#include <cstdint>

using namespace std;
// Here comes now the definitions of own data types and functions
// For starting I am defining my own function
uint8_t FunctionToPrintHello(std::string InputString);
std::string HelloString = "Hello World !"; 

#endif // SOURCEFILE_HEADER_H
