#include <iostream>

using namespace std;

char str_8(const char*);

int main()
{
	cout << "Enter binary : ";
	char input[4096];
	cin.getline(input, sizeof(input));
	for (unsigned int i = 0; i < strlen(input); i+=9) {
		cout << str_8(input + i);
	}
	cin.get();
	return 0;
}

char str_8(const char* bin) {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		switch (bin[i]) {
		case '1':
			result += (int)powf(2, 7 - (float)i);
			break;
		case '0':
			break;
		default:
			cout << "Enter binary only !";
			cin.get();
			exit(0);
		}
	}
	return (char)result;
}