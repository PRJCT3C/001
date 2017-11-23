#ifndef MYCSTRINGS_H
#define MYCSTRINGS_H
#include <iostream>
using namespace std;
const char APLHA []={"entertaing for"};
const char DIGIT[] = {"on 7 days"};
class myCstrings
{
public:
    myCstrings();
    void _print_char_arr(char src[]);
    int _StrLen(char src[]);
    void _StrCpy(char dest[] , char src[]);
    void _StrCat(char dest[], char src[]);
    int _StrCmp(char dest[], char src[]);
    int _StrChr(char dest[], char var);
    int _StrRChr(char dest[], char var);
    void _StrNCpy( char dest[], char src[], int num);
    void _StrNCat( char dest[],char src[],int num);
    void _StrNCmp(char var[], char var2[], int num);
    void _SubStr(char src[], int start, int length, char sub[]);

    int _Find( char src[], char character, int pos);

    void _Reverse( char src[]);
    int _FindFirstof(char src[], char set[], int pos);
    void _FindFirstNotOf(char src[], char set, int pos);
    void _ToLower( char source[ ]);
    void _ToUpper( char source[ ]);
    void menu();

};

#endif // MYCSTRINGS_H
