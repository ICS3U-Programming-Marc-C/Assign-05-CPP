// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program calculates slope and y-intercept


#include <iostream>

// Defining the function that calculates the slope
float slope(float x1, float y1, float x2, float y2) {
       float m = (y2 + (-1 * y1)) / (x2 + (-1 * x1));
       return m;
}

// Defining the function that calculates y-int
float yInt(float x1, float y1, float m) {
       float b = y1 - (x1 * m);
       return b;
}

int main() {
       // Declaring variables
       std::string userX1, userY1, userX2, userY2;
       float userX1F, userY1F, userX2F, userY2F, m, b;

       // Ask user for the x and y coordinates
       std::cout << "Enter x1 : ";
       std::cin >> userX1;

       std::cout << "Enter y1 : ";
       std::cin >> userY1;

       std::cout << "Enter x2 : ";
       std::cin >> userX2;

       std::cout << "Enter y2 : ";
       std::cin >> userY2;

       try {
              // Casting to floats
              userX1F = std::stof(userX1);
              userY1F = std::stof(userY1);
              userX2F = std::stof(userX2);
              userY2F = std::stof(userY2);

              // Call slope function
              m = slope(userX1F, userY1F, userX2F, userY2F);

              // Call y-int function
              b = yInt(userX1F, userY1F, m);

              // Display the result
              std::cout << "For a line with the points ";
              std::cout << "(" << userX1F << "," << userY1F;
              std::cout << ") and (" << userX2F << "," << userY2F;
              std::cout << ") the y-intercept is " << b << " and the slope is ";
              std::cout << m << "\n";
       } catch (std::invalid_argument) {
           // The user did not enter a number
           std::cout << "Invalid input\nPlease try again with proper numbers.";
              }
       }

