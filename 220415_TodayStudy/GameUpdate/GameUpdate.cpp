#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
struct map {
    int map[10][10];
}map;
struct player {
    int playerX, playerY;
}player;

struct escape {
    int escapeX, escapeY;
}escape;

struct input {
    int inputKey;
}input;

struct forest {
    int forestX[5], forestY[5], forestArray[10][10];
}forest;

struct swamp {
    int swampX[5], swampY[5], swampArray[10][10];
}swamp;
int main()
{

    //int playerX, playerY, escapeX, escapeY, inputKey;
    srand(time(NULL));
    escape.escapeX = rand() % 9 + 1;
    escape.escapeY = rand() % 9 + 1;

    for (int i = 0;i < 5;i++) {
        forest.forestX[i] = rand() % 9 + 1;
        forest.forestY[i] = rand() % 9 + 1;
        swamp.swampX[i] = rand() % 9 + 1;
        swamp.swampY[i] = rand() % 9 + 1;
        forest.forestArray[forest.forestX[i]][forest.forestY[i]] = 'F';
    }

    
    player.playerX = 0;
    player.playerY = 0;
    while (1) {
        for (int i = 0;i < 10;i++) {
            for (int j = 0;j < 10;j++) {
                map.map[i][j] = '#';
            }
        }

        /*for (int i = 0;i < 5;i++) {
            
            map.map[forest.forestX[i]][forest.forestY[i]] = 'F';
        }

        for (int i = 0;i < 5;i++) {
            
            map.map[forest.forestX[i]][forest.forestY[i]] = 'S';
        }*/
        
        for (int i = 0;i < 5;i++) {
            for (int j = 0;j < 5;j++) {
                map.map[forest.forestX[i]][forest.forestY[i]] = 'F';        //forest.forestArray[forest.forestX[i]][forest.forestY[j]] = 'F';
                map.map[swamp.swampX[i]][swamp.swampY[i]] = 'S';        //swamp.swampArray[swamp.swampX[i]][swamp.swampY[j]] = 'S';
            }   
        }

        map.map[escape.escapeX][escape.escapeY] = 'E';
        map.map[player.playerX][player.playerY] = 'O';



        for (int i = 0;i < 10;i++) {
            for (int j = 0;j < 10;j++) {
                cout << (char)map.map[i][j];
                
            }
            cout << endl;
        }

        if (player.playerX == escape.escapeX && player.playerY == escape.escapeY) {
            cout << "탈출에 성공했습니다!!!" << endl;
            break;
        }
        input.inputKey = _getch();
        switch (input.inputKey) {
        case 97:
            if (player.playerY <= 0) {
                break;
            }
            player.playerY--;
            break; // 왼쪽으로 가유~
        case 115:
            if (player.playerX >= 9) {
                break;
            }
            player.playerX++;
            break; // 아래로 가유~
        case 100:
            if (player.playerY >= 9) {
                break;
            }
            player.playerY++;
            break; // 오른쪽으로 가유~
        case 119:
            if (player.playerX <= 0) {
                break;
            }
            player.playerX--;
            break; // 위로 가유~
        }

        system("cls");
    }
}