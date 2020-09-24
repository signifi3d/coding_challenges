#include <iostream>

int main() { 
	
	int lines;
	std::cin>>lines;
	
	for(int i = 0; i < lines; i++) {
		int in, holder = 0;
		std::cin>>in;
		while (in != 0) {
			holder += in%10;
			in/=10;
		}
		std::cout<<holder<<std::endl;
	}
	
	return 0;

}
