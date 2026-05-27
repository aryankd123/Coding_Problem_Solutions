#include <iostream>
#include <vector>
#include <bitset>

const int MAX_M = 2000;

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::bitset<MAX_M>> sequences(N);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int x;
            std::cin >> x;
            sequences[i][j] = x;
        }
    }

    long long count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if ((sequences[i] ^ sequences[j]).count() % 2 == 1) {
                count++;
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}
