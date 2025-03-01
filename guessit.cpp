#include <bits/stdc++.h>
using namespace std;

int score_point(int stample);
int AI_RandomNumber();
int get_Num();
void check_key(int ply, int AI);

int hp = 100;
int guess_count = 0;

void new_game();
bool ask_player();

int main() {
    srand(time(0));

    while (true) {
        int key_num = AI_RandomNumber();
        int player_num;

        do {
            player_num = get_Num();
            check_key(player_num, key_num);
            guess_count++;
            hp = score_point(guess_count);

            if (hp < 0) hp = 0; // Fix HP âm

            cout << "Health Point: " << hp << endl;
            cout << "Guess: " << guess_count << endl;
        } while (key_num != player_num && hp > 0);

        if (hp == 0) {
            cout << "You Lose ??" << endl;
        } else {
            cout << "You Win ??" << endl;
        }

        if (ask_player()) {
            new_game();
        } else {
            cout << "Goodbye!" << endl;
            break;
        }
    }

    return 0;
}

int score_point(int guess_count) {
    return 100 - guess_count * 10;
}

int AI_RandomNumber() {
    return rand() % 100 + 1;
}

int get_Num() {
    int x;
    while (true) {
        cout << "Nhap so (1...100): ";
        cin >> x;

        if (cin.fail() || x < 1 || x > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Khong hop le" << endl;
        } else {
            return x;
        }
    }
}

void check_key(int ply, int AI) {
    if (ply > AI) {
        cout << "So cua ban qua lon" << endl;
    } else if (ply < AI) {
        cout << "So cua ban qua nho" << endl;
    } else {
        cout << "?? Correct Number!" << endl;
    }
}

void new_game() {
    hp = 100;
    guess_count = 0;
}

bool ask_player() {
    int ans;
    while (true) {
        cout << "Do you want to play again? (1 for Yes, 0 for No): ";
        cin >> ans;

        if (ans == 1) return true;
        if (ans == 0) return false;

        cout << "Invalid choice! Please enter 1 or 0." << endl;
    }
}

