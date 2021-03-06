#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <map>
#include "Objects.h"
#include "Console.h"

class Print{
    static void PrintObjectInPlace(int x, int y, OBJECT_TYPE object_type, OBJECT_STATE object_state);
    static int xBeginCoor;
    static int yBeginCoor;
public:
    static std::map<OBJECT_TYPE, Console::CONVERTER> oChar;
    static std::map<OBJECT_STATE, Font> oState;

    static void PutFlag(int x, int y);
    static void PutHidden(int x, int y);
    static void PutTip(int x, int y, OBJECT_TYPE type);
    static void MoveCursor(int x, int y, OBJECT_TYPE type1, int x2, int y2, OBJECT_TYPE type2);
    static void PrintString(std::string s);
    static void PrintLose(int x, int y, OBJECT_STATE state);
    static void PrintWin();
    static void PrintDead();
    static void PrintLogo();
    static void PrintControl();
    static void PrintChar(int x, int y, Console::CONVERTER symbol);

    static void RemoveFlag(int x, int y, OBJECT_TYPE type, OBJECT_STATE state);
    static void PrintCursor(int x, int y, OBJECT_TYPE type);
    static void RemoveCursor(int x, int y, OBJECT_TYPE type);
};
