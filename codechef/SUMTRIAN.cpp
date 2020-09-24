#include <iostream>

int main() {
	int lines;
	std::cin>>lines;
	for(int i = 0; i < lines; i++) {
		int pLines, lineSum=0;
		std::cin>>pLines;
		for( int j = 1; j <= pLines; j++) {
			int lineMax=0;
			for (int k = 1; k <=j; k++) {
				int in;
				std::cin>>in;
				if(in > lineMax) lineMax = in;
			}
			lineSum+=lineMax;
		}
		std::cout<<lineSum<<std::endl;
	}
	return 0;
}
