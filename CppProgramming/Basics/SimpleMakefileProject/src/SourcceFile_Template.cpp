// First define all includes needed 
#include "SourceFile_Header.h"

// Define the function which we defined in the header file
uint8_t FunctionToPrintHello(std::string InputString)
{
    std::uint8_t ucError = 0;
    std::cout << InputString << std::endl;
    return ucError;
}

int main()
{
    std::uint8_t ucReturn = 0;
    // call defined function above
    ucReturn = FunctionToPrintHello(HelloString);

    return ucReturn;
}
