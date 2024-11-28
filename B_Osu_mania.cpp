#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std; 

void generateNumbers(int n, int k) {
    vector<int> numbers;
    int sum = 0;
    
    srand(time(0)); 

    for(int i = 0; i < k - 1; i++) {
        int randomNum = rand() % (n - sum - (k - i - 1)) + 1; // Ensure there's enough space left
        numbers.push_back(randomNum);
        sum += randomNum;
    }
    
    numbers.push_back(n - sum);
    
    cout << "The numbers are: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n = 0; // The sum we want to achieve
    int k = 3;  // The number of parts
    
    generateNumbers(n, k);
    
    return 0;
}
