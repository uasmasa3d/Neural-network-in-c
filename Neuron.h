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
	Neuron(int id, Activation activation);

	~Neuron();

	void init_weights();
	void calc_z();
protected:
	vector<double> inweights;
	vector<double> outweights;
	double output;
	Activation ativation;
	int id;
	double z;
};