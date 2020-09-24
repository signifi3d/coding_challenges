#include <iostream>

int main() {
	int lines;
	std::cin>>lines;
	for(int i = 0; i<lines; i++) {
		int ms,opt;
		std::cin>>ms;
		opt = (ms/2) + 1;
		std::cout<<opt<<std::endl;
	}
	return 0;
}
