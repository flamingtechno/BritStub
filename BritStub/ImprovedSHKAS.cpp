/* Joshua Bernally
 * An improved version of a certain Github test.
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	// This is the area where we put our code!

	int SkynetTime = false;


	while (SkynetTime == false)
	{

		srand(time(NULL));

		int TerPos = rand() % 64 + 1, GridHigh = 64, GridLow = 1, LocPre = false, PrePlaAmount = 0, PreLinAmount = 0, PreRanAmount = 0, PreBinAmount = 0, PlayerGrid[8][8], LineGrid[8][8], RanGrid[8][8];

		string RetryInput;


		// The Player While loop.
		while (LocPre == false)
		{
			int c = 0, TarLocPre = 0;

			PrePlaAmount++;

			cout << endl << "Terrorist Position: Unknown for Human Testing." << endl;
			cout << "Enter your prediction:" << endl;
			cin >> TarLocPre;
			cout << "Human Prediction #" << PrePlaAmount << " : " << TarLocPre << endl;

			if (TarLocPre > TerPos)
			{
				cout << "The Human prediction was too high" << endl;
			}
			else if (TarLocPre < TerPos)
			{
				cout << "The Human prediction was too low." << endl;
			}
			else if (TarLocPre == TerPos)
			{
				cout << "The Human prediction was correct. Eradicating Terrorist at position." << endl;
				LocPre = true;
			}

			for (int a = 0; a < 8; a++)
			{
				cout << endl;

				for (int b = 0; b < 8; b++)
				{
					c++;
					if (PlayerGrid[a][b] == 100)
					{
						cout << " [ XX ] ";
					}
					else
					{
						if (c == TerPos && c == TarLocPre)
						{
							cout << " < !! > ";
						}
						else if (c == TarLocPre)
						{
							cout << " [ !! ] ";
							PlayerGrid[a][b] = 100;
						}
						else
						{
							cout << " [ " << setw(2) << c << " ] ";
						}
					}

				}

				cout << endl << endl;
			}

			system("pause");

		}
		LocPre = false;

		// The Linear Method AI loop.
		while (LocPre == false)
		{
			int c = 0;

			PreLinAmount++;

			int TarLocPre = PreLinAmount;

			if (TarLocPre == 1)
			{
				cout << "Calculating Terrorist Position Through AI, Utilizing the Linear Method...." << endl;
			}


			if (TarLocPre == TerPos)
			{
				cout << endl << "Terrorist Position: " << TerPos << endl;
				cout << "SHKAS Location Prediction (Linear Method) #" << PreLinAmount << ": " << TarLocPre << endl;
				cout << "Prediction was correct. Eradicating Terrorist at position." << endl;

				for (int a = 0; a < 8; a++)
				{
					cout << endl;

					for (int b = 0; b < 8; b++)
					{
						c++;

						if (LineGrid[a][b] == 100)
						{
							cout << " [ XX ] ";
						}
						else
						{
							if (c == TerPos && c == TarLocPre)
							{
								cout << " < !! > ";
							}
							else if (c == TarLocPre)
							{
								cout << " [ !! ] ";
							}
							else
							{
								cout << " [ " << setw(2) << c << " ] ";
							}
						}

					}

					cout << endl << endl;
				}

				LocPre = true;
				system("pause");
			}

			for (int a = 0; a < 8; a++)
			{

				for (int b = 0; b < 8; b++)
				{
					c++;

					if (c == TarLocPre)
					{
						LineGrid[a][b] = 100;
					}

				}

			}

		}
		LocPre = false;

		// The Random Method AI loop.
		while (LocPre == false)
		{
			int c = 0, TarLocPre = rand() % 64 + 1;

			PreRanAmount++;

			if (PreRanAmount == 1)
			{
				cout << "Calculating Terrorist Position Through AI, Utilizing the Random Method...." << endl;
			}


			if (TarLocPre == TerPos)
			{
				cout << endl << "Terrorist Position: " << TerPos << endl;
				cout << "SHKAS Location Prediction (Random Method) #" << PreRanAmount << ": " << TarLocPre << endl;
				cout << "Prediction was correct. Eradicating Terrorist at position." << endl;

				for (int a = 0; a < 8; a++)
				{
					cout << endl;

					for (int b = 0; b < 8; b++)
					{
						c++;

						if (RanGrid[a][b] == 100)
						{
							cout << " [ XX ] ";
						}
						else
						{
							if (c == TerPos && c == TarLocPre)
							{
								cout << " < !! > ";
							}
							else if (c == TarLocPre)
							{
								cout << " [ !! ] ";
							}
							else
							{
								cout << " [ " << setw(2) << c << " ] ";
							}
						}

					}

					cout << endl << endl;
				}

				LocPre = true;
				system("pause");
			}


			for (int a = 0; a < 8; a++)
			{
				for (int b = 0; b < 8; b++)
				{
					c++;

					if (RanGrid[a][b] == 100)
					{
						while (TarLocPre == c)
						{
							TarLocPre = rand() % 64 + 1;
						}
					}

					if (c == TarLocPre)
					{
						RanGrid[a][b] = 100;
					}

				}

			}

		}
		LocPre = false;

		// The Binary Method AI loop.
		while (LocPre == false)
		{
			int c = 0, TarLocPre = ((GridHigh - GridLow) / 2) + GridLow;

			PreBinAmount++;

			cout << endl << "Terrorist Position: " << TerPos << endl;
			cout << "SHKAS Location Prediction (Binary Method) #" << PreBinAmount << ": " << TarLocPre << endl;

			if (TarLocPre > TerPos)
			{
				cout << "Prediction too high. Eradicating higher predictions." << endl;
				GridHigh = TarLocPre;
			}
			else if (TarLocPre < TerPos)
			{
				cout << "Prediction too low. Eradicating lower predictions." << endl;
				GridLow = TarLocPre;
			}
			else if (TarLocPre == TerPos)
			{
				cout << "Prediction was correct. Eradicating Terrorist at position." << endl;
				LocPre = true;
			}

			for (int a = 0; a < 8; a++)
			{
				cout << endl;

				for (int b = 0; b < 8; b++)
				{
					c++;

					if (c == TerPos && c == TarLocPre)
					{
						cout << " < !! > ";
					}
					else if (c == TerPos)
					{
						cout << " < TP > ";
					}
					else if (c == TarLocPre)
					{
						cout << " [ !! ] ";
					}
					else if (c < GridLow)
					{
						cout << " [ XX ] ";
					}
					else if (c > GridHigh)
					{
						cout << " [ XX ] ";
					}
					else
					{
						cout << " [ " << setw(2) << c << " ] ";
					}


				}

				cout << endl << endl;
			}

			system("pause");

		}

		cout << endl << "TOTAL RESULTS" << endl;
		cout << "Total Human System Predictions: " << PrePlaAmount << endl;
		cout << "Total Linear System Predictions: " << PreLinAmount << endl;
		cout << "Total Random System Predictions: " << PreRanAmount << endl;
		cout << "Total Binary System Predictions: " << PreBinAmount << endl;

		if (PrePlaAmount <= PreLinAmount && PrePlaAmount <= PreRanAmount && PrePlaAmount <= PreBinAmount)
		{
			cout << "Preferred Skynet Search System : Player Prediction System" << endl;
		}
		else if (PreLinAmount <= PrePlaAmount && PreLinAmount <= PreRanAmount && PreLinAmount <= PreBinAmount)
		{
			cout << "Preferred Skynet Search System : Linear Prediction System" << endl;
		}
		else if (PreRanAmount <= PrePlaAmount && PreRanAmount <= PreLinAmount && PreRanAmount <= PreBinAmount)
		{
			cout << "Preferred Skynet Search System : Random Prediction System" << endl;
		}
		else if (PreBinAmount <= PrePlaAmount && PreBinAmount <= PreLinAmount && PreBinAmount <= PreRanAmount)
		{
			cout << "Preferred Skynet Search System : Binary Prediction System" << endl;
		}


		cout << endl << "Would you like to try again?" << endl << "Y/N" << endl;

		while ((RetryInput != "Y" || RetryInput != "y") || (RetryInput != "N" || RetryInput != "n"))
		{
			cin >> RetryInput;
		}

		if (RetryInput == "Y" || RetryInput == "y")
		{
			cout << "Here we go again!" << endl;
		}
		else if (RetryInput == "N" || RetryInput == "n")
		{
			cout << "Goodbye!" << endl;
			SkynetTime = true;
		}


	}

	// This command returns a variable from main(), thereby ending the program.
	return 0;
}