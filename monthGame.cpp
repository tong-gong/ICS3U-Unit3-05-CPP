// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a "Month" program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // This is the function to run "Month" program.

  int userInput;

  // input
  std::cout << "Enter a number between 1-12:" << std::endl;
  std::cin >> userInput;
  std::cout << "" << std::endl;

  // process + output
  if (userInput == 1) {
      std::cout << "January" << std::ends;
  } else if (userInput == 2) {
      std::cout <<"February" << std::ends;
} else if (userInput == 3) {
      std::cout <<"march" << std::ends;
} else if (userInput == 4) {
      std::cout <<"April" << std::ends;
} else if (userInput == 5) {
      std::cout <<"May" << std::ends;
} else if (userInput == 6) {
      std::cout <<"June" << std::ends;
} else if (userInput == 7) {
      std::cout <<"July" << std::ends;
} else if (userInput == 8) {
      std::cout <<"August" << std::ends;
} else if (userInput == 9) {
      std::cout <<"September" << std::ends;
} else if (userInput == 10) {
      std::cout <<"October" << std::ends;
} else if (userInput == 11) {
      std::cout <<"November" << std::ends;
} else if (userInput == 12) {
      std::cout <<"December" << std::ends;
  } else {
      std::cout <<"You are not enter a number between 1-12!!!" << std::ends;
  }
}
