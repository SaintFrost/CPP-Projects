#include <iostream>

using namespace std;

float game202, game204, game206, game208, game302, cmpe101;

void CalculateGame202();
void CalculateGame204();
void CalculateGame206();
void CalculateGame208();
void CalculateGame302();
void CalculateCmpe101();
void CalculateAgpa(float note);
void CalculateGpa();

int main() {

    CalculateGame202();
    CalculateGame204();
    CalculateGame206();
    CalculateGame208();
    CalculateGame302();
    CalculateCmpe101();
    CalculateGpa();

    return 0;
}

void CalculateGame202() {
    float midterm, final, inclass, online, assignment1, assignment2;

    cout << "GAME 202" << endl;
    cout << "Please enter your midterm note: ";
    cin >> midterm;
    cout << "Please enter your final note: ";
    cin >> final;
    cout << "Please enter your assignment 1 note : ";
    cin >> assignment1;
    cout << "Please enter your assignment 2 note : ";
    cin >> assignment2;
    cout << "Please enter how many online hw you have done (?/12): ";
    cin >> online;
    cout << "Please enter how many inclass assignments you have done (?/12): ";
    cin >> inclass;

    float inclassNote = inclass * 3;
    float inclass_online = (inclassNote + online) * 60 / 100;
    float assignmentNote = (assignment1 * 10 / 100) + (assignment2 * 10 / 100);
    float midtermNote = midterm * 20 / 100;
    float finalNote = ((final * 52 / 100) * 60 / 100) + inclass_online;

    game202 = assignmentNote + midtermNote + finalNote;

    CalculateAgpa(game202);
}

void CalculateGame204() {
    float midterm, final, inclass, online, assignment1, assignment2;

    cout << "GAME 204" << endl;
    cout << "Please enter your midterm note: ";
    cin >> midterm;
    cout << "Please enter your final note: ";
    cin >> final;
    cout << "Please enter your assignment 1 note : ";
    cin >> assignment1;
    cout << "Please enter your assignment 2 note : ";
    cin >> assignment2;
    cout << "Please enter how many online hw you have done (?/12): ";
    cin >> online;
    cout << "Please enter how many inclass assignments you have done (?/12): ";
    cin >> inclass;

    float inclassNote = inclass * 3;
    float inclass_online = (inclassNote + online) * 60 / 100;
    float assignmentNote = (assignment1 * 10 / 100) + (assignment2 * 10 / 100);
    float midtermNote = midterm * 20 / 100;
    float finalNote = ((final * 52 / 100) * 60 / 100) + inclass_online;

    game204 = assignmentNote + midtermNote + finalNote;

    CalculateAgpa(game204);
}

void CalculateGame206() {
    float midterm, final;

    cout << "GAME 206" << endl;
    cout << "Please enter your midterm note: ";
    cin >> midterm;
    cout << "Please enter your final note: ";
    cin >> final;

    float midtermNote = midterm * 40 / 100;
    float finalNote = final * 60 / 100;

    game206 = midtermNote + finalNote;

    CalculateAgpa(game206);
}

void CalculateGame208() {
    float final, presentation, assignment;

    cout << "GAME 208" << endl;
    cout << "Please enter your presentation note: ";
    cin >> presentation;
    cout << "Please enter your assignment note: ";
    cin >> assignment;
    cout << "Please enter your final note: ";
    cin >> final;

    float presentationNote = presentation * 10 / 100;
    float assignmentNote = assignment * 30 / 100;
    float finalNote = final * 60 / 100;

    game208 = presentationNote + assignmentNote + finalNote;

    CalculateAgpa(game208);
}

void CalculateGame302() {
    float midterm, final, inclass, online, assignment1, assignment2;

    cout << "GAME 302" << endl;
    cout << "Please enter your midterm note: ";
    cin >> midterm;
    cout << "Please enter your final note: ";
    cin >> final;
    cout << "Please enter your assignment 1 note : ";
    cin >> assignment1;
    cout << "Please enter your assignment 2 note : ";
    cin >> assignment2;
    cout << "Please enter how many online hw you have done (?/12): ";
    cin >> online;
    cout << "Please enter how many inclass assignments you have done (?/12): ";
    cin >> inclass;

    float inclassNote = inclass * 3;
    float inclass_online = (inclassNote + online) * 60 / 100;
    float assignmentNote = (assignment1 * 10 / 100) + (assignment2 * 10 / 100);
    float midtermNote = midterm * 20 / 100;
    float finalNote = ((final * 52 / 100) * 60 / 100) + inclass_online;

    game302 = assignmentNote + midtermNote + finalNote;

    CalculateAgpa(game302);
}

void CalculateCmpe101() {
    float midterm, final, problem, assignment;

    cout << "CMPE 101" << endl;
    cout << "Please enter your midterm note: ";
    cin >> midterm;
    cout << "Please enter your final note: ";
    cin >> final;
    cout << "Please enter how many problems you have solved (?/14): ";
    cin >> problem;
    cout << "Please enter how many assignments you have done (?/4): ";
    cin >> assignment;

    float problemNote = problem / 14 * 10;
    float assignmentNote = assignment / 4 * 20;
    float midtermNote = midterm * 30 / 100;
    float finalNote = final * 40 / 100;

    cmpe101 = problemNote + assignmentNote + midtermNote + finalNote;

    CalculateAgpa(cmpe101);
}

void CalculateAgpa(float note) {
    if (note <= 100 && note >= 85) {
        cout << "Your AGPA is A" << endl;
    }
    else if (note < 85 && note >= 75) {
        cout << "You AGPA is A-" << endl;
    }
    else if (note < 75 && note >= 70) {
        cout << "Your AGPA is B+" << endl;
    }
    else if (note < 70 && note >= 65) {
        cout << "Your AGPA is B" << endl;
    }
    else if (note < 65 && note >= 60) {
        cout << "Your AGPA is B-" << endl;
    }
    else if (note < 60 && note >= 55) {
        cout << "Your AGPA is C+" << endl;
    }
    else if (note < 55 && note >= 50) {
        cout << "Your AGPA is C" << endl;
    }
    else if (note < 50 && note >= 45) {
        cout << "Your AGPA is C-" << endl;
    }
    else if (note < 45 && note >= 40) {
        cout << "Your AGPA is D+" << endl;
    }
    else if (note < 40 && note >= 35) {
        cout << "Your AGPA is D" << endl;
    }
    else if (note < 35 && note >= 0) {
        cout << "Your AGPA is F" << endl;
    }
    else {
        cout << "Impossible note - Error!";
    }
}

void CalculateGpa() {
    float cgpa = (game202 + game204 + game206 + game208 + game302 + cmpe101) / 6;
    float gpa = cgpa / 25; // all credits are the same for these courses

    cout << "Your CGPA is: " << cgpa << endl;
    cout << "Your GPA is: " << gpa;
}
