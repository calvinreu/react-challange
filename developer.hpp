#pragma once

class developer
{
private:
    float company, bonus, skills;
public:
    developer(float company, float bonus, float skills);
    float get_company() const {return company;}
    float get_bonus()   const {return bonus;}
    float get_skills()  const {return skills;}
    ~developer();
};

developer::developer(float company, float bonus, float skills) : company(company), bonus(bonus), skills(skills) {}

developer::~developer()
{
}
