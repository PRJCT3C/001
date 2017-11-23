#include "mycstrings.h"

myCstrings::myCstrings()
{

}
void myCstrings:: _print_char_arr(char src[])
{
    for(int i=0;src[i]!='\0';i++)
    {
        cout<<src[i];
    }
}

int myCstrings::_StrLen(char src[])//not showing the length
{
    int count = 0;
    for(int i = 0;src[i]!='\0';i++)
    {
        count++;
    }
    return count;

}

void myCstrings::_StrCpy(char dest[] , char src[])
{
    for(int i=0;dest[i]!='\0';i++)
    {
        dest[i] = src[i];
    }
}

void myCstrings::_StrCat(char dest[], char src[])
{
    int len = _StrLen(dest);
    for(int i = 0; dest[i]!='\0';i++)
    {
        dest[len+i] = src[i];
    }

}

void myCstrings::_Reverse( char src[])
{
    int len =  _StrLen(src);
    for(int i = len; i >= 0; i--)
    {
        cout<<src[i];
    }
}


void myCstrings::_ToLower( char source[ ])
{
    for (int i = 0; source[i] != '\0'; i++)
    {
        if(source[i] >= 'a' && source[i] <='z')
        {
            source[i]=source[i];
        }
        else if(source[i] >= 'A' && source[i] <= 'Z')
        {
            source[i] = source[i] + 32;
        }
    }

    _print_char_arr(source);

}

void myCstrings::_ToUpper( char source[ ])
{
    for (int i = 0; source[i] != '\0'; i++)//stopping at null char of src
    {
        if(source[i] >= 'a' && source[i] <='z')
        {
            source[i]=source[i]-32;
        }
        else
            if(source[i] >= 'A' && source[i] <= 'Z')
            {
                source[i] = source[i];
            }

    }

    _print_char_arr(source);
}
void myCstrings::menu(){
    cout << "===============================================================" << endl;
    cout<<"[l]ength [c]opy  con[C]atenate [s]earch com[p]are [S]earch reverse" <<endl;
    cout<<" [t]o lower  [T]o upper  [r]everse   "<<endl;
    cout<<"  .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .       "<<endl;
    cout<<"         [?]menu        e[x]it     "<<endl;
    cout << "===============================================================" << endl;
}

int myCstrings::_StrCmp( char dest[], char src[]){
    int key = 0;
    for(int i = 0;dest[i]!='\0';i++){
        if(dest[i]>src[i]){
            key = 1;
        }
        else  if(dest[i]<src[i]){
            key = -1;
        }
        else {
            key =0;
        }
    }
    return key;
}

int myCstrings::_StrChr(char dest[], char var){
    int index = 0;
    int r = _StrLen(dest);
    for(int i = r;i>=0;i--){
        if(dest[i] == var){
            index = i;
        }
    }
    return index;

}

int myCstrings::_StrRChr(char dest[], char var){
    int index = 0;

    for(int i = 0;dest[i]!= '\0';i++){
        if(dest[i] == var){
            index = i;

        }
    }

    return index;

}
//needs to reuse written functions
void myCstrings::_StrNCpy( char dest[], char src[], int num){
    for(int i = 0; dest[i]!='\0';i++){
        if(num>i)
            dest[i] = src[i];
    }
}

void myCstrings::_StrNCat( char dest[],char src[],int num){
    int len = _StrLen(dest);
    for(int i=0;src[i]!= '\0';i++){
        if(num>i)
            dest[len+i] = src[i];
    }
}

void myCstrings::_StrNCmp(char var[], char var2[], int num){//question

}
void myCstrings::_SubStr(char src[], int start, int length, char sub[]){//bugged
    for(int i = 0;src[i]!=src[length];i++){

            sub[i] = src[start+i];


    }
}
int myCstrings:: _Find( char src[], char character, int pos){//find first occurence start at pos

}

int myCstrings::_FindFirstof(char src[], char set[], int pos){

}

void myCstrings::_FindFirstNotOf(char src[], char set, int pos){

}
