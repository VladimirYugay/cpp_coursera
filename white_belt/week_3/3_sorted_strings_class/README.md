#### Create class keeping sorted strings ####

#### Interface 

```
class SortedStrings {
public:
  void AddString(const string& s) {
    // add string
  }
  vector<string> GetSortedStrings() {
    // get all strings sorted
  }
private:
  // private fields
};
```

#### Usage 

```
void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}

int main() {
  SortedStrings strings;
  
  strings.AddString("first");
  strings.AddString("third");
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  strings.AddString("second");
  PrintSortedStrings(strings);
  
  return 0;
}
```