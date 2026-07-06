# Student Score System - C++

📌 Project Overview

A simple yet functional C++ application for managing student scores. This program utilizes Vector (dynamic arrays) to store score data flexibly, along with dedicated functions to calculate total, average, highest, and lowest scores.

Key Features:

· Input student name and number of scores
· Dynamic score input using for loop and vector
· Display complete score list
· Automatic calculation of:
  · Total Score
  · Average Score
  · Highest Score
  · Lowest Score

---

🧠 Code Logic Explanation

1. Header & Libraries

```cpp
#include <iostream>
#include <vector>
using namespace std;
```

· iostream → Handles input (cin) and output (cout) operations.
· vector → Provides dynamic array functionality for flexible score storage.

---

2. displayScores() Function

```cpp
void displayScores(vector<int> scores) {
    cout << "\nScore List\n";
    for (int i = 0; i < scores.size(); i++) {
        cout << "Score-" << i + 1 << " : " << scores[i] << endl;
    }
}
```

Purpose: Iterates through the vector and displays each score with its index number.

---

3. displayTotal() Function

```cpp
int displayTotal(vector<int> scores) {
    int total = 0;
    for (int i = 0; i < scores.size(); i++) {
        total += scores[i];
    }
    return total;
}
```

Purpose: Calculates the sum of all scores using a loop and returns the total.

---

4. displayHighest() & displayLowest() Functions

```cpp
int displayHighest(vector<int> scores) {
    int max = scores[0];
    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    return max;
}

int displayLowest(vector<int> scores) {
    int min = scores[0];
    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    return min;
}
```

Purpose: These functions determine the maximum and minimum values by comparing each element against the current highest/lowest. Initial values are set from the first element (scores[0]).

---

5. main() Function

```cpp
int main() {
    string name;
    int count;
    vector<int> scores;

    cout << "===== STUDENT SCORE SYSTEM =====\n\n";
    cout << "Name : ";
    cin >> name;
    cout << "Number of Scores : ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        int n;
        cout << "Score-" << i + 1 << " : ";
        cin >> n;
        scores.push_back(n);
    }

    displayScores(scores);

    int total = displayTotal(scores);
    double average = (double)total / scores.size();

    cout << "\n===== RESULT =====\n";
    cout << "Name          : " << name << endl;
    cout << "Total         : " << total << endl;
    cout << "Average       : " << average << endl;
    cout << "Highest Score : " << displayHighest(scores) << endl;
    cout << "Lowest Score  : " << displayLowest(scores) << endl;

    return 0;
}
```

Purpose: The main program flow:

1. Accepts student name and number of scores.
2. Uses a for loop to collect scores and store them in vector using push_back().
3. Calls helper functions to compute and display results.

---

💻 How to Run

Using Online Compiler (Replit, Programiz, etc.)

· Copy the code, paste it into the editor, and click Run.

Using Terminal (Command Prompt / Linux / Mac)

1. Navigate to the folder containing main.cpp.
2. Compile the program:
   ```bash
   g++ main.cpp -o student_score
   ```
3. Run the executable:
   ```bash
   ./student_score   # (Mac/Linux)
   student_score.exe # (Windows)
   ```

---

📝 Sample Output

```
===== STUDENT SCORE SYSTEM =====

Name : Faris
Number of Scores : 5
Score-1 : 80
Score-2 : 90
Score-3 : 75
Score-4 : 85
Score-5 : 95

Score List
Score-1 : 80
Score-2 : 90
Score-3 : 75
Score-4 : 85
Score-5 : 95

===== RESULT =====
Name          : Faris
Total         : 425
Average       : 85
Highest Score : 95
Lowest Score  : 75
```

---

📌 Key Concepts Demonstrated

Concept Implementation
Dynamic Arrays Using vector<int> for flexible data storage
Modular Functions Separate functions for display, total, highest, lowest
Loops for loop for input and iteration
Conditionals if statements for min/max comparison
Pass by Value Functions receive vector as parameter.
