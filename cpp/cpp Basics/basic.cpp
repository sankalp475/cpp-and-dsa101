//! Basics of C++ Programming


#include <iostream> // iostream is standard input/output librar
// #include <bits/stdc++.h>
using namespace std;


int add(int a, int b) {
	return a+b;
}

void strupr(std::string* __string1, std::string* __string2) {
	size_t length  = __string1->size();
    for(int i=0; i<length; i++) {
		int __diff = 32;
        *__string2 += ((*__string1)[i]-__diff == 0)
		    ?((*__string1)[i]-__diff )+__diff
			:(*__string1)[i]-__diff;
	}
}



void printHello() {
	std::cout << "hello world";
}

int digitSum(int n) {
	int digit_sum = 0;
	while(n) {
		digit_sum = digit_sum + n % 10;
		n=n/10;
	}
	return digit_sum;
}




int main() {

	// int a, b;
	// std::cin >> a >> b;
    // cout << digitSum(a) + digitSum(b);
	// int a = 12;
	// int b = 23;
	// int sum  = a + b;
	// bool d = true;
    // std::cout << sum;
     //! input output ??
	// int number;
	// std::cout << "Enter an integer; ";
	// std::cin >> number;
	// std::cout << "You entered: " << number << std::endl;
    // std::cout<<add(3,7);

    // double a = 10000000;
	// double b = 1000000;
	// double c = a * b;
	// std::cout << std::fixed << std::setprecision(0) << c ;

    // std::string str = " hello this is a string i wrote a minute ago";
	// std::string str2;
	// strupr(&str,&str2);
	// cout << str2 << endl;


	// std::cout << str;
	// std::string str2 = " hello world 2";
	// std::cout << str.size();

	// string str1, str2;
	// cin >> str1 >> str2;
	// cout << str1 << " " << str2 << endl;
	// getline(cin, str1);
	// cout << str1 << endl;

	// std::string inpstr;
    // cin >> inpstr;
	// palindromString(inpstr);



	//! lemda function
	// basic syntex of lemda function
	// [capture-list](parameters) -> return_type {
	//     // function body
	// };





  cout<<"\n";
  return 0;
}
