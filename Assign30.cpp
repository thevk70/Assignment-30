// 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.
// #include <iostream>
// using namespace std;
// void try_test(int num)
// {
//     char str[] = "Your number is Less than 10";
//     try
//     {
//         if (num>10)
//         {
//             throw num;
//         }
//         else
//         {
//             throw str;
//         }
//     }
//     catch(int n)
//     {
//         cout<<"You have enter a number which is greater than 10."<<endl;
//     }
//     catch(char s[])
//     {
//         cout<<str<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number:: ";
//     cin>>n;
//     try_test(n);
//     return 0;
// }

// 2. Write a C++ program to demonstrate try, throw and catch statements.
// #include <iostream>
// using namespace std;
// int main()
// {
//     try
//     {
//         throw 1;
//     }
//     catch(char e)
//     {
//         cout<<"\n Exception Caught '"<<e<<"'"<<endl;
//     }
//     catch(...)
//     {
//         cout<<"Other Exception"<<endl;
//     }
//     cout<<"outside catch block";
//     return 0;
// }

// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, d;
//     char op;
//     cout << "Enter 1st number:: " << endl;
//     cin >> n;
//     cout << "Enter 2nd number:: " << endl;
//     cin >> d;
//     cout << "Enter operator:: " << endl;
//     cin >> op;
//     try
//     {
//         switch (op)
//         {
//         case '+':
//             cout << n << "+" << d << " = " << n + d;
//             break;
//         case '-':
//             cout << n << "-" << d << " = " << n - d;
//             break;
//         case '*':
//             cout << n << "*" << d << " = " << n * d;
//             break;
//         case '/':
//             if (d == 0)
//             {
//                 throw(d);
//             }
//             else
//                 cout << n << "/" << d << " = " << n / d;
//             break;
//         default:
//             throw(op);
//             break;
//         }
//     }
//     catch (int d)
//     {
//         cout << "Dividend can't be zero." << endl;
//     }
//     catch (char a)
//     {
//         cout << "Invalid operator." << endl;
//     }
//     return 0;
// }

// 4. Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.
// #include <iostream>
// using namespace std;
// int main()
// {
//     char email[100];
//     cout<<"Enter your email address::"<<endl;
//     cin.getline(email,100);
//     try
//     {
//         int error = 1;
//         for (int i = 0; i < 100; i++)
//         {
//             if (email[i] == '@')
//             {
//                 error--;
//                 cout<<"It's a valid Email.";
//                 break;
//             }
//         }
//         if (error == 1)
//         {
//             throw email;
//         }
//     }
//     catch(char s[])
//     {
//         cout<<"Invalid Email"<<endl;
//     }
//     return 0;
// }

// 5. Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.
// #include <iostream>
// using namespace std;
// int main()
// {
//     long long mob_no;
//     cout<<"Enter your mobile number::"<<endl;
//     cin>>mob_no;
//     try
//     {
//         int i = 0;
//         while (mob_no != 0)
//         {
//             mob_no = mob_no/10;
//             i++;
//         }
//         if (i == 10)
//         {
//             cout<<"It's a valid mobile number.";
//         }
//         else
//         {
//             throw(mob_no);
//         }
//     }
//     catch(const long long n)
//     {
//        cout<<"It's a invalid mobile number.";
//     }
//     return 0;
// }

// 6. Write a C++ program to accept area pincode and throw an exception if it does not
// contain 6 digits.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int area_pinCode;
//     cout<<"Enter your mobile number::"<<endl;
//     cin>>area_pinCode;
//     try
//     {
//         int i = 0;
//         while (area_pinCode != 0)
//         {
//             area_pinCode = area_pinCode/10;
//             i++;
//         }
//         if (i == 6)
//         {
//             cout<<"It's a valid Pin code.";
//         }
//         else
//         {
//             throw(area_pinCode);
//         }
//     }
//     catch(const int n)
//     {
//        cout<<"It's a invalid Pin code.";
//     }
//     return 0;
// }

// 7. Write a C++ program to accept a username if the username has less than 6 characters
// or does contain any digit or special symbol.
// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[7];
//     cout << "Enter a string :: " << endl;
//     cin.getline(str, 7);
//     try
//     {
//         for (int i = 0; str[i] != '\0'; i++)
//         {
//             if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4'
//             || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
//             {
//                 throw 1;
//             }
//         }
//     }
//     catch (const int n)
//     {
//         cout << "Error :: Username can not contain any digit." << endl;
//     }
//     return 0;
// }

// 8. Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter.
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     int dig = 0,alp = 0,splch = 0;
//     char pass[20];
//     cout<<"Enter Password::"<<endl;
//     cin.getline(pass,20);
//     try
//     {
//         if (strlen(pass) > 6)
//         {
//             for (int i = 0; i < strlen(pass); i++)
//             {
//                if ((pass[i] >= '1') && (pass[i] <= '9'))
//                {
//                    dig = 1;
//                }
//                else if  (((pass[i] >= 'a') && (pass[i] <= 'z')) || ((pass[i] >= 'A') && (pass[i] <= 'Z')))
//                {
//                    alp = 1;
//                }
//                else
//                {
//                   splch = 1;
//                }
//             }

//         }
//         else
//         {
//             throw 1;
//         }

//     }
//     catch (const int a)
//     {
//         cout<<"Password must be more than 6 character."<<endl;
//     }
//     if(dig == 0 || splch == 0 || alp == 0)
//     {
//         cout<<"Password must be contain a special character , digits and capital letter."<<endl;
//     }
//     else
//     {
//         cout<<"Your password :: "<<pass<<endl;
//     }
//     return 0;
// }

// 9. Write a C++ program to accept gmail id only and throw an exception if the id does not
// contain @ and gmail.com.
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char gmail[60];
//     int splch = 0;
//     int count = 100;
//     int j = 0;
//     char str[] = "gmail.com";
//     char temp[11] = {0};

//     cout << "Enter your Gmail ID :: ";
//     cin.getline(gmail, 60);
//     int length = strlen(gmail);
//     for (int i = 0; i < length; i++)
//     {
//         if (gmail[i] == '@')
//         {
//             splch = 1;
//             count = i;
//         }
//         else if (i >= count)
//         {
//             temp[j] = gmail[i];
//             j++;
//         }
//     }
//     try
//     {
//         if (splch == 1)
//         {
//             for (int i = 0; i <= 8; i++)
//             {
//                 if (str[i] != temp[i])
//                 {
//                     throw 1;
//                 }
//             }
//         }
//         else
//         {
//             throw 1;
//         }
        
//     }
//     catch (const int a)
//     {
//         cout << "Please the email in right way.";
//     }
//     return 0;
// }

// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
// characters or does contain a digit or special symbol or space.
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     int dig = 0,alp = 0,splch = 0;
//     char pass[20];
//     cout<<"Enter Password::"<<endl;
//     cin.getline(pass,20);
//     try
//     {
//         if (strlen(pass) > 8)
//         {
//             for (int i = 0; i < strlen(pass); i++)
//             {
//                if ((pass[i] >= '1') && (pass[i] <= '9'))
//                {
//                    dig = 1;
//                }
//                else if  (((pass[i] >= 'a') && (pass[i] <= 'z')) || ((pass[i] >= 'A') && (pass[i] <= 'Z')))
//                {
//                    alp = 0;
//                }
//                else
//                {
//                   splch = 1;
//                }
//             }

//         }
//         else
//         {
//             throw 1;
//         }

//     }
//     catch (const int a)
//     {
//         cout<<"Nickname must be more than 8 character."<<endl;
//     }
//     if(dig == 1 || splch == 1)
//     {
//         cout<<"Nickname must not be contain a special character , digits and capital letter."<<endl;
//     }
//     else
//     {
//         cout<<"Your Nickname :: "<<pass<<endl;
//     }
//     return 0;
// }