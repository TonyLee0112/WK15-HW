#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
using namespace std;
#include "Queue.h"

void Queue::run() {
    for (itime = 0; itime < 120; itime++) {
        Sleep(0);                           // 1초 동안 대기

        ni = rand() % NI;                    // 0부터 NI-1 사이의 랜덤한 값을 생성하여 ni에 저장
        no = rand() % NO;                    // 0부터 NO-1 사이의 랜덤한 값을 생성하여 no에 저장

        if (capacity < q_vec.size() + ni) {  // 큐의 용량을 초과하는 경우
            lost += q_vec.size() + ni - capacity;   // 패킷 손실 개수 증가
            ni = capacity - q_vec.size();            // 생성되는 패킷 개수 조정하여 용량 초과 방지
        }
        for (int i = 0; i < ni; i++) {       // ni만큼 랜덤한 값을 queue1 벡터에 추가
             q_vec.push_back(rand() % NI);
        }

        for (int i = 0; i < no; i++) {       // no만큼 q_vec에서 패킷을 제거
            if (q_vec.size() != 0) {
                q_vec.erase(q_vec.begin());
            }
        }

        NofPackets[itime] = (int)q_vec.size();   // 현재 시간에 대한 q_vec의 크기를 배열에 저장
    }
    cout << "NofPackets[itime]: " << NofPackets[itime] << endl;
}
float Queue::AverageP(int *a) {
    float sum = 0;
    for (int i = 0; i < 120; i++) {
        sum += a[i];
    };
    return sum / 120;
    
}
float Queue::maxValue(int* a) {
    int max = 0;
    for (int i = 0; i < 120; i++) {
        if (a[i] > max) {                      // 배열 a에서 최댓값을 찾음
            max = a[i];
        }
    }
    return max;                               // 최댓값 반환
}
