#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#include "Queue.h"

void main() {
	Queue q1, q2, q3;
	q1 = Queue(15, 20, 120);
	q2 = Queue(25, 30, 120);
	q3 = Queue(40, 20, 100);
	q1.run(); q2.run(); q3.run();
	ofstream xx("Result.txt");
	for (int i = 0; i < 120; i++) {
		xx << q1.NofPackets[i] << endl;
		xx << q2.NofPackets[i] << endl;
		xx << q3.NofPackets[i] << endl;
	}
	xx.close();

	cout << "Average of q1 = " << q1.AverageP() << endl;
	cout << "maxValue of q1= " << q1.maxValue() << endl;
	cout << "lost of q1= " << q1.lost << endl;

	cout << "Average of q2 = " << q2.AverageP() << endl;
	cout << "maxValue of q2= " << q2.maxValue() << endl;
	cout << "lost of q2= " << q2.lost << endl;

	cout << "Average of q3 = " << q3.AverageP() << endl;
	cout << "maxValue of q3= " << q3.maxValue() << endl;
	cout << "lost of q3= " << q3.lost << endl;
}
