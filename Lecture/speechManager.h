#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>
#include <fstream>
#include "speaker.h"
using namespace std;

class SpeechManager
{
public:
	vector<int> v1;
	vector<int> v2;
	vector<int> vVictory;
	map<int, Speaker>m_Speaker;
	int m_Index;
	bool fileIsEmpty;
	map<int, vector<string>>m_Record;
	SpeechManager(void);
	void show_Menu(void);
	void exit_System(void);
	void initSpeech(void);
	void createSpeaker(void);
	void startSpeech(void);
	void speechDraw(void);
	void speechContest(void);
	void showScore(void);
	void saveRecord(void);
	void loadRecord(void);
	void showRecord(void);
	void clearRecord(void);
	~SpeechManager(void);
};