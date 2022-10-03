#include "speechManager.h"

int main(void)
{
	int choice;
	SpeechManager sm;
	while (1)
	{
		sm.show_Menu();
		cout << "ÇëÑ¡Ôñ¹¦ÄÜ" << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
				sm.startSpeech();
				break;
			case 2:
				sm.showRecord();
				break;
			case 3:
				sm.clearRecord();
				break;
			case 0:
				sm.exit_System();
				break;
			default:
				system("cls");
				break;
		}
	}
	return 0;
}