#include <time.h>
#include <stdio.h>

int main()
{
	time_t current = time(NULL);
	struct tm *timer = localtime(&current);	
	char *wday_name[] = {"Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};

	printf("Current time is %d-%d-%d ( %s ) %d:%d:%d. \n",
			timer->tm_year + 1900,
			timer->tm_mon + 1,
			timer->tm_mday,	
			wday_name[timer->tm_wday],
			timer->tm_hour,
			timer->tm_min,
			timer->tm_sec
		  );
	return 0;
}
