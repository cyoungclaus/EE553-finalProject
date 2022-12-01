#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <iomanip>
#include <ios>

#pragma comment(lib, "Winmm.lib")

using namespace std;

void introGUI()
{
	cout << "**********" << endl;
	cout << "Welcome to our project!";
	cout << "Please type in the number of the song you want to play: " << endl;
	cout << left << setfill('.') << setw(30) << "1 for"  << right << setfill('.') << setw(20) << "'Follow You' by Imagine Dragons" << endl;
	cout << left << setfill('.') << setw(30) << "2 for" << right << setfill('.') << setw(20) << "'good 4 u' by Olivia Rodrigo" << endl;
}

int main() {
	introGUI();
	PlaySound(TEXT("Follow You.wav"), NULL, SND_ASYNC); 
	Sleep(5000);
	PlaySound(NULL, 0, 0);

}