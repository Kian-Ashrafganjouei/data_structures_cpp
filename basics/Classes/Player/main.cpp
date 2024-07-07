#include <iostream>
#include <string>
#include <vector>

class Player {
    public:
    std::string name {"Player"};
    int health {100};
    int xp;

    void talk() {
        std::cout << "my name is " << name << ", I have " << health << "hp!" << std::endl;
    };
    bool isDead();
};

int main() {
    Player frank;
    frank.health = 20;
    std::cout << frank.health << std::endl;
    Player hero;

    Player players[] {frank, hero};
    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;
    enemy->talk();

    delete enemy;

    return 0;
}
