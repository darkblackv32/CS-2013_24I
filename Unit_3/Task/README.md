# Task 3 - Unit 3
## Topic: Iterators and Containers
---


### Question #1
Design and develop a function template equal_values that, in linear time O(n), allows you to identify if two containers of the same size contain the same elements, regardless of the order of their values. Example:

```cpp
container_1 = { 1, 4, 5, 19, 20, 11, 22, 1 };
container_2 = { 1, 1, 4, 5, 11, 19, 20, 22 };
```
```cpp
// Use case #1
int n = 0;
cin >> n;
vector<int> vec1(n);
vector<int> vec2(n);
for(auto& item: vec1)
    cin >> item;
for(auto& item: vec2)
    cin >> item;
cout << equal_values(vec1, vec2) << endl;

// Use case #2
deque<int> deq1(n);
list<int> lis1(n);
for(auto& item: deq1)
    cin >> item;
for(auto& item: lis1)
    cin >> item;
cout << equal_values(deq1, lis1) << endl;
```

### Question #2
Design and develop the function template `find_uncommon_elements` that allows generating from 2 containers a container that holds the uncommon values between them. Example:

```cpp
container_1 = { 1, 4, 15, 19, 20, 11, 22, 1 };
container_2 = { 1, 1, 14, 5, 13, 19, 20, 22 };
container_3 = {4, 5, 11, 13, 14, 15}; 
```
```cpp
int n = 0;
cin >> n;
vector<int> vec1(n);
vector<int> vec2(n);
for(auto& item: vec1)
    cin >> item;
for(auto& item: vec2)
    cin >> item;
vector<int> res = find_uncommon_elements<vector>(vec1, vec2);
for(const auto& item: res)
    cout << item << " ";
```

### Question #3
Design and develop the function template `join_containers` that allows merging multiple containers (in a varied quantity of containers) and generates a container which defaults to a vector. The containers could be: list, vector, std::deque, std::forward_list.

```cpp
list<int> lst = {1, 2, 3, 4, 5}
vector<int> vec = {6, 7, 8, 9, 10, 11, 12}
deque<int> deq = {13, 14}

result = join_containers(lst, vec, deq)

{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}
```

```cpp
// use case 1
vector<int> v1 = {1, 2, 3};
list<int> l1 = {4, 5, 6};
vector<int> v2 = {7, 8, 9};
deque<int> d1 = {10, 11, 12};
auto res = join_containers(v1, l1, v2, d1);
copy(begin(res), end(res), ostream_iterator<int>(cout, " "));
```

```cpp
// use case 2
vector<int> v = {1, 2, 3};
list<int> l;
forward_list<int> f = {7, 8, 9};
auto res = join_containers(v, l, f);
copy(begin(res), end(res), ostream_iterator<int>(cout, " "));
```
