#include<Neuron.h>
#include<Activations.h>

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
		return linear(z);
	if (activation == Activation::RELU)
		return relu(z);
	if (activation == Activation::SIGMOID)
		return sigmoid(z);
	if (activation == Activation::BINARY_STEP)
		return binary_step(z);
	if (activation == Activation::LEAKY_RELU)
		return leaky_relu(z);
}
double Neuron::run(double inweights[],/*value of the corresponding neuron*/, Activation activation) {
	double z = calc_z(inweights, /*value of the corresponding neuron*/);
	return = calc_output(z, activation);
}
