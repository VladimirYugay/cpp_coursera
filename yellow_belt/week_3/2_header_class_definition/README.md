#### Define a class given in a header file ####

##### Header file
```
#pragma once
#include <string>
using namespace std;
class PhoneNumber {
public:
  /* Gets phone number in format +XXX-YYY-ZZZZZZ
     From '+' to '-' - country conde.
     From '-' - city code
     After '-' - local number.
     No of the strings should be empty 
     Throw invalid argument exception if a string doesn't match
     Примеры:
     * +7-495-111-22-33
     * +7-495-1112233
     * +323-22-460002
     * +1-2-coursera-cpp
     * 1-2-333 - wrong number - doesn't start with '+'
     * +7-1233 - wrong number - too short
  */
  explicit PhoneNumber(const string &international_number);
  string GetCountryCode() const;
  string GetCityCode() const;
  string GetLocalNumber() const;
  string GetInternationalNumber() const;
private:
  string country_code_;
  string city_code_;
  string local_number_;
};
```