// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on November 2019
// This program asks user to enter how many numbers
// they want to add. User enters numbers that are
// to be added, but only positive integers are added


#include <iostream>
#include <string>

int main() {
  int answer = 0;
  int user_loops = 0;
  int user_ntry = 0;

  try {
    std::cout << "This will add the positive numbers you enter" << std::endl;
    std::cout << "\n";
    std::cout << "Enter how many numbers you want to add: " << std::endl;
    std::cin  >> user_loops;
    std::cout << "\n";

    try {
      for (int loop_counter = 0; loop_counter < user_loops; loop_counter++) {
        std::cout <<"Enter a number you want to add: " <<std::endl;
        std::cin >> user_ntry;
        std::cout << "\n";

        if (user_ntry < 0) {
          continue;
        } else {
            answer = answer + user_ntry;
        }
      }
    }
    catch (std::invalid_argument) {
      std::cout << "invalid entry was entered";
    }
    std::cout <<  "The summ of all positive numbers is: " << answer
              << std::endl;
  }
  catch (std::invalid_argument) {
        std::cout << "invalid entry was entered";
  }
}
