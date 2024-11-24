#include <bits/stdc++.h>
using namespace std;

set<int> prime;

void fun(int n) {
    for (int j = 2; j *j <= n; j++) {
        while (n % j == 0) {
            prime.insert(j);
            n /= j;
            if (n == 1) break; // ��� n �Ѿ�����ȫ�ֽ⣬��ֹͣѭ��
        }
    }
}

int main() {
    int m;
    cin >> m;
    fun(m);
    for (auto p = prime.begin(); p != prime.end(); p++) {
        cout << *p << " ";
    }
    cout << endl; // ���У��Ա���������ʾ��������������֮��
    cout << accumulate(prime.begin(), prime.end(), 0);
    return 0;
}
