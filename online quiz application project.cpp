#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Question {
public:
    string question;
    string option1, option2, option3, option4;
    int correctAnswer;

    Question(string q, string o1, string o2, string o3, string o4, int ans) {
        question = q;
        option1 = o1;
        option2 = o2;
        option3 = o3;
        option4 = o4;
        correctAnswer = ans;
    }
};

int main() {
    string username, password;

    cout << "========== ONLINE QUIZ APPLICATION ==========\n\n";

    // User Registration
    cout << "User Registration\n";
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    cout << "\nRegistration Successful!\n";
    cout << "Welcome, " << username << "!\n\n";

    // Question Bank
    vector<Question> quiz;

    quiz.push_back(Question(
        "1. Who developed C++?",
        "Dennis Ritchie",
        "Bjarne Stroustrup",
        "James Gosling",
        "Guido van Rossum",
        2));

    quiz.push_back(Question(
        "2. Which symbol is used for comments in C++?",
        "//",
        "##",
        "**",
        "%%",
        1));

    quiz.push_back(Question(
        "3. Which loop executes at least once?",
        "for",
        "while",
        "do-while",
        "None",
        3));

    quiz.push_back(Question(
        "4. Which keyword is used to create an object?",
        "new",
        "class",
        "object",
        "create",
        1));

    quiz.push_back(Question(
        "5. C++ is a ______ language.",
        "Procedural",
        "Object-Oriented",
        "Scripting",
        "Markup",
        2));

    int score = 0, answer;

    cout << "\n========== QUIZ START ==========\n";

    for (int i = 0; i < quiz.size(); i++) {
        cout << "\n" << quiz[i].question << endl;
        cout << "1. " << quiz[i].option1 << endl;
        cout << "2. " << quiz[i].option2 << endl;
        cout << "3. " << quiz[i].option3 << endl;
        cout << "4. " << quiz[i].option4 << endl;

        cout << "Enter your answer (1-4): ";
        cin >> answer;

        if (answer == quiz[i].correctAnswer) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong!\n";
        }
    }

    // Score
    cout << "\n========== RESULT ==========\n";
    cout << "Username : " << username << endl;
    cout << "Score : " << score << " / " << quiz.size() << endl;

    // Leaderboard
    cout << "\n========== LEADERBOARD ==========\n";
    cout << "Player : " << username << endl;
    cout << "Score  : " << score << endl;

    if (score == quiz.size())
        cout << "Excellent Performance!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}