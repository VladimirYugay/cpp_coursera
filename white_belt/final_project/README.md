### Database 

Create a databse interacting with the user via terminal 
The database contains date - event values 

**Date** is a non empty string of the format year-month-day all integers 
**Event** is non empty string, no need to copy similar events 

All operations with the database are from the standard IO
Empty strings are possible 

1. **Add** operation: Add "Date" "Event" 
2. **Del** operation: Del "Date" "Event". 
 If the event was deleted print "Deleted successfully"
 If the event was not found print "Event not found" 
3. **Del** operation: Del "Date". 
 Deletes all the events for a given date.
 Should always print "Deleted N events", N may be 0
4. **Find** operation: Find "Date"
 Print sorted events per line for a given date 
5. **Print** operation: Print 
 Prints all the pairs (date, event) sorted by date
 All events within a date should be sorted 
 Dates should be in a YYYY-MM-DD format with filled 0 in case of not full values


**Error Handling** 

* If the user entered a non existing command print: «Unknown command: COMMAND»
* If the user entered date in a wrong format Y-M-D print: «Wrong date format: DATE»
* In case month value is invalid print: «Month value is invalid: MONTH»
* In case day value is invalid print: «Day value is invalid: DAY»

No need to check
- Year 
- Specific years and number of days in a month 
- If both day and month are invalid print month error message 
- Each command takes exactly one line, but may be empty 
- All commands have all necessary fields 


**Examples**

Input 
```
Add 0-1-2 event1
Add 1-2-3 event2
Find 0-1-2
```
Output
```
Del 0-1-2
Print
Del 1-2-3 event2
Del 1-2-3 event2
```

Invalid input 
```
Add 0-13-32 event1
``` 

Output
```
Month value is invalid: 13
```

