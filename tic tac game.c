#include <stdio.h>
#include <stdlib.h>

char matrix[3][3];

char checkBoard(void);
void init_matrix(void);
void playerTurn(void);
void computerTurn(void);
void displayBoard(void);

int main(void)
{
  char done;

  printf("Welcome to Tic Tac Toe Game.\n");
  done =  ' ';
  init_matrix();

  do {
    displayBoard();
    playerTurn();
    done = checkBoard();
    if(done!= ' ') break;
    computerTurn();
    done = checkBoard();
  } while(done== ' ');

  if(done=='X') printf("Congratulations! You won\n");
  else printf("Better luck next time! You loose\n");
  displayBoard();

  return 0;
}

void init_matrix(void)
{
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++) matrix[i][j] =  ' ';
}

void playerTurn(void)
{
  int x, y;

  printf("Enter X,Y coordinates for your move: ");
  scanf("%d%*c%d", &x, &y);

  x--; y--;

  if(matrix[x][y]!= ' '){
    printf("Invalid move, Valid values (1 to 3)\n");
    playerTurn();
  }
  else matrix[x][y] = 'X';
}

void computerTurn(void)
{
  int i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++)
      if(matrix[i][j]==' ') break;
    if(matrix[i][j]==' ') break;
  }

  if(i*j==9)  {
    printf("Draw! No one won.\n");
    exit(0);
  }
  else
    matrix[i][j] = 'O';
}

void displayBoard(void)
{
  int t;

  for(t=0; t<3; t++) {
    printf(" %c | %c | %c ",matrix[t][0],
            matrix[t][1], matrix [t][2]);
    if(t!=2) printf("\n---|---|---\n");
  }
  printf("\n");
}
char checkBoard(void)
{
  int i;

  for(i=0; i<3; i++)
    if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
       return matrix[i][0];

  for(i=0; i<3; i++)
    if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
       return matrix[0][i];

  if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])
       return matrix[0][0];

  if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
       return matrix[0][2];

  return ' ';
}
