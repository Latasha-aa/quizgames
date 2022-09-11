#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a, b, score=0;
    cout<<"On which Topic you want to start your Quiz:" << endl;
    cout<< "1. sports\t2. Series\n3. Technology\t4. Bookreading\n";
    cin >> a;
    if (a == 1)
    {
        cout << "You have decided to start your quiz on sport: " << endl;
        cout << "Here are 5 questions and each question contains 200 points" << endl;
        cout << "A which Games does messi play:" << endl;
        cout << "1. Football\t2. Cricket\t13. Hockey\t4. Tennis\n"
             << endl;
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nC. What is the chemical formula of acetic acid:\n";
        cout << "1.CH3COOH\t2. CH3COOH\n3. Ch3COOH\t4.CH3COO\n";
        cin >> b;
        if (b == 2)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nD. Which among these is not a computer language :\n";
        cout << "1.C++\t2. Python\n3. Dev\t4. Java\n";
        cin >> b;
        if (b == 4)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nE. In which Year, India became Independent :\n";
        cout << "1. 1959\t2. 1967\n3. 1942\t4. 1947\n";
        cin >> b;
        if (b == 4)
            score = score + 100;
        else
            score = score - 50;
    }
    cout << "Your Final score is " << score;
      if (a == 2)
    {
        cout << "You have decided to start your quiz on sport: " << endl;
        cout << "Here are 5 questions and each question contains 200 points" << endl;
        cout << "What year did the Titanic sink in the Atlantic Ocean on 15 April, on its maiden voyage from Southampton: " << endl;
        cout << "1. 1912\t2. 1867\t3. 1911\t4. 1920\n"
             << endl;
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nC. In which part of your body would you find the cruciate ligament:\n";
        cout << "1.foot\t2.hand\n3.finger\t4.Knee\n";
        cin >> b;
        if (b == 4)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nD. which programming language is most popular in the world :\n";
        cout << "1.C++\t2. Python\n3. HTML\t4. Java \n";
        cin >> b;
        if (b == 2)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nE. which is the oldest religion in the world :\n";
        cout << "1. Buddhism\t2. Christians\n3.  Islam\t4. Hinduism\n";
        cin >> b;
        if (b == 4)
            score = score + 100;
        else
            score = score - 50;
    }
    cout << "Your Final score is " << score;
    getch;

  if (a == 3)
    {
        cout << "You have decided to start your quiz on sport: " << endl;
        cout << "Here are 5 questions and each question contains 200 points" << endl;
        cout << " Which of the following is NOT the language enshrined in the eighth schedule of the Indian Constitution, as the language of the state:" << endl;
        cout << "1. Nepali\t2.  Kashmiri\t13. English\t4. Konkani\n"
             << endl;
        cin >> b;
        if (b == 3)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nC. The capital of Uttarakhand is.... :\n";
        cout << "1.Mussoorie\t2. Dehra Dun\n3. Nainital\t4. None of these\n";
        cin >> b;
        if (b == 2)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nD.  Geet Govind is a famous creation of.... :\n";
        cout << "1.Bana Bhatt\t2.  Kalidas\n3.  Jayadev\t4. Bharat Muni\n";
        cin >> b;
        if (b == 3)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nE. World Trade Organization came into existence in…… :\n";
        cout << "1. 1959\t2. 1967\n3. 1942\t4. 1995\n";
        cin >> b;
        if (b == 4)
            score = score + 100;
        else
            score = score - 50;
    }
    cout << "Your Final score is " << score;

      if (a == 4)
    {
        cout << "You have decided to start your quiz on sport: " << endl;
        cout << "Here are 5 questions and each question contains 200 points" << endl;
        cout << "According to the Constitution of India, which of the following is NOT one of the main organs of the Government:" << endl;
        cout << "1. Bureaucracy\t2.  Executive\t13. Judiciary\t4. Legislature\n"
             << endl;
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nC. Name the place known as the Roof of the World:\n";
        cout << "1.kolkata\t2. Delhi\n3. Tibet\t4. West bangal\n";
        cin >> b;
        if (b == 3)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nD. How many years are there in one Millenium :\n";
        cout << "1.1000 year\t2. 100 year\n3. 10000 year\t4. 10 year\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
        cout << "\nE.  Which is the farthest planet from earth:\n";
        cout << "1.  Neptune\t2. Venus\n3. Mars\t4. Earth\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
    }
    cout << "Your Final score is " << score;
    return 0;
}