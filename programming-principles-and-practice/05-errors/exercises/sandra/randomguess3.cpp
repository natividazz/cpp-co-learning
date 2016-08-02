// randomguess3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include<cstdlib>


using namespace std;

int main()
{
	int iSecret, iGuess;

	/* initialize random seed: */
	srand(time(NULL));

	/* generate secret number between 1 n 100: */
	iSecret = rand() % 100 + 1;
	//cout << "The secret number is " << iSecret <<"\n";

	do {
		cout << "Guess the number (1 to 100):\n";
		cin >> iGuess;
		if (iSecret<iGuess)
			cout << "The secret number is lower\n";
		else if (iSecret>iGuess)
			cout << "The secret number is higher\n";
	} while (iSecret != iGuess);

	cout << "Congratulations!You guessed that the secret number was " << iSecret << "\n";
	return 0;
}
