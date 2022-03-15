// Copyright 2022. KyoungChan Cho. All Rights Reserved.

#include <iostream>

/**
 * Calculating with integers
 * @return Exit status
*/

int main()
{
    int FirstAltitude;
    int SecondAltitude;

    // Prompt for and get the altitude for a location as an int
    std::cout << "Enter the first altitude: ";
    std::cin >> FirstAltitude;

    // Prompt for and get the altitude for a second location as an int
    std::cout << "Enter the second altitude: ";
    std::cin >> SecondAltitude;

    // Calculate and display the altitude change you'd experience moving from the first point to the second point
    std::cout << "Altitude change: " << SecondAltitude - FirstAltitude << "\n";
}

