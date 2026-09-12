#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Entity {
private:
    string name;
    int health;
    int level;
    string type;

public:
    Entity& setName(const string& name) {
        this->name = name;
        return *this;
    }

    Entity& setHealth(int health) {
        this->health = health;
        return *this;
    }

    Entity& setLevel(int level) {
        this->level = level;
        return *this;
    }

    Entity& setType(const string& type) {
        this->type = type;
        return *this;
    }

    string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    int getLevel() const {
        return level;
    }

    string getType() const {
        return type;
    }

    void displayInfo() const {
        cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
        cout << "Level  : " << level << endl;
        cout << "Type   : " << type << endl;
        cout << "------------------------" << endl;
    }
};

namespace Physics {
    double clamp(double val, double min, double max) {
        if (val < min)
            return min;
        else if (val > max)
            return max;
        else
            return val;
    }

    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}

namespace GameMath {
    int clamp(int val, int min, int max) {
        if (val < min)
            return min;
        else if (val > max)
            return max;
        else
            return val;
    }

    double lerp(double a, double b, double t) {
        return a + (b - a) * t;
    }
}

int level = 1;

namespace Engine {
    namespace Audio {
        void playSound(string name) {
            cout << "Playing: " << name << endl;
        }
    }
}

int main() {
    Entity player, enemy, item;

    player.setName("Aragorn")
          .setHealth(100)
          .setLevel(10)
          .setType("Player");

    enemy.setName("Orc")
         .setHealth(60)
         .setLevel(5)
         .setType("Enemy");

    item.setName("HealthPotion")
        .setHealth(0)
        .setLevel(1)
        .setType("Item");

    cout << "===== ENTITY INFORMATION =====" << endl;

    player.displayInfo();
    enemy.displayInfo();
    item.displayInfo();

    cout << endl;
    cout << "===== NAMESPACE DEMONSTRATION =====" << endl;

    double velocity = 15.5;

    cout << "Physics::clamp(15.5, 0, 10) = "
         << Physics::clamp(velocity, 0.0, 10.0) << endl;

    cout << "GameMath::clamp(120, 0, 100) = "
         << GameMath::clamp(120, 0, 100) << endl;

    cout << "Physics::lerp(0, 100, 0.25) = "
         << Physics::lerp(0, 100, 0.25) << endl;

    cout << "GameMath::lerp(0, 100, 0.75) = "
         << GameMath::lerp(0, 100, 0.75) << endl;

    {
        using namespace Physics;

        cout << endl;
        cout << "Inside limited Physics namespace block:" << endl;
        cout << "clamp(25.5, 0, 20) = "
             << clamp(25.5, 0.0, 20.0) << endl;
    }

    int level = player.getLevel();

    cout << endl;
    cout << "===== SCOPE RESOLUTION =====" << endl;

    cout << "Local player level  : " << level << endl;
    cout << "Global game level   : " << ::level << endl;

    cout << endl;
    cout << "===== AUDIO =====" << endl;

    Engine::Audio::playSound("sword_clash");

    int R, C;

    cout << endl;
    cout << "===== DYNAMIC GAME MAP =====" << endl;

    cout << "Enter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;

    if (R <= 0 || C <= 0) {
        cout << "Invalid map size!" << endl;
        return 1;
    }

    int** gameMap = new int*[R];

    for (int i = 0; i < R; i++) {
        gameMap[i] = new int[C];
    }

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            gameMap[i][j] = rand() % 5;
        }
    }

    cout << endl;
    cout << "===== GAME MAP (" << R << " x " << C << ") =====" << endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << gameMap[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Legend: "
         << "0=Grass "
         << "1=Water "
         << "2=Mountain "
         << "3=Forest "
         << "4=Dungeon"
         << endl;

    int tileCount[5] = {0};

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            tileCount[gameMap[i][j]]++;
        }
    }

    cout << endl;
    cout << "Tile Count:" << endl;

    cout << " Grass    : " << tileCount[0] << endl;
    cout << " Water    : " << tileCount[1] << endl;
    cout << " Mountain : " << tileCount[2] << endl;
    cout << " Forest   : " << tileCount[3] << endl;
    cout << " Dungeon  : " << tileCount[4] << endl;

    for (int i = 0; i < R; i++) {
        delete[] gameMap[i];
    }

    delete[] gameMap;

    cout << endl;
    cout << "Game map memory deallocated successfully." << endl;

    return 0;
}