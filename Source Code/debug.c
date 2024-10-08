  /* This program accepts a date in short format (mm/dd/yy) and displays the
date in long format. For example, given 02/25/09 the program will display
It is the 25th of February in the year 2009.
*/

#include <stdio.h>

/* this function accepts the last two digits of year and
  returns 1 if the year is leap year and
  return 0 otherwise
  - leap years are is perfectly divisible by four - 
   except for years which are both divisible by 100 and not divisible by 400. */
int isLeapYear(int year)
{
  int flag=0;
  
    /* convert the year from two digits to it four digit equivalent
      All years from 51-99 are considered in the 1900's and those years from
      0-50 are of the year 2000 and above, e.g. 79 is 1979 and 03 is 2003 
    */
  if (year > 50) 
      year += 1900;
  else
      year += 2000;
  
  if (year%400 == 0) /* Exactly divisible by 400 e.g. 2000 */
    flag = 1;
  else if (year%100 == 0) /* Exactly divisible by 100 and not by 400 e.g. 1900 */
    flag = 0;
  else if (year%4 == 0) /* Exactly divisible by 4 and neither by 100 nor 400 e.g. 2016, 2020 */
    flag = 1;
  else /* Not divisible by 4 or 100 or 400 e.g. 2017, 2018, 2019 */
    flag = 0;
	
  return flag;
}

/* This function accepts the month and the year(last two digits) as integers
  and returns  the number of days for a  specific month 
   note that februaries during a leap year have 29 days */

int getNumDays(int month, int yy)
{
    int days;
  
	if (month ==  4 || month == 6 || month == 9  || month == 11)
			days=30;
	else if (month ==  1 || month == 3 || month == 5  || month == 7
      || month == 8 || month == 10  || month == 12)
			days=31;
    else if	(month == 2)	
            if (isLeapYear(yy))
              days=29;
			else
          days=28;
            
	else		
			days=0;
	
	return days;
}

int main()
{
    int mm, dd, yy;
    int tens, ones;
    char temp;
    
    /* ask for the date, note that the variable temp is used to store the slashes */
    printf("Enter date (mm/dd/yy):");
    scanf("%d%c%d%c%d", &mm, &temp, &dd, &temp, &yy);
    
    /* check if the date is invalid
      it is invalid if the month is not between 1-12 or
                        the day is not between 1-31 or
                        (no need to check if the month has a 31 or not)
                        the year is not between 0-99
    */
    if (mm < 1 || mm > 12 ||
        dd < 1 || dd > getNumDays(mm, yy) ||
        yy < 0  || yy > 99)
          printf("\nInvalid date. Try again!\n\n");
    
    else {
        tens = dd / 10;
        ones = dd % 10;
        /* change 1 to 1st, 2 to 2nd, 3 to 3rd, 4 to 4th and so on
            note that 21 is 21st, 31 is 31st but 11 is 11th
        */
        printf("It is the %d", dd);
        if (ones == 1 && tens != 1)
          printf("st");
        else if (ones == 2 && tens != 1)
          printf("nd");
        else if (ones == 3 && tens != 1)
          printf("rd");
        else
          printf("th");
          
        printf(" of ");
        
        /* change the month from numeric format to its word equivalent */
        
        switch (mm)
        {
          case 1:  
            printf("January"); 
            break;
          case 2:  
            printf("February"); 
            break;
          case 3:   
              printf("March"); 
              break;
          case 4:   
            printf("April"); 
            break;
          case 5:   
            printf("May"); 
            break;
          case 6:   
            printf("June"); 
            break;
          case 7:   
            printf("July"); 
            break;
          case 8:   
            printf("August"); 
            break;
          case 9:   
            printf("September"); 
            break;
          case 10:   
            printf("October"); 
            break;
          case 11:   
            printf("November");
            break; 
          case 12:   
            printf("December"); 
            break;
        }
        
        printf(" in the year ");
        
        /* expand the date 
          All years from 51-99 are considered in the 1900's and those years from
          0-50 are of the year 2000 and above, e.g. 79 is 1979 and 03 is 2003 
        */
        if (yy > 50) {
          printf("19");
          printf("%02d", yy);
        }
        else 
        {
          printf("20");
          printf("%02d", yy);
        }
        printf(".\n\n");
      }
      
    return 0;   
      
}
