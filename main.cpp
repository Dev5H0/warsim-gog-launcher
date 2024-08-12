#include <iostream>
#include <string>
#include <windows.h>


using std::cout;
using std::cerr;
using std::endl;
using std::string;

int launchGame(const std::string &gameExecutable) {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    string cmd = "cmd.exe /c start " + gameExecutable + " &";
    if (!CreateProcess(NULL, const_cast<LPSTR>(cmd.c_str()), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
        cerr << "Failed to create process." << GetLastError() << endl;
        return 1;
    }
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return 0;
}

int main() {
    string gameExecutable = "Warsim.exe";
    return launchGame(gameExecutable);
}
