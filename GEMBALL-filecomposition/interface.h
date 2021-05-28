
#include "team.h"
#include <string>
using namespace std;

class Interface
{
    public:
       Interface(); // constructor
        
        void complete_object (int value)
        {
           ptr->complete(value);
        }
        
        void add_value (int value)
        {
            ptr->add_gems(value);
        }
        
        string first_value_getter()const
        {
            return ptr->name_getter();
        }
       
        int second_value_getter()
        {
            return ptr->goal_getter();
        }
        
        int third_value_getter()
        {
            return ptr->GEM_getter();
        }
        
        void value_setter()
        {
            return ptr->goal_setter();
        }
        
       ~Interface()
        {
            delete ptr;
        }// destructor
    private:
       team *ptr;
}; // end class Interface
