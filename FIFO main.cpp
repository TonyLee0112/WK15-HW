#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
#include "Queue.h"
using namespace std;

void main() {
	Queue q1, q2, q3;
	q1 = Queue(7, 15, 100);
	q2 = Queue(5, 10, 120);
	q3 = Queue(4, 15, 100);
	q1.run(); q2.run(); q3.run();

}
