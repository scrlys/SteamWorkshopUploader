#include <iostream>
#include <fstream>
#include <string>

#include <steam_api.h>

#include "util.h"

bool yes_no_option(std::string prompt)
{
    std::cout << prompt << ": ";
    char result;
    std::cin.get(result);
    switch (result) {
        case 'y':
        case 'Y':
            return true;
        default:
            return false;
    }
}

std::string readline()
{
    std::string line;
    std::getline(std::cin, line);
    return line;
}

std::string readline_limit(int limit)
{
    for (;;) {
        std::string line = readline();

        if (!(line.length() > limit)) {
            return line;
        } else {
            std::cerr << "The input exceeds the limit of " << limit
                << " by " << line.length() - limit << " characters"
                << ".\n";
        }
    }
}


AppId_t get_appid_from_file()
{
    AppId_t appid;
    char* buffer = new char[33]; // Include 1 more character in case of newline
    std::ifstream file_appid("steam_appid.txt", std::ios::in);

    // Read whatever we can
    file_appid >> buffer;

    // Get the app id. Note that AppId_t is typedef'd to uint32
    sscanf(buffer, "%zd", &appid);
    return appid;
}

