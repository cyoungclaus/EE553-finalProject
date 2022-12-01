#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <iomanip>
#include <ios>

#pragma comment(lib, "Winmm.lib")

using namespace std;

int choice;
void introGUI()
{
	cout << "**********" << endl;
	cout << "Welcome to our project!" << endl;;
	cout << "Please type in the number of the song you want to play: " << endl;
	cout << left << setfill('.') << setw(30) << "1 for" << right << setfill('.') << setw(20) << "'Follow You' by Imagine Dragons" << endl;
	cout << left << setfill('.') << setw(30) << "2 for" << right << setfill('.') << setw(20) << "'good 4 u' by Olivia Rodrigo" << endl;
}
void decision()
{
	switch (choice) {
	case 1:
		PlaySound(TEXT("Follow You.wav"), NULL, SND_ASYNC);
		cout << "Playing 'Follow You' by Imagine Dragons!" << endl;
		break;

	case 2:
		PlaySound(TEXT("good 4 u.wav"), NULL, SND_ASYNC);
		cout << "Playing 'good 4 u' by Olivia Rodrigo!" << endl;
		break;

	default:
		cout << "Bad choice! Please try again: " << endl;
		break;
	}
}

int main() {
	bool loop = true;
	introGUI();
	while (loop) {
		cin >> choice;
		decision();

	}

	/*
	PlaySound(TEXT("Follow You.wav"), NULL, SND_ASYNC);
	Sleep(5000);
	PlaySound(NULL, 0, 0);
	PlaySound(TEXT("good 4 u.wav"), NULL, SND_ASYNC);
	Sleep(5000);
	PlaySound(NULL, 0, 0);
	*/
}