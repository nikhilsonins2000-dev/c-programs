#include <iostream.h>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;

const int width = 30;
const int height = 15;

int playerX, playerY;
int enemyX, enemyY;
int score = 0;
int lives = 3;
bool gameOver = false;

char map[height][width];

void Setup() {
    srand(time(0));
    playerX = 1;
    playerY = 1;
    enemyX = width - 2;
    enemyY = height - 2;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                map[i][j] = '#';
            else if (rand() % 20 == 0)
                map[i][j] = '#';
            else
                map[i][j] = ' ';
        }
    }

    map[playerY][playerX] = 'P';
    map[enemyY][enemyX] = 'X';
    map[rand() % (height - 2) + 1][rand() % (width - 2) + 1] = '$';
}

void Draw() {
    system("cls");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            cout << map[i][j];
        cout << endl;
    }
    cout << "Score: " << score << "   Lives: " << lives << endl;
}

void Input() {
    if (_kbhit()) {
        char ch = _getch();
        int newX = playerX;
        int newY = playerY;

        if (ch == 'a') newX--;
