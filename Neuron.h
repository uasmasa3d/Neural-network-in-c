#pragma once
#include <stdlib.h>
#include <vector>
enum Activation
{
	LINEAR,
	SIGMOID,
	RELU
};
class Neuron {
public:
	Neuron(int id, Activation activation) {
		this.id = id;
		this.activation = activation;
	}
	~Neuron() {
		id = null;
		activation = null;
	}
	void init_weights() {
		for (int i = 0; i < inweights.size(); i++)
			inweights[i] = double(rand()) / RAND_MAX;
		for (int i = 0; i < outweights.size(); i++)
			outweights[i] = double(rand()) / RAND_MAX;
	}
	void run() {
		for (int i = 0; i < inweights.size(); i++)
			inweights[i] = double(rand()) / RAND_MAX;/////////////////////////////////////
	}
protected:
	vector<double> inweights;
	vector<double> outweights;
	double output;
	Activation ativation;
	int id;
};