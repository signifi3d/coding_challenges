#include <iostream>
#include <string>
#include <cmath>

int main() {
	
	int lines;
	std::cin>>lines;
	for (int i = 0; i < lines; i++) {
		int in, inholder, reverse=0, digitcount=0;
		std::cin>>in;
		inholder=in;
		while (inholder/10!=0) {
			digitcount++;
			inholder/=10;
		}
		inholder=in;
		for(int i =digitcount;i>=0;i--) {
			reverse+=(inholder%10)*std::pow(10,i);
			inholder/=10;
		}
		std::cout<<reverse<<std::endl;;
	}

	return 0;
}
