#include <iostream>
#include <vector>
using namespace std;

void tampilkanNilai(vector<int> nilai) {
    cout << "\nScore List\n";
    for (int i = 0; i < nilai.size(); i++) {
        cout << "Score-" << i + 1 << " : " << nilai[i] << endl;
    }
}

int tampilkanTotal(vector<int> nilai) {
    int total = 0;
    for (int i = 0; i < nilai.size(); i++) {
        total += nilai[i];
    }
    return total;
}

int tampilkanTinggi(vector<int> nilai) {
    int max = nilai[0];
    for (int i = 1; i < nilai.size(); i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    return max;
}

int tampilkanRendah(vector<int> nilai) {
    int min = nilai[0];
    for (int i = 1; i < nilai.size(); i++) {
        if (nilai[i] < min) {
            min = nilai[i];
        }
    }
    return min;
}

int main() {
    string nama;
    int jumlah;
    vector<int> nilai;

    cout << "===== STUDENT SCORE SYSTEM =====\n\n";
    cout << "Enter your name : ";
    cin >> nama;

    cout << "Number of scores : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        int n;
        cout << "Score-" << i + 1 << " : ";
        cin >> n;
        nilai.push_back(n);
    }

    tampilkanNilai(nilai);

    int total = tampilkanTotal(nilai);
    double rata = (double)total / nilai.size();

    cout << "\n======================\n" << endl;
    cout << "Name          : " << nama << endl;
    cout << "Total         : " << total << endl;
    cout << "Average       : " << rata << endl;
    cout << "Highest Score : " << tampilkanTinggi(nilai) << endl;
    cout << "Lowest Score  : " << tampilkanRendah(nilai) << endl;

    return 0;
}