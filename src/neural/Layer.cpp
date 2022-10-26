#include<Layer.h>

Layer::Layer(unit units, ActivationFunction activation, LayerType type = STANDARD) {
	this->units = units;
	this->activation = activation;
	this->type = type;
	for (int i = 0; i < units; i++) {
		Neuron *n = new Neuron(i, activation);
		neurons.push_back(n);
	}
}
Layer::~Layer() {
	for (Neuron* n : neurons)
		delete n;
	neurons.clear();
}
