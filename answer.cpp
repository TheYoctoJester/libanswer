#include "answer.h"

#include <stdio.h>
#include <stdlib.h>

#include <string>
#ifdef USEBOOST
#include <boost/lexical_cast.hpp>
#endif

void answer() {
#ifdef USEBOOST
	std::string call = "echo \"" + boost::lexical_cast<std::string>(6) + " * " + boost::lexical_cast<std::string>(7) + "\" | bc";
	printf("we are using boost!\n");
#else
	std::string call = "echo \"6 * 7\" | bc";
#endif

	printf("the answer is\n");

#if VERBOSEOUTPUT
	printf("(using calculation string: %s)\n", call.c_str());
#endif
	system(call.c_str());
}
