#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <iomanip>
#include <ios>
#include <mciapi.h>


#pragma comment(lib, "Winmm.lib")

using namespace std;

int choice;
string song;

void introGUI()
{
	cout << "**********" << endl;
	cout << "Welcome to our project!" << endl;;
	cout << "Please type in the number of the song you want to play: " << endl;
	cout << left << setfill('.') << setw(30) << "1 for" << right << setfill('.') << setw(20) << "'Follow You' by Imagine Dragons" << endl;
	cout << left << setfill('.') << setw(30) << "2 for" << right << setfill('.') << setw(20) << "'good 4 u' by Olivia Rodrigo" << endl;
	cout << "**********" << endl;
	cout << "For playback controls: " << endl;
	cout << left << setfill('.') << setw(30) << "3 for" << right << setfill('.') << setw(20) << "Stopping the currently playing song" << endl;

}

void playingSong(const string audioFileName)
{
	string song = audioFileName;
	PlaySound(TEXT(audioFileName), NULL, SND_ASYNC);

}
void decision()
{
	switch (choice) {
	case 1:
		//PlaySound(TEXT("FollowYou.wav"), NULL, SND_ASYNC);
		//mciSendString("play \"FollowYou.wav\" repeat", NULL, 0, NULL);
		playingSong("Follow You.wav");
		cout << "Playing 'Follow You' by Imagine Dragons!" << endl;
		break;

	case 2:
		PlaySound(TEXT("good 4 u.wav"), NULL, SND_ASYNC);
		cout << "Playing 'good 4 u' by Olivia Rodrigo!" << endl;
		break;

	case 3:
		PlaySound(NULL, 0, 0);
		cout << "Stopped the song being played!" << endl;
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