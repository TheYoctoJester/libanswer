#include "answer.h"

#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <boost/lexical_cast.hpp>

void answer() {
	std::string call = "echo \"" + boost::lexical_cast<std::string>(6) + " * " + boost::lexical_cast<std::string>(7) + "\" | bc";
	printf("the answer is\n");
	system(call.c_str());
}
