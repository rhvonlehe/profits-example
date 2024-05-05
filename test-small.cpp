#include <profit.hpp>
#include <iostream>
#include <random>


using namespace std;

void generate_vec(vector<int>& vec)
{
    // First create an instance of an engine.
    random_device rnd_device;
    // Specify the engine and distribution.
    mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    uniform_int_distribution<int> dist {1, 52};

    auto gen = [&dist, &mersenne_engine](){
        return dist(mersenne_engine);
    };

    generate(begin(vec), end(vec), gen);
}


int main()
{
    cout << "Hello Profit!" << endl;
    vector<int> t1 {1,2,3,4,5,6};
    auto result = profit(t1);
    cout << "t1 result: " << result << endl;

    vector<int> t2 {6,5,4,3,2,1};
    result = profit(t2);
    cout << "t2 result: " << result << endl;

    vector<int> t3(10000);
    generate_vec(t3);
    result = profit(t3);
    cout << "t3 result: " << result << endl;


    return 0;
}
