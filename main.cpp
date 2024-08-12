#include <cstdlib>
#include <iostream>

int start_warsim() {
    #ifdef _WIN64
        std::cout << "Starting Warsim (win64)." << std::endl;
        std::system("start Warsim.exe &");
        return 0;
    #elif _WIN32
        std::cout << "Starting Warsim (win32)." << std::endl;
        std::system("start Warsim.exe &");
        return 0;
    #elif __linux__
        std::cout << "Startin Warsim (linux)." << std::endl;
        std::system("wine explorer Warsim.exe &");
        return 0;
    #endif
    std::cout << "Failed to start Warsim." << std::endl;
    return 1;
}

int main() {
    return start_warsim();
}
