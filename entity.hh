#ifndef ENTITY_H
#define ENTITY_H
#include "component.hh"
#include <list>

class Entity
{
    protected:
    std::list<Component> listcomp;
    public:
    ~Entity();
    int component_count();
    void attach(Component * comp);
    void attach(Component comp);
    Component& operator[](int position);

};



#endif