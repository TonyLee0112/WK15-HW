#pragma once
class Queue {
public:
	//constructor
	Queue() {}
	Queue(int p, int q, int r) {
		NI = p; NO = q; capacity = r;}
	
	//member data
	int NI, NO, capacity;
	int lost = 0;
	int ni, no, itime;
	int NofPackets[120];
	vector <int> q_vec;

	//member function
	void run();
	float AverageP();
	float maxValue();
};
