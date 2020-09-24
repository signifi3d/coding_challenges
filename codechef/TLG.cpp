#include <iostream>

int main() {

	int lines, p1=0, p1lead=0, p2=0, p2lead=0;
	std::cin >> lines;
	for (int i = 0; i < lines; i++) {
		int temp;
		std::cin >> temp;
		p1 += temp;
		std::cin >> temp;
		p2 += temp;
		if (p1 > p2) {
			if (p1-p2 > p1lead) p1lead = p1-p2;
		}
		else {
			if (p2-p1 > p2lead) p2lead = p2-p1;
		}

	}

	if (p1lead > p2lead) std::cout << "1 " << p1lead << std::endl;
	else std::cout << "2 " << p2lead << std::endl;
	
	return 0;
}
