#include "component.hh"
#include <iostream>
int Component::get_id()
{
    return this->id;
}

ICloneable *Component::clone() const
{
    return new Component(*this);
}

Entity *Component::get_owner()
{
    return this->entity;
}

void Component::set_owner(Entity *e)
{
    this->entity = e;
}

bool Component::compare_to(Component comp) const
{
    if(this->id == comp.id)
    {
        return true;
    }
    return false;
}

void Component::print() const
{
    std::cout << "This is a Component " << this->id;
}
