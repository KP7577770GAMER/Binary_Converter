#include <iostream>

using namespace std;

string bin_8(int n);

int main()
{
    cout << "Enter the string : ";
    char input[4096];
    cin.getline(input, sizeof(input));
    for (unsigned int i = 0; i < strlen(input); i++) {
        cout << bin_8((int)input[i]) << " ";
    }
    cin.get();
    return 0;
}

string bin_8(int n) {
    string result;
    for (int i = 128; i != 0; i /= 2) {
        if (n >= i)
            result.push_back('1'), n -= i;
        else
            result.push_back('0');
    }
    return result;
}
