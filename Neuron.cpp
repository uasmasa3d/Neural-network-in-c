#include<Neuron.h>


Neuron::Neuron(int id, Activation activation) {
	this.id = id;
	this.activation = activation;
	z = 0;
}

Neuron::~Neuron() {
	id = null;
	activation = null;
}

void Neuron::init_weights() {
	for (int i = 0; i < inweights.size(); i++)
		inweights[i] = double(rand()) / RAND_MAX;
	for (int i = 0; i < outweights.size(); i++)
		outweights[i] = double(rand()) / RAND_MAX;
}

double Neuron::calc_z(double inweights[],/*value of the corresponding neuron*/) {
	for (int i = 0; i < inweights.size(); i++)
		z += inweights[i] * // output form the corresponding neuron in the edge
		return z;
}
double Neuron::calc_output(double z, Activation activation) {
	if (activation == Activation::LINEAR)
		output = z;
	if (activation == Activation::RELU)
		output = relu(z);
	if (activation == Activation::SIGMOID)
		output = sigmoid(z);
}
