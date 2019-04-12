#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void megaphone(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		for (int j = 0; j <= strlen(argv[i]); j++) {
			cout << (char)toupper(argv[i][j]);
		}
	}
	cout << endl;
}

int main(int argc, char **argv) {

	if (argc < 2){
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	megaphone(argc, argv);
	
	return 0;
}
