#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
struct map {
    int map[10][10];
}map;
struct player {
    int playerX, playerY, stamina = 30;
}player;

struct escape {
    int escapeX, escapeY;
}escape;

struct input {
    int inputKey;
}input;

struct forest {
    int forestX[10], forestY[10];
}forest;

struct swamp {
    int swampX[10], swampY[10];
}swamp;
int main()
{

    //int playerX, playerY, escapeX, escapeY, inputKey;
    srand(time(NULL));
    escape.escapeX = rand() % 9 + 1;
    escape.escapeY = rand() % 9 + 1;

    for (int i = 0;i < 10;i++) {
        forest.forestX[i] = rand() % 9 + 1;
        forest.forestY[i] = rand() % 9 + 1;
        swamp.swampX[i] = rand() % 9 + 1;
        swamp.swampY[i] = rand() % 9 + 1;
        if (forest.forestX[i] == swamp.swampX[i] && forest.forestY[i] == swamp.swampY[i]) {
            i--;
        }
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
        
        for (int i = 0;i < 10;i++) {
            for (int j = 0;j < 10;j++) {
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
        for (int i = 0;i < 10;i++) {
            if (player.playerX == forest.forestX[i] && player.playerY == forest.forestY[i]) {
                player.stamina--;
            }
            else if (player.playerX == swamp.swampX[i] && player.playerY == swamp.swampY[i]) {
                player.stamina-=3;
            }
        }
        


        cout << endl << "체력 : " << player.stamina << endl << "F : 숲 (체력 -1) S : 늪 (체력 -3)";
        if (player.stamina <= 0) {
            cout << endl << "게임 오버" << endl;
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