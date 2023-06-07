#pragma once
class Queue {
public:
	//constructor
	Queue() {}
	Queue(int p, int q, int r) {
		NI = p; NO = q; capacity = r;}
	
	//member data
	int NI, NO, capacity;
	int lost;
	int ni, no, itime;
	int NofPackets[120];
	vector <int> q_vec;

	//member function
	void run();
	float AverageP(int*, int*, int*, float);
	float maxValue(int*, int*, int*, float);
};
