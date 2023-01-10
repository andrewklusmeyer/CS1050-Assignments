/*****************************************************************************
 * Written By Andrew Klusmeyer (askrpz)
 * November 18th, 2022
 * Lab 11
 * CS1050
 * FS 2022
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct _Team
{
    char city[256];
    char name[256];
} Team;

typedef struct _Player
{
	char firstName[256];
    char lastName[256];
    long salary;
    Team team;
} Player;

/***********************************************************************************/

Player* sortFirstName(Player* players, int size) //This function will bubble sort by first name
{
    for(int pass = 1; pass < size; pass++) //Begins first loop
    {
        for(int j = 0; j < size - 1; j++) //Begins second loop
        {
            if(strcmp(players[j].firstName, players[j+1].firstName) > 0) //Compares two strings
            {
                Player hold = players[j];//Sets hold variable to first string
                players[j] = players[j+1]; //Sets first string to second string
                players[j+1] = hold; //Sets second string to hold variable
            }
        }
    }
    return players; //returns players
}

/**********************************************************************************/

Player* sortLastName(Player* players, int size) //This function will bubble sort by last name
{
    for(int pass = 1; pass < size; pass++) //begins first loop
    {
        for(int j = 0; j < size - 1; j++) //begins second loop
        {
            if(strcmp(players[j].lastName, players[j+1].lastName) > 0) //Checks two strings
            {
                Player hold = players[j]; //Sets hold variable to first string
                players[j] = players[j+1]; //Sets first string to second string
                players[j+1] = hold; //Sets second string to hold variable
            }
        }
    }
    return players; //returns players
}

/**********************************************************************************/

Player* sortSalary(Player* players, int size) //This function will bubble sort by salary
{
    for(int pass = 1; pass < size; pass++) //begins first loop
    {
        for(int j = 0; j < size - 1; j++) //begins second loop
        {
            if(players[j].salary > players[j+1].salary) //checks two longs
            {
                Player hold = players[j]; //sets hold variable to first string
                players[j] = players[j+1]; //sets first string to second string
                players[j+1] = hold; //sets first string to hold variable
            }
        }
    }
    return players; //returns players
}

/**********************************************************************************/

 int main(void)
 {
	Player players[] = 
    {
		{"Corey","Seager",32500000,{"Texas","Rangers"}},
		{"Stephen","Strasburg",35000000,{"Washington","Nationals"}},
		{"Gerrit","Cole",36000000, {"New York","Yankees"}},
		{"Mike","Trout",35500000, {"Los Angeles","Angels"}},
		{"Carlos","Correa",35100000,{"Minnesota","Twins"}},
		{"Anthony","Rendon",35000000,{"Los Angeles","Angels"}},
		{"Francisco","Lindor",34100000,{"New York","Mets"}},
		{"Trevor","Bauer",34000000,{"Los Angeles","Dodgers"}},
		{"Nolan","Arenado",32500000,{"St. Louis","Cardinals"}},
		{"Max","Scherzer",43300000,{"New York","Mets"}},
    };

        int size = sizeof(players)/sizeof(players[0]); //Calculates size of struct

        printf("\n\nPlayers:\n"); //prints initial header text
        printf("%20s %20s %20s %20s %20s\n", "First Name", "Last Name", "Salary", "City", "Name"); //prints category text
        for(int i = 0; i < size; i++) //begins loop to print initial struct
        {
            printf("%20s %20s %20ld %20s %20s\n", players[i].firstName, players[i].lastName, players[i].salary, players[i].team.city, players[i].team.name);
        }


        Player* firstSorted; //creates new struct for first names sorted
        firstSorted = sortFirstName(players, size); //Assigns values to struct
        printf("\n\nPlayers By First Name:\n"); //Prints header text
        printf("%20s %20s %20s %20s %20s\n", "First Name", "Last Name", "Salary", "City", "Name"); //Prints category text
        for(int j = 0; j < size; j++) //begins loop to print struct sorted by first name
        {
            printf("%20s %20s %20ld %20s %20s\n", firstSorted[j].firstName, firstSorted[j].lastName, firstSorted[j].salary, firstSorted[j].team.city, firstSorted[j].team.name);
        }

        Player* lastSorted; //creates new struct for last names sorted
        lastSorted = sortLastName(players, size); //assigns values to struct
        printf("\n\nPlayers By Last Name:\n"); //prints header text
        printf("%20s %20s %20s %20s %20s\n", "First Name", "Last Name", "Salary", "City", "Name"); //prints category text
        for(int k = 0; k < size; k++) //begins loop to print struct sorted by last name
        {
            printf("%20s %20s %20ld %20s %20s\n", lastSorted[k].firstName, lastSorted[k].lastName, lastSorted[k].salary, lastSorted[k].team.city, lastSorted[k].team.name);
        }

        Player* salarySorted; //creates new struct for salary sorted
        salarySorted = sortSalary(players, size); //assigns values to struct
        printf("\n\nPlayers By Salary:\n"); //prints header text
        printf("%20s %20s %20s %20s %20s\n", "First Name", "Last Name", "Salary", "City", "Name"); //prints category text
        for(int l = 0; l < size; l++) //begins loop to print struct sorted by salary
        {
            printf("%20s %20s %20ld %20s %20s\n", salarySorted[l].firstName, salarySorted[l].lastName, salarySorted[l].salary, salarySorted[l].team.city, salarySorted[l].team.name);
        }

        printf("\n\n"); //Additional lines

    
 }
