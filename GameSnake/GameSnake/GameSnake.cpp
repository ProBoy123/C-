// GameSnake.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "TXLib.h"

void DrawPartSnake (int x, int y);

int main()
    {

    txCreateWindow (1000, 1000);

    int i = 10;

    while (!GetAsyncKeyState (VK_ESCAPE))
        {

        
        DrawPartSnake (i, 10); // голова
        DrawPartSnake (i-20, 10);
        DrawPartSnake (i-40, 10);
        DrawPartSnake (i-60, 10);
        DrawPartSnake (i-80, 10);

        txSleep (100);

        txSetFillColor (RGB (0, 0, 0));
        txClear ();

        i+=10;
        if (i >= 1000)
            {
            i = 10;
            }


        }


    return 0;
    }

void DrawPartSnake (int x, int y)
    {
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txCircle (x, y, 10);

    }
