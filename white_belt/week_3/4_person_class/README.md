#### Create class representing a person ####

#### Interface ####
```
class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
    // add change info of the name in a year
  }
  void ChangeLastName(int year, const string& last_name) {
    // add change infor of the name in a year
  }
  string GetFullName(int year) {
    // get name and surname on a certain year
  }
private:
  // private fields
};
```


#### Usage 
```
int main() {
  Person person;
  
  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }
  
  return 0;
}
```

#### Output 

Incognito
Polina with unknown last name
Polina Sergeeva
Polina Sergeeva
Appolinaria Sergeeva
Polina Volkova
Appolinaria Volkova
