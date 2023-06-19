// neuron.h
#include <vector>

struct Connection
{
    Neuron *neuron;

    Connection(Neuron *neuron): neuron(neuron){}
    
};

class Neuron
{
    public:
        float bias;
        float weight;
        std::vector<Connection> connections_forward;
        std::vector<Connection> connections_backward;

        Neuron(){} // Constructor

};
