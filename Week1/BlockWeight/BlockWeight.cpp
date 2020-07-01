#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>

int main(){
    int n, r, w, h, d;
    uint64_t sum = 0;
    std::cin >> n >> r;
    for(int i = 0; i < n; i++) {
        std::cin >> w >> h >> d;
        sum += (int64_t)w * (int64_t)h * (int64_t)d;
    }
    std::cout << sum * r;
    return 0;
}
