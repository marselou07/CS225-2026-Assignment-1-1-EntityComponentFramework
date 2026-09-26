#include "entity.hh"
#include <iterator>
/******************************************************************************
filename    entity.cpp
author      Markel Susial de la fuente
DP email    markel.susial@digipen.edu
course      cs225
assignment  1
due date    26/09/2026

Brief Description: this program implements the entity class which is set up functions.
******************************************************************************/
  /**
  * Entity destructor, clears the list
  * @param nothing
  * @return nothing
  */
Entity::~Entity()
{
    this->listcomp.clear();
}
/**
* Get the number of components on the entity
* @param nothing
* @return the number of components
*/
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
  /**
  * Add a new component pointer to the list and
  * sets the owner of the component
  * @param Component *comp: new component to add
  * @return nothing
  */
void Entity::attach(Component *comp)
{
    this->listcomp.push_back(comp);
    comp->set_owner(this);
}
  /**
  * Add a new component reference to the list and
  * sets the owner of the component
  * @param Component& comp: new component to add
  * @return nothing
  */
void Entity::attach(Component& comp)
{
    this->listcomp.push_back(&comp);
    comp.set_owner(this);
}
  /**
  * Gets a specific component from a position
  * @param int position: the position of the
  * component
  * @return a reference to the component in the
  * list.
  */
Component& Entity::operator[](int position)
{
    auto nodepos = this->listcomp.begin();
    std::advance(nodepos,position);
    return **nodepos;
    
}
