/*
This program reads in lines until EOF. On each line, the calibration value can be found by
combining the first digit and the last digit (in that order) to form a single two-digit number.
*/

#include <iostream>
#include <fstream>
#include <string>



int main() {
    std::ifstream file_input;
    file_input.open("input.txt");
    std::string line;
    int sum = 0;
    
    while (std::getline(file_input, line)) {
        int front = 0;
        int back = line.size() - 1;

        while (!('0' < line[front] && line[front] <= '9')) {
            front++;
        }

        while (!('0' < line[back] && line[back] <= '9')) {
            back--;
        }

        int cali_val = 10 * (line[front] - '0') + (line[back] - '0');
        sum += cali_val;
    }
    
    file_input.close();
    std::cout << sum;
}