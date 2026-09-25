#include "entity.hh"
#include <iterator>
Entity::~Entity()
{
    this->listcomp.clear();
}

int Entity::component_count()
{
    if(this->listcomp.empty() == true)
    {
        return 0;

    }
    else
    {
        return this->listcomp.size();
    }
    
}

void Entity::attach(Component *comp)
{
    this->listcomp.push_back(*comp);
}

void Entity::attach(Component comp)
{
    this->listcomp.push_back(comp);
}

Component& Entity::operator[](int position)
{
    auto nodepos = this->listcomp.begin();

    
}
