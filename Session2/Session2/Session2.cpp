#include <iostream>
#include <time.h>
using namespace std;

int ExerciseOneAndTwo()
{
	srand(time(NULL));

	const int PLAYER_AMOUNT = 100;
	int scores[PLAYER_AMOUNT];
	int ranges[4] = { 0 };


	for (int i = 0; i < PLAYER_AMOUNT; i++)
	{
		scores[i] = rand() % 101;
		//cout << "Score in Array: " << scores[i] << endl;

		if (scores[i] <= 40)
		{
			// Novice
			ranges[0]++;
		}
		else if (scores[i] <= 60)
		{
			// Intermediate
			ranges[1]++;
		}
		else if (scores[i] <= 80)
		{
			// Advanced
			ranges[2]++;
		}
		else
		{
			// Hardcore
			ranges[3]++;
		}
	}

	bool passCheck = false;
	if (ranges[0] + ranges[1] + ranges[2] + ranges[3] == 100)
	{
		passCheck = true;
		cout << "Pass" << endl;
	}
	else
	{
		passCheck = false;
		cout << "Fail" << endl;
	}

	cout << "Novice (0-40): " << ranges[0] << endl << "Intermideate (41-60): " << ranges[1] << endl << "Advanced (61-80): " << ranges[2] << endl << "Hardcore (81-100): " << ranges[3] << endl;
	return 0;
}
int ExerciseThreeAndFour()
{

	enum MovementStates { stand, walk, run, crawl };
	MovementStates state;

	srand(time(NULL));
	state = (MovementStates)((rand() % 4));

	for (int i = 0; i < 10; i++)
	{

		cout << "State : " << state << endl;

		switch (state)
		{
		case stand:
			cout << "Current state is 'Stand'.\nYou can transition into 'Walk' or 'Crawl'." << endl;

			do
			{
				state = (MovementStates)((rand() % 4));
			} while (state != walk && state != crawl);

			break;
		case walk:
			cout << "Current state is 'Walk'.\nYou can transition into 'Stand' or 'Run'." << endl;

			do
			{
				state = (MovementStates)((rand() % 4));
			} while (state != stand && state != run);

			break;
		case run:
			cout << "Current state is 'Run'.\nYou can transition into 'Walk'." << endl;

			do
			{
				state = (MovementStates)((rand() % 4));
			} while (state != walk);

			break;
		case crawl:
			cout << "Current state is 'Crawl'.\nYou can transition into 'Stand'." << endl;

			do
			{
				state = (MovementStates)((rand() % 4));
			} while (state != stand);


			break;
		default:
			cout << "Error! Invalid state :(" << endl;
		}
	}

	return 0;
}


int main()
{
	//ExerciseOneAndTwo();
	//ExerciseThreeAndFour();
}