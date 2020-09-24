#include <iostream>

int main() {
	int lines;
	std::cin>>lines;
	for(int i = 0; i<lines; i++) {
		int in, count=0;
		std::cin>>in;
		while(in!=0) {
			if((in%10)/4==1&&(in%10)%4==0) count++;
			in/=10;
		}
		std::cout<<count<<std::endl;
	}
	return 0;
}
