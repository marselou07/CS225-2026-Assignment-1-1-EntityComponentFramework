#ifndef COMPONENT_H
#define COMPONENT_H
class Entity;
class Component;
class ICloneable
{
    public:
    virtual ICloneable* clone() const = 0;
};
class IComparable
{
    public:
    virtual bool compare_to(Component comp) const =0;

};
class IPrintable
{
    public:
    virtual void print() const = 0;
};
class Component: public ICloneable, public IComparable, public IPrintable
{
    protected:
        int id;
        Entity * entity;
    public:
        ~Component() = default;
        
        int get_id();
        ICloneable* clone() const override;
        Entity * get_owner();
        void set_owner(Entity* e);
        bool compare_to(Component comp) const override;
        void print() const override;

};
#endif