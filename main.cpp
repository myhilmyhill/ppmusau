#include <iostream>
#include "ppmusau.h"

int main()
{
    std::cout << "start" << std::endl;
    if (MT_LoadMusicEngine())
    {
        std::cout << "ok" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }
    std::cout << "end" << std::endl;
    MT_FreeMusicEngine();
    return 0;
}
