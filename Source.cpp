#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <iomanip>
#include <ios>
#include <vector>
#include <filesystem>

#pragma comment(lib, "Winmm.lib")

using namespace std;
//namespace fs = std::filesystem;

class Playlist {
private:
	vector<filesystem::path> wav;
	int count = 0;

public:
	Playlist() {
		wav.clear();
	}

	Playlist(string path) {		// add songs in prenamed directory to vector
		string name;
		for (const auto & entry : filesystem::directory_iterator(path)) {
			wav.push_back(entry.path());
		}
	}

	void setFolder() {
		// need function to designate files in folder to array spots
	}

	void play(/*parameter*/) {
		//	play song
		string song = audioFileName;
		PlaySound(TEXT(audioFileName), NULL, SND_ASYNC);
		// Kruger, when you figure out what data type PlaySound requires,
		// add it as parameter
	}

	void pause() {
		// pause song
	}

	void stop() {
		//	 stop song
	}

	void skip() {
		//	skip song
	}

	void prev() {
		//	restart song/go back one song
	}

	void test() {			// delete before submission
		for (int i =0; i<wav.size(); i++) {
			cout << wav[i] << endl;
		}
	}

};

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

// this function needs to be in the class
// decision function requires this to work so Im leavin this here for now
void playingSong(const string audioFileName) {
	string song = audioFileName;
	PlaySound(TEXT(audioFileName), NULL, SND_ASYNC);

}

int choice;
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
	/*
	Playlist p("songs");
	p.test();
	*/

	/*
	bool loop = true;
	introGUI();
	while (loop) {
		cin >> choice;
		decision();

	}
	*/


	/*
	introGUI();
	PlaySound(TEXT("Follow You.wav"), NULL, SND_ASYNC); 
	Sleep(5000);
	PlaySound(NULL, 0, 0);
	*/

}