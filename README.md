C Programming
Semester-1
       TOPIC – CONSOLE STOPWATCH IN C
           
NAME- AYUSH RAWAT 
SAP ID- 590027858
BATCH- 46
Code link -  https://github.com/ayushrawat2007124-max/c-project.git

OBJECTIVE –
•	to implement a working stopwatch that measures elapsed time in seconds.


Press  1  -  To start stopwatch ( press enter to start , press enter again to stop the    stopwatch.
Press 2  -   To Exit program.

Detailed explanation of blocks of code – 
1)
             
•	stdio .h  => standard I/O (printf, scanf, getchar).
•	stdlib.h  => general utilities (not strictly used here but common to include).
•	time.h    => time-related functions (time() and time_t).
2) 
         
Convert a total elapsed time in seconds to hours, minutes, and seconds and print it in hh:mm:ss format.
•	int h = seconds/3600;
	Computes whole hours(3600 seconds=1 hour)
•	int m = (seconds % 3600)/60;
	seconds % 3600 leaves the remainder after removing full hours; dividing that by 60 gives whole minutes.
•	int s=seconds%60;
	Remaining seconds after removing minutes.
•	printf("Elapsed Time=%02d:%02d:%02d\n",h,m,s);
	Prints hours/minutes/seconds padded with leading zeros to 2 digits each (%02d).




3) 
           
Variables
•	choice  = stores user's menu selection.
•	time_t start_time, end_time: time_t is type from <time.h> used to store epoch times .
•	long elapsed: stores difference of end_time - start_time as seconds.

4)
               
•	An infinite loop (while(1)) repeatedly displays the menu and asks for a choice.
•	scanf("%d",&choice); reads an integer from stdin. Caveat: if non-integer input is entered, scanf will fail and leave input in the buffer.

5)
      
i)  printf("\nStopwatch start...(Press ENTER to start)\n");
•	Prompt the user to press Enter to start timing.
ii)  getchar(); getchar();
•	This is a common quick hack to consume leftover characters in input buffer and then wait for Enter:
o	Why used here: After scanf("%d", &choice), the newline \n produced when the user pressed Enter remains in input buffer. The first getchar() consumes that newline; second getchar() waits for the next Enter from the user to actually start the stopwatch.
o	Fragility: If the user typed extra characters (e.g., spaces or letters) before pressing Enter, buffer state can differ and this pattern may not behave as intended. A more robust approach is to flush the rest of the input line properly.
iii)   start_time = time(NULL);
•	Records the current calendar time in seconds. time(NULL) returns a time_t value representing seconds since epoch.
iv)  printf("Stopwatch running...Press ENTER to stop.\n");
•	Prompt to stop the stopwatch.
v)  getchar();
•	Waits for the user to press Enter (consumes the newline) signaling stop.
vi)   end_time = time(NULL);
•	Capture stop time in seconds.
vii)  elapsed = (long)(end_time - start_time);
•	Compute elapsed seconds as difference (type cast to long).
viii)  format_time(elapsed);
•	Print elapsed time in hh:mm:ss.

6)
         
Prints farewell and break; exits the while(1) loop and then the program ends with return 0;.
7)
        
If user enters something other than 1 or 2, program prompts again.
8) 
        
Standard return code for successful execution.

CONCLUSION:- 
This simple stopwatch program is a good educational example showing menu-driven control, basic time measurement using the C standard library, and formatting of elapsed time into human-readable form. It is a solid base for enhancements.




