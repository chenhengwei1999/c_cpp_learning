#include "iostream"

using namespace std;


int main()
{
    /*
    Write a Fibonacci sequence simple game
    */
   string usr_name;

   int usr_answer;

   int num_tries = 1;
   int num_right = 0;
   /*
   Optionally, you can use 
   `int num_tries(0);`
   to initilize the int object.
   */
   double usr_score = 0.0;

   string usr_more;

   int fib_first = 1;
   int fib_second = 1;
   int system_right = 2;

   bool flag = true;

   cout << "Please enter your name: ";
   cin >> usr_name;
   cout  << "Hello, "
         << usr_name
         << ". Welcome to this simple Fibanacci game!\n"
         << "\n";

   while (flag)
   {
    cout << "This is your "
         << num_tries
         << " try. Just Go It!"
         << "\n";
    num_tries += 1;

    /*
    Give the Fibonacci sequence to usr
    */
    cout << "First number is: "
          << fib_first
          << ". And second number is: "
          << fib_second
          << ". \nPlease input your answer: ";
    cin >> usr_answer;

    if (usr_answer == system_right)
    {
        num_right += 1;
        usr_score = num_right / num_tries + num_right % num_tries;
        cout << "Your answer is right! Want to try again? Y/N ";
        cin >> usr_more;
        if (usr_more == "Y")
        {
            cout << "Your score is "
                 << usr_score
                 << ". Please go on it!\n";
            int system_right_tmp = system_right;
            system_right = system_right + fib_second;
            fib_first = fib_second;
            fib_second = system_right_tmp;
            
            // cout << "\nThe next answer is  "
            //      << system_right
            //      << ". \n";

            continue;
        }
        else
        {
            flag = false;
            cout << "Your score is "
                 << usr_score
                 << ". See you next time!\n";
            continue;
        }
    }
    else
    {
        usr_score = num_right / num_tries + num_right % num_tries;
        cout << "Answer is false. Want to try again? Y/N ";
        cin >> usr_more;
        if (usr_more == "Y")
        {
            cout << "Your score is "
                 << usr_score
                 << ". Please try again!\n";
            continue;
        }
        else
        {
            cout << "Your score is "
                 << usr_score
                 << ". Hoping next time will better!\n";
            flag = false;
            continue;
        }
    }

   }
   
   return 0;
}