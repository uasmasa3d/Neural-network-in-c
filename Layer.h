#pragma once
#include<vector>
enum LayerType
{
	STANDARD = 0, //Standard layer : fully connected perceptrons
	OUTPUT, // Output : No bias neuron
	INPUT, // Input: Standard input (output of neurons is outputRaw() )
	SOFTMAX //K-Class Classification Layer 

};
enum ActivationFunction;
class Neuron;
typedef unsigned int unit;
class Layer {
public:
	Layer(unit units,ActivationFunction activation, LayerType type= STANDARD);
	~Layer();
	void printLayer();
	void randomizeAllWeights();
	void alterWeights();
	void shiftBackWeights();
	void connectComplete();
protected:
	vector<Neuron*> neurons;
	unit units;
	ActivationFunction activation;
	LayerType type;
};