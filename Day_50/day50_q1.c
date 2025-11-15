// Q99 Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter your date of birth in (dd/mm/yyyy) Format: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Extract day, month, year
    char day[3], month[3], year[5];
    strncpy(day, str, 2);
    day[2] = '\0';

    strncpy(month, str + 3, 2);
    month[2] = '\0';

    strncpy(year, str + 6, 4);
    year[4] = '\0';

    // Convert month number to abbreviation
    char *monthName;
    if (strcmp(month, "01") == 0) monthName = "Jan";
    else if (strcmp(month, "02") == 0) monthName = "Feb";
    else if (strcmp(month, "03") == 0) monthName = "Mar";
    else if (strcmp(month, "04") == 0) monthName = "Apr";
    else if (strcmp(month, "05") == 0) monthName = "May";
    else if (strcmp(month, "06") == 0) monthName = "Jun";
    else if (strcmp(month, "07") == 0) monthName = "Jul";
    else if (strcmp(month, "08") == 0) monthName = "Aug";
    else if (strcmp(month, "09") == 0) monthName = "Sep";
    else if (strcmp(month, "10") == 0) monthName = "Oct";
    else if (strcmp(month, "11") == 0) monthName = "Nov";
    else if (strcmp(month, "12") == 0) monthName = "Dec";
    else monthName = "Invalid";

    // Print in desired format
    printf("Converted Date: %s-%s-%s\n", day, monthName, year);

    return 0;
}
