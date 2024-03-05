#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    string input;
    cout << "Введите строку: ";
    getline(std::cin, input);

    istringstream iss(input);
    string word;
    while (iss >> word) {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}