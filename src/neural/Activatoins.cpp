#include<activations.h>
#include<math.h>
Activations::Activations() {

}
Activations::~Activations() {

}
float Activations::sigmoid(double z) {
	return 1.0 / (1.0 + exp(-z));
}
double Activations::relu(double z) {
	if (z < 0)
		return 0;
	else
		return z;
}
double Activations::linear(double z) {
	return z;
}
int Activations::binary_step(double z) {
	if (z < 0)
		return 0;
	else
		return 1;
}
double Activations::leaky_relu(double z) {
	return z > 0 ? z : 0.01 * z;
}
