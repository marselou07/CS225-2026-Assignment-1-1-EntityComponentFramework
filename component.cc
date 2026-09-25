#include "component.hh"
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
    
}
