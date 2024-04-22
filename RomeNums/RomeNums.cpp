#include <iostream>
#include <string>

int main() {

    int number;
    std::cin >> number;

    int thousands = number / 1000;
    int hundreds = number % 1000 / 100;
    int tens = number % 100 / 10;
    int units = number % 10;

    std::string result;
    for (int i = 0; i < thousands; ++i) {
        result += 'M';
    }

    if (hundreds == 4 || hundreds == 9) result += 'C';
    if (hundreds == 4 || hundreds == 5) result += 'D';
    if (hundreds == 9) result += 'M';
    if (hundreds % 5 < 4) {
        for (int i = 0; i < hundreds % 5; ++i) {
            result += 'C';
        }
    }

    if (tens == 4 || tens == 9) result += 'X';
    if (tens == 4 || tens == 5) result += 'L';
    if (tens == 9) result += 'C';
    if (tens % 5 < 4) {
        for (int i = 0; i < tens % 5; ++i) {
            result += 'X';
        }
    }

    if (units == 4 || units == 9) result += 'I';
    if (units == 4 || units == 5) result += 'V';
    if (units == 9) result += 'X';
    if (units % 5 < 4) {
        for (int i = 0; i < units % 5; ++i) {
            result += 'I';
        }
    }

    std::cout << result << '\n';
}