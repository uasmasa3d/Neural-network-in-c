#pragma once
#include<vector>
class Layer {
public:
	Layer() {}
	~Layer() {}
	void printLayer() {}
protected:
	vector<int> units;
	int num_of_neurons;
};