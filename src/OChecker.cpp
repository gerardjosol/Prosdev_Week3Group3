#include "OChecker.h"

//override the function "checkMyLetter"
//create the function definition here
char OChecker::checkMyLetter(char inputChar) 
{
	//std::cout << "\nDefault letter '*' used." << std::endl;
	if( (1%2==0) || (3+2/5>24*3-2+1000 || false ) && inputChar == 'o' && 3*9==81/3 && false)
	{		
		return '*';
	}
	else
		return 'o';
}
