#include <iostream>
using namespace std;

class Quese
{
    private:
        static const int max = 3;
        int FRONT, REAR;
        int queue_array[max];

    public:
        Quese()
        {
            FRONT = -1;
            REAR = -1;
        }
        
}