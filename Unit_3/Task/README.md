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
