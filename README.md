# Accepted problems of codeforces
# handle : \_lucifer\_

**Check out the [Contribution Guidelines](https://github.com/Waqar-107/Codeforces/blob/master/CONTRIBUTING.md) in case you want to contribute.**

# things i often forget while coding:

<h3><u>sorting in python3 using lambda: </u></h3>

assuming that x is a tuple and sorting will depend on x[0], if x[0] is equal then x[1]

```python
data.sort(key = lambda x: (x[0], x[1]))
```

assuming x is a class where it has two int attributes: id, marks

```python
data.sort(key = lambda x: (x.id, x.marks))
```

<h3><u>declaring 2D array of N * M size in python:</u></h3>

```python
board = [['X' for i in range(M)] for j in range(N)]
```

<h3><u>declaring 2D empty array in python:</u></h3>

```python
arr = []
for i in range(n):
  arr.append([])
```

<h3><u>priority queue with custom comparator</u></h3>

```c++
class comparator
{
public:
    // Type is variable type or any user defined object 
    bool operator() (Type a, Type b)
    {
        // return according to your need
    }
};

std::priority_queue<pair<int, int>, vector<pair<int, int>>, comparator> pq;
```

<h3><u>policy based data structures:</u></h3>

```cpp
#include<iostream>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;

int main(){
  ordered_set s;
  s.insert(5);
  s.insert(4);
  
  cout << s.order_of_key(6) << endl;  // this will output 2 as there are two numbers in the set that are less than 6
}
```

<h3>custom comparator in c#</h3>

```csharp
// this goes inside the class
public int CompareTo(Node other)
{
    if (this.c == other.c) return this.value.CompareTo(other.value);
    return this.c.CompareTo(other.c);
}
```
