#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <thread>

// Text formatting
#define ANSI_RESET "\033[0m"        // Reset all formatting
#define ANSI_BOLD "\033[1m"         // Bold text
#define ANSI_FAINT "\033[2m"        // Faint text
#define ANSI_ITALIC "\033[3m"       // Italic text
#define ANSI_UNDERLINE "\033[4m"    // Underlined text
#define ANSI_BLINK "\033[5m"        // Blinking text
#define ANSI_REVERSE "\033[7m"      // Reverse colors
#define ANSI_STRIKE "\033[9m"       // Strikethrough text

// Text colors
#define ANSI_BLACK "\033[30m"       // Black text
#define ANSI_RED "\033[31m"         // Red text
#define ANSI_GREEN "\033[32m"       // Green text
#define ANSI_YELLOW "\033[33m"      // Yellow text
#define ANSI_BLUE "\033[34m"        // Blue text
#define ANSI_MAGENTA "\033[35m"     // Magenta text
#define ANSI_CYAN "\033[36m"        // Cyan text
#define ANSI_WHITE "\033[37m"       // White text
// ANSI escape code for setting text color
#define ANSI_COLOR(r, g, b) "\033[38;2;" << (r) << ";" << (g) << ";" << (b) << "m"

// Background colors
#define ANSI_BG_BLACK "\033[40m"    // Black background
#define ANSI_BG_RED "\033[41m"      // Red background
#define ANSI_BG_GREEN "\033[42m"    // Green background
#define ANSI_BG_YELLOW "\033[43m"   // Yellow background
#define ANSI_BG_BLUE "\033[44m"     // Blue background
#define ANSI_BG_MAGENTA "\033[45m"  // Magenta background
#define ANSI_BG_CYAN "\033[46m"     // Cyan background
#define ANSI_BG_WHITE "\033[47m"    // White background

// Function to convert hex color code to RGB values
std::tuple<int, int, int> hexToRgb(const std::string& hex);

void printWithTypingEffect(const std::string& text, int delayMs);