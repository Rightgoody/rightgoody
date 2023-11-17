// this problem is to solve a question during office hours

#include <iostream>

int main() {

int power_num;
int user_input;

std::cout << "please enter a number \n";
std::cin >> user_input;

if ((user_input % 3) == 0) {
    power_num = (user_input / 3);
    std::cout << "The highest product from the "
                 "sum of the given number is 3^" 
              << power_num << ".\n";
} else if (((user_input - 1) % 3) == 0) {
    power_num = ((user_input - 1) / 3);
    std::cout << "The highest product from the "
                 "sum of the given number is 2^2 * 3^"
              << power_num << ".\n";
} else if (((user_input - 2) % 3) == 0) {
    power_num = ((user_input - 2) / 3);
    std::cout << "The highest product from the "
                 "sum of the given number is 2 * 3^"
              << power_num << ".\n";
}
return 0;
}