#pragma once
#include <filesystem>
#include <string>
#include <cstdlib>
using namespace std;

inline void run(const string& command)
{
    if (!command.empty())
    {
        system(command.c_str()); 
        cout << "\n";
    }
}
inline string getCurFName()
{
    filesystem::path curp = filesystem::current_path();
    string fn = curp.filename().string();
    return fn;
}
