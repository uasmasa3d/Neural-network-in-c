#pragma once
class Activations {
public:
	Activations();
	~Activations();
	float sigmoid(double z);
	double relu(double z);
	double linear(double z);
	int binary_step(double z);
	double leaky_relu(double z);
};