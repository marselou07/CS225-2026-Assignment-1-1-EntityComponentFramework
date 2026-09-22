class Component
{
    protected:
        int id;
    public:
        int get_id();
        virtual void demo() = 0;
};