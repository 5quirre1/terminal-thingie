#include <iostream>
#include "main.hpp"
#include "swagcolor.hpp"
using namespace std;

void prompt()
{
    string fn = getCurFName();
    while (true)
    {
    	cout << SwagColor::sc("[#22C732]"+fn+"[/#22C732]")<< "> ";
    	string input;
    	getline(cin, input);
    	run(input);
    }
}

int main(void)
{
    cout << SwagColor::sc("[#C722B6]hi welcome to shitty small thing i made for school since not using real ide and stuff and only using online compiler and i wanted '''terminal''' yk LOL[/#C722B6]") << endl;
    prompt();
	return 0;
}
