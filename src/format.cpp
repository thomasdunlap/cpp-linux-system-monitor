#include <string>
#include <iomanip>
#include <sstream>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds[[maybe_unused]]) {
    int h, m, s;
    std::stringstream ret;
    h = (seconds / 3600) % 100; // mod 100 to always be two digits
    m = (seconds / 60) % 60;
    s = seconds % 60;
    ret << std::setfill('0') << std::setw(2) << h << ":"
        << std::setfill('0') << std::setw(2) << m << ":"
        << std::setfill('0') << std::setw(2) << s; 
    
    return ret.str(); 
}