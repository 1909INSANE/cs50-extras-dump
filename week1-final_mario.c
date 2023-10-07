#include <cs50.h>
#include <stdio.h>
int get_size(void);
int get_clms_size(void);
int get_rws_size(void);
void print_grid(int rws, int clms);

/*
INSTRUCTIONS TO USE FUNCTIONS HERE

++ FUNCTIONS ARE FULL FAULT PROOF/ TOLERANCE

AVAILABLE FUNCTIONS + USE CASE
1. get_rws_size(void :: user input) :: int return type :: --> assign it to a var simply
2. get_clms_size(void :: user input) :: int return type :: --> assing it to a var simply 
3. print_grid(rows_of_size, size_of_clms) :: void return type : (no return type) :: --> prints outcome
*/

/*
HOW TO COMPILE

1.Install cs50 lib
2. gcc <name_of_file.c> -lcs50* ((-o <output_name>))**

* Have to link with lcs50 (cs50 lib) to use cs50 lib
** Optional ..
*/

int main()
{

    int size_rws, size_clms;
    size_rws = get_rws_size();
    size_clms = get_clms_size();
    print_grid(size_rws, size_clms);
}

int get_rws_size(void)
{
    int ask_rws;

    do
    {
        ask_rws = get_int("#ROWS : ");
    } while (ask_rws < 0);

    int const rws = ask_rws;
    return rws;
}

int get_clms_size(void)
{
    int ask_clmns;

    do
    {
        ask_clmns = get_int("#COLUMNS : ");
    } while (ask_clmns < 0);

    int const clmns = ask_clmns;
    return clmns;
}

void print_grid(int rws, int clms)
{
    int i,j;
    for(i=0; i<rws; i++)
    {
        for(j=0; j<clms; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
