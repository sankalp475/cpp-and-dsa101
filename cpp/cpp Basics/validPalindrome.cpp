#include <iostream>

void palindromString(std::string inpstr) {
    bool flag;
	for(int i=0; i<inpstr.size()/2; i++) {
        if(inpstr[i] != inpstr[inpstr.size()-(i+1)]) {
           flag=false;
	    } else {
			flag=true;
		}
	}

	std::cout << ((flag)? "yes it is a palindrom String" : "no it is not a palindrom String") << std::endl;
}
int main() {
	std::string inpstr;
    std::cin >> inpstr;
	std::cout << inpstr << std::endl;
	palindromString(inpstr);

	std::cout << "\n";
	return 0;
}