#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

char matrix[3][3];  //intitial matrix declaration

char check(void); // declaration of functions
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main(void)
{
  char done;

  cout<<"Human vs. AI Tic Tac Toe."<<endl;
  cout<<"You will be playing against the computer as 'X'"<<endl;

  done =  ' ';
  init_matrix();

  do {
    disp_matrix();
    get_player_move();
    done = check(); /* check winner */
    if(done!= ' ') break; /* if winner found...*/
    get_computer_move();
    done = check(); /* check for winner again */
  } while(done== ' ');

  if(done=='X')
  cout<<"Human won! (but AI very dumb anyway)\n";
  else
  cout<<"AI so stupid still can win against you..."<<endl;
  disp_matrix(); /* show final positions */

  return 0;
}

/*Functions and function prototypes below
==============================================================================*/

void init_matrix(void) //matrix intitialisation
{
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++) matrix[i][j] =  ' ';
}


void get_player_move(void) //call function for player input
{
  int x, y;

  cout<<"Enter X,Y coordinates for your move: ";
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    cout<<"Invalid move, try again.\n";
    get_player_move();
  }
  else matrix[x][y] = 'X';
}

void get_computer_move(void) //AI move input
{
  int i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++)
      if(matrix[i][j]==' ') break;
    if(matrix[i][j]==' ') break;
  }

  if(i*j==9)  {
    cout<<"draw\n";
    exit(0);
  }
  else
    matrix[i][j] = 'O';
}

void disp_matrix(void) //matrix display
{
  int t;

  for(t=0; t<3; t++)
{
    printf(" %c | %c | %c ",matrix[t][0],
            matrix[t][1], matrix [t][2]);
    if(t!=2)
    printf("\n---|---|---\n");
  }
  printf("\n");
}


char check(void) //used for identifying winner
{
  int i;

  for(i=0; i<3; i++)  /* check rows */
    if(matrix[i][0]==matrix[i][1] &&
       matrix[i][0]==matrix[i][2]) return matrix[i][0];

  for(i=0; i<3; i++)  /* check columns */
    if(matrix[0][i]==matrix[1][i] &&
       matrix[0][i]==matrix[2][i]) return matrix[0][i];

  /* test diagonals */
  if(matrix[0][0]==matrix[1][1] &&
     matrix[1][1]==matrix[2][2])
       return matrix[0][0];

  if(matrix[0][2]==matrix[1][1] &&
     matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}
