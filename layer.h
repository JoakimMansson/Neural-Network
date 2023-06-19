// layer.h
#include <vector>

class Layer
{
    public:
        int nr_input_nodes;
        int nr_hidden_layers;
        int nr_output_nodes;

        Layer(int nr_inputs, int nr_layers, int nr_outputs): nr_input_nodes(nr_inputs), nr_hidden_layers(nr_layers), nr_output_nodes(nr_outputs){}
        
        void forward_propagation(const std::vector<int> &input);

};