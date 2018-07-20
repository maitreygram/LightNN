#include <iostream>
#include <vector>
using namespace std;

double alpha; //learning rate

class perceptron{
	double w0 = 0, w1 = 0;
	bool trained = false;
	bool check(double x, double y, double z);
	bool check(vector<double> data[]);
	void trainiter(vector<double> data[]);
public:
	perceptron();
	~perceptron();
	void train(vector<double> data[]);
	double test(vector<double> data[]);
	void print();
};

perceptron::perceptron(){}

perceptron::~perceptron(){}

bool perceptron::check(double x, double y, double z){
	double y0 = w1*x + w0;
	double dely = y- y0;
	if(!((z == 1 && dely > 0) ||
		(z == -1 && dely < 0) ||
		(z == 0 && dely == 0))) return false;
	else return true;
}

bool perceptron::check(vector<double> data[]){
	for (int i = 0; i < data[0].size(); ++i){
		if (!check(data[0][i], data[1][i], data[2][i])) return false;
	}
	return true;
}

void perceptron::trainiter(vector<double> data[]){
	for (int i = 0; i < data[0].size(); ++i){
		if (!check(data[0][i], data[1][i], data[2][i])){
			//cout << "\t w0 is " << data[1][i] << "\t w1 is " << data[1][i];
			if (data[1][i] == w1*data[0][i] + w0){
				w0 += alpha;
				w1 += alpha;
				cout << "equal \n";
				cout << data[1][i] << "\t" << w1*data[0][i] + w0;
			}
			else{
				cout << "not equal \n";
				cout << data[1][i] << "\t" << w1*data[0][i] + w0;
				w0 += alpha * (data[1][i] - w1*data[0][i] - w0);
				w1 += alpha * (data[1][i] - w1*data[0][i] - w0);
			}
		}
	}
	//print();
}

void perceptron::train(vector<double> data[]){
	while(!check(data)){
		trainiter(data);
	}
}

double perceptron::test(vector<double> data[]){
	double accuracy = 0;
	for (int i = 0; i < data[0].size(); ++i){
		if (check(data[0][i], data[1][i], data[2][i])){
			accuracy++;
		}
	}
	accuracy = accuracy/data[0].size();
	return accuracy;
}

void perceptron::print(){
	cout << w0 << " " << w1 << '\n';
}

int main(int argc, char const *argv[]){
	vector<double> trainingdata[3];
	vector<double> testdata[3];
	int train, test;
	cin >> train >> test >> alpha;
	for (int i = 0; i < train; ++i){
		double x, y, z;
		cin >> x >> y >> z;
		trainingdata[0].push_back(x);
		trainingdata[1].push_back(y);
		trainingdata[2].push_back(z);
	}
	for (int i = 0; i < test; ++i){
		double x, y, z;
		cin >> x >> y >> z;
		testdata[0].push_back(x);
		testdata[1].push_back(y);
		testdata[2].push_back(z);
	}
	perceptron p;
	//cout << p.check(trainingdata) << '\n';
	p.train(trainingdata);
	p.print();
	double accuracy = p.test(testdata);
	cout << accuracy << '\n';
	return 0;
}