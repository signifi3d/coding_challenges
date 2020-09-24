#include <iostream>
#include <math.h>

int main() {

	int lines;
	std::cin>>lines;
	while(lines--) {
		int p,d=0;
		std::cin>>p;
		for(int i = 12; i > 0; i--) {
			d += p / (int)std::pow(2,i-1);
			p = p % (int)std::pow(2, i-1);
			if (p == 0) break;
		}
		std::cout<<d<<std::endl;
	}

	return 0;
}
