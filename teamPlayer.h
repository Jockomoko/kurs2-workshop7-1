#ifndef TEAMPLAYER_H
#define TEAMPLAYER_H

#include <string>

class TeamPlayer
{
private:
    std::string player_id;
    std::string name;
    int age;
    std::string position;
    int games_played;
    int scored_goals; // Ny variabel för antal mål

public:
    TeamPlayer(std::string player_id, std::string name, int age, std::string position, int games_played, int scored_goals)
    {
        this->player_id = player_id;
        this->name = name;
        this->age = age;
        this->position = position;
        this->games_played = games_played;
        this->scored_goals = scored_goals;
    }

    void addGamePlayed();
    void resetGamesPlayed();
    void addGoal();
    void resetGoals();

    std::string getPlayerInfo() const;
    std::string getPlayerID() const; // Lägger till för att få spelares ID i Team-klassen
};

#endif
