#### Implement ensure equal function ####

```
void EnsureEqual(const string& left, const string& right);
```


##### Requirements

Function should throw an exception in case when two strings are not equal

##### Example 
```
int main() {
  try {
    EnsureEqual("C++ White", "C++ White");
    EnsureEqual("C++ White", "C++ Yellow");
  } catch (runtime_error& e) {
    cout << e.what() << endl;
  }
  return 0;
}
```

##### Output
C++ White != C++ Yellow