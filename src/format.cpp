#include "../include/format.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <thread>

// Function to convert hex color code to RGB values
std::tuple<int, int, int> hexToRgb(const std::string& hex) {
    if (hex.size() != 7 || hex[0] != '#') {
        throw std::invalid_argument("Invalid hex color format. Expected format is #RRGGBB.");
    }

    int r, g, b;
    // Parse the string starting from index 1 to skip the '#' character
    // std::stoi converts the substring to an integer, using 16 as the base for conversion
    r = std::stoi(hex.substr(1, 2), nullptr, 16);
    g = std::stoi(hex.substr(3, 2), nullptr, 16);
    b = std::stoi(hex.substr(5, 2), nullptr, 16);

    return std::make_tuple(r, g, b);
}

void printWithTypingEffect(const std::string& text, int delayMs) {
    for (char c : text) {
        std::cout << c << std::flush; // Print character without buffering

        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs)); // Introduce delay
    }
}