#include "entity.hh"
class ICloneable
{
    public:
    virtual ICloneable* clone() const = 0;

};
class Component: public ICloneable
{
    protected:
        int id;
        Entity * entity;
    public:
        int get_id();
        ICloneable* clone() const override;
        Entity * get_owner();
        void set_owner(Entity* e);


};
