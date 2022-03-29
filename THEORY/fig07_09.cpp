#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main(){
    const size_t responseSize{20};
    const size_t frequencySize{6};

    array<unsigned int, 20> response{1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};
    array<unsigned int, 6> frequency{};

    for (unsigned int answer{0}; answer < response.size(); ++answer){
        ++frequency[response[answer]];
    }
    cout << "Rating" << setw(10) << "Frequency" << endl;

    for (unsigned int i{1}; i < frequency.size(); ++i){
        cout << setw(6) << i << setw(10) << frequency[i] << endl;
    }
}