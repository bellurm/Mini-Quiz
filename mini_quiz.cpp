#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "Turkish");
	
	cout << "NOTE: Please choose A, B, C or D." << endl << endl;
	
	string que1, que2, que3, que4;
	string A, B, C, D;
	string trueanswer;
	string answer;
	
	int questions = 0;
	int total = 0;
	
	que1 = "Which command changes language settings in Kali Linux?";
	cout << que1 << endl;
	questions++;
	
	if(questions == 1)
	{
		A = "A: setxkbmap";
		B = "B: chmod";
		C = "C: sudo su";
		D = "D: rm -rf";
		trueanswer = "A";
		cout << A << endl << B << endl << C << endl << D << endl;
		cout << "Answer: ";
		cin >> answer;
		if(answer == trueanswer)
		{
			cout << "Congratulations, this is the correct answer! " << endl;
			total += 1;
		}
		else
		{
			cout << "Wrong answer! " << endl;
			system("PAUSE");
		}
	}
	
	que2 = "Which one is not a programming language?";
	cout << que2 << endl;
	questions++;
	
	if(questions == 2)
	{
		A = "A: Python";
		B = "B: C++";
		C = "C: Ruby";
		D = "D: HTML";
		trueanswer = "D";
		cout << A << endl << B << endl << C << endl << D << endl;
		cout << "Answer: ";
		cin >> answer;
		if(answer == trueanswer)
		{
			cout << "Congratulations, this is the correct answer! " << endl;
			total += 1;
		}
		else
		{
			cout << "Wrong answer! " << endl;
			system("PAUSE");
		}
	}
	
	que3 = "Which is not one of the ways to protect yourself on the Internet?";
	cout << que3 << endl;
	questions++;
	
	if(questions == 3)
	{
		A = "A: Strong password";
		B = "B: VPN";
		C = "C: Public networks (cafe etc.)";
		D = "D: Check the website's connection (http / https)";
		trueanswer = "C";
		cout << A << endl << B << endl << C << endl << D << endl;
		cout << "Answer: ";
		cin >> answer;
		if(answer == trueanswer)
		{
			cout << "Congratulations, this is the correct answer! " << endl;
			total += 1;
		}
		else
		{
			cout << "Wrong answer! " << endl;
			system("PAUSE");
		}
	}
	if(total == 3)
	{
		cout << "Success rate: 100%";
	}
	else if(total == 2)
	{
		cout << "1 wrong answer!";
	}
	else if(total == 1)
	{
		cout << "2 wrong answer!";
	}
	else
	{
		cout << "3 wrong answer!";
	}
	
}

