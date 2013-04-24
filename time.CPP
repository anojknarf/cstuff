#include <iostream.h>
#include <time.h>
#include<conio.h>
int main()
{
    time_t tim;  //create variable of time_t
    time(&tim); //pass variable tim to time function
    cout << ctime(&tim); // this translates what was returned from time() into a readable format
    getch();
    return 0;
}


#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    time_t tim;  //create variable of time_t
    time(&tim); //pass variable tim to time function
    cout << ctime(&tim); // this translates what was returned from time() into a readable format

    return 0;
}
