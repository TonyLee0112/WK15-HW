#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
using namespace std;
#include "Queue.h"

void main() {
	Queue q1, q2, q3;
	q1 = Queue(25, 15, 100);
	q2 = Queue(20, 10, 120);
	q3 = Queue(15, 15, 100);
	q1.run(); q2.run(); q3.run();
	ofstream xx("Result.txt");
	for (int i = 0; i < 120; i++) {
		xx << q1.NofPackets[i] << endl;
		xx << q2.NofPackets[i] << endl;
		xx << q3.NofPackets[i] << endl;
	}
	xx.close();
	
	cout << "Average of q1 = " << q1.AverageP(q1.NofPackets) << endl;
	cout << "maxValue of q1= " << q1.maxValue(q1.NofPackets) << endl;

	cout << "Average of q2 = " << q2.AverageP(q2.NofPackets) << endl;
	cout << "maxValue of q2= " << q2.maxValue(q2.NofPackets) << endl;

	cout << "Average of q3 = " << q3.AverageP(q3.NofPackets) << endl;
	cout << "maxValue of q3= " << q3.maxValue(q3.NofPackets) << endl;

}
