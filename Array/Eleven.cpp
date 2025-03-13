#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std ;

int main() {
    
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    int userInput;

    
    std::cout << "Choose a number from the list (1, 2, 3, 4, 5, 6): ";
    std::cin >> userInput;

    
    bool validInput = false;
    for (int num : numbers) {
        if (num == userInput) {
            validInput = true;
            break;
        }
    }

    if (!validInput) {
        std::cout << "Invalid " << std::endl;
        return 1;
    }

    
    std::vector<int> newList;
    if (userInput % 2 == 0) {  
        for (int num : numbers) {
            newList.push_back(num - userInput);
        }
    } else {  
        for (int num : numbers) {
            newList.push_back(num + userInput);
        }
    }

  
    std::cout << "New list: ";
    for (int num : newList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0; 

}