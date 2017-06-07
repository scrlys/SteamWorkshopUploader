#pragma once

#include <iostream>

#ifdef DEBUG
#define DLOG(...) std::cerr << "## " << __VA_ARGS__;
#else
#define DLOG(...)
#endif

bool yes_no_option(std::string prompt);

std::string readline();

std::string readline_limit(int limit);

AppId_t get_appid_from_file();
