#define _WIN32_WINNT 0x0500

#ifdef _WIN32
    #include <windows.h>
#endif

#include <SFML/Graphics.hpp>
#include "game.cpp"

int main()
{
    cout << "DATA_PATH: " << DATA_PATH << endl;
#ifdef _WIN32
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_HIDE );
#endif

    Game gameobj;
    gameobj.GameLoop();
    return 0;
}
