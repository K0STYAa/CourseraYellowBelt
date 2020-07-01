#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>

int main(){
    std::vector<int> v, res;
    int n, new_temp;
    int64_t sum = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> new_temp;
        sum += new_temp;
        v.emplace_back(new_temp);
    }
    double avg = (double)sum / v.size();
    int count = 0;
    for(auto i : v) {
        if(i > avg) {
            res.emplace_back(count);
        }
        count++;
    }
    std::cout << res.size() << std::endl;
    for(auto i : res) {
        std::cout << i << " ";
    }
    return 0;
}
