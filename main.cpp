#include <iostream>
#include <string.h>

using namespace std;

void input();//String input
int parse_words();//Parse array of words out of string,returns count of words
void input_l(int*);//Input word length
void output_count(int,int);//Output count of words longer than input length

char s[100];//input string
char words[10][10];//array of words

int main() {
    int k;//words count
    input();
    k = parse_words();
    int l;//user input length
    input_l(&l);
    output_count(k,l);
    return 0;
}

void input()
{
puts("Input string not longer than 100 symbols,each word not longer than 10 symbols");
gets(s);
}

void input_l(int *m)
{
    puts("Input word length");
    cin >> *m;
}

int parse_words()
{
    int k=0;
    char *p;
    char delimiters[4]=" ,.";
    puts("Words in the string");
    p=strtok(s,delimiters);
    while (p != NULL)
    {
        strcpy(words[k],p);
        puts(p);
        p=strtok(NULL,delimiters);
        k++;
    }
    cout << "Word count " << k << endl;
    return k;
}

void output_count(int k,int l)
{
    int c = 0;
    for (int i = 0;i < k;i++)
    {
        if (strlen(words[i]) > l)
            c++;
    }
    cout << "Words longer than " << l << ": " << c <<endl;
}

