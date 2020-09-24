#include <iostream>
bool isPrime(int in) {
	if ( in <= 1) {
 		return false;
	}
	else if (in <= 3) {
		return true;
	}
	else if ( in % 2 == 0 || in % 3 == 0) {
		return false;
	}
	int i = 5;
	while ( i * i <= in) {
		if ( (in % i) == 0 || (in % (i+2)) == 0) {
			return false;
		}
		i = i + 6;
	}
	return true;
}
int main() {
	int lines;
	std::cin>>lines;
	while(lines--) {
		int in;
		bool pr;
		std::cin>>in;
		pr=isPrime(in);
		if (pr) std::cout<<"yes"<<std::endl;
		else std::cout<<"no"<<std::endl;
	}
	return 0;
}
