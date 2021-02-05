#pragma once


class project_manager
{
private:
    float company, bonus;
public:
    float get_company() const {return company;}
    float get_bonus()   const {return bonus;}
    project_manager(float company, float bonus);
    ~project_manager();
};

project_manager::project_manager(float company, float bonus) : company(company), bonus(bonus)
{
}

project_manager::~project_manager()
{
}
