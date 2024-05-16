#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <iterator>
#include <algorithm>
using namespace std;


template <typename container>
void add(vector<int>& result, const container& input) {
    for (const auto& elem : input) {
        result.push_back(elem);
    }
}

template <typename... Containers>
vector<int> join_containers(const Containers&... containers) {
    vector<int> result;
    (add(result, containers), ...);
    return result;
}


int main() {
    
    
    vector<int> v1 = {1, 2, 3};
    list<int> l1 = {4, 5, 6};
    vector<int> v2 = {7, 8, 9};
    deque<int> d1 = {10, 11, 12};
    auto res1 = join_containers(v1, l1, v2, d1);
    copy(res1.begin(), res1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;


    vector<int> v = {1, 2, 3};
    list<int> l;
    forward_list<int> f = {7, 8, 9};
    auto res2 = join_containers(v, l, f);
    copy(res2.begin(), res2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
