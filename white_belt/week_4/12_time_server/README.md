#### Implement Time Server ####

You're given *string AskTimeServer()*:

* asks a server for time
* returns time in string format in case of success
* if there's a network problem it says *system_error*;
* throws some other exceptions 

Using *AskTimeServer*, create class *TimeServer* with an interface:
```objectivec
class TimeServer {
public:
  string GetCurrentTime();
private:
  string LastFetchedTime = "00:00:00";
};
```

Method *GetCurrentTime*:

* Calls *AskTimeServer*, writes result ot *LastFetchedTime* and returns the value;
* In case of *system_error*,  *GetCurrentTime* catches it and returns *LastFetchedTime*. 
* In case some other exception *GetCurrentTime* throws it further