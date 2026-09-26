#include "component.hh"
#include <iostream>
/******************************************************************************
filename    component.cpp
author      Markel Susial de la fuente
DP email    markel.susial@digipen.edu
course      cs225
assignment  1
due date    26/09/2026

Brief Description: this program implements the component class which is set up functions.
******************************************************************************/
  /**
  * Get the id of the component
  * @param nothing
  * @return the id of the component.
  */
int Component::get_id()
{
    return this->id;
}
  /**
  * Copy the curret component into a new one
  * @param nothing
  * @return A pointer to a IClonable abstract class
  * which will be changed to the needed class pointer
  */
ICloneable *Component::clone() const
{
    return new Component(*this);
}
  /**
  * Get the owner of the component
  * @param nothing
  * @return A pointer to the entity owner 
  * else a nullptr if doesnt exist
  */
Entity *Component::get_owner()
{
    if(this->entity== nullptr)
    {
        return nullptr;
    }
    return this->entity;
}
  /**
  * Set a new owner entity
  * @param Entity *e : a entity pointer that will be the new
  * owner
  * @return nothing
  */
void Component::set_owner(Entity *e)
{
    this->entity = e;
}
  /**
  * Compare two componets id´s if there are equal or not
  * @param Component comp: a component that will be
  * checked
  * @return a bool true if equal else false
  */
bool Component::compare_to(Component comp) const
{
    if(this->id == comp.id)
    {
        return true;
    }
    return false;
}
  /**
  * Print the id of the component
  * @param nothing
  * @return nothing
  */
void Component::print() const
{
    std::cout << "This is a Component " << this->id << "\n";
}
