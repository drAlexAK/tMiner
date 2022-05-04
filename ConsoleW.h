#include <string>
#include <windows.h>
#include "Font.h"

class Console{

public:
    static int Init();
    static int Restore();
    static void PrintSymbol(int x, int y, std::string s, Font f);
    static void PrintString(std::string s, Font f);
    static void Flush();
    static void Clear();
    static void Cursor(bool enable);
    static void Out(const std::string &s);
    static int In();
};