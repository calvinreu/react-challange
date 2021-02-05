#pragma once
#include <vector>
#include <string>
#include <set>


enum field_type{
    empty,
    manager,
    developer
};

class workspace
{
private:
    int bonus;
    std::set<std::string> skills;
    std::string company;
    int bonus_yield(int other_bonus) const {return bonus*other_bonus;}
    int skill_yield(const std::set<std::string> &other) const;  
public:
    workspace(std::string company, int bonus, std::set<std::string> skills);
    field_type field;
    std::string get_company() const {return company;}
    float get_bonus()   const {return bonus;}
    std::set<std::string> get_skills()  const {return skills;}

    int get_value(const workspace &other) { return this->bonus_yield(other.get_bonus()) + this->skill_yield(other.get_skills()); }

    ~workspace();
};

int workspace::skill_yield(const std::set<std::string> &other_skills) const {
    auto j = skills.begin();
    int value;
    for (auto i = other_skills.begin(); i != other_skills.end(); i++) {
        for (j; *j < *i; j++) {
            if 
        }
    }
}

workspace::workspace(std::string company, int bonus, std::set<std::string> skills) : company(company), bonus(bonus), skills(skills) {}

workspace::~workspace()
{
}
