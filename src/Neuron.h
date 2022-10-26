#pragma once
#include <stdlib.h>
#include <vector>
enum Activation
{
	LINEAR,
	SIGMOID,
	RELU,
	BINARY_STEP,
	LEAKY_RELU
};
class Neuron {
public:
	Neuron(int id, Activation activation);

	~Neuron();

	void init_weights();
	double calc_z();
	void run();
protected:
	vector<double> inweights;
	vector<double> outweights;
	double output;
	Activation ativation;
	int id;
	double z;
};