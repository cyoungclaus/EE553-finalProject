#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "Winmm.lib")
using namespace std;

int main() {

	PlaySound(TEXT("Song.wav"), NULL, SND_ASYNC);
	Sleep(5000);
	PlaySound(NULL, 0, 0);

}