#include <iostream>
 using namespace std;
 char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
  char player = 'X';
  int r;
  void Draw()
   { system("cls");
    for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 3; j++) {
     cout << matrix[i][j] << " ";
       } cout << endl;
      }
    }
    void Input() {
    int pos;
    ++r;
      cout << "Enter a number between [1,9]\n It is "<<player<<"turn\n";
       cin >> pos;
     if (pos== 1&& matrix[0][0] !='X' && matrix[0][0] !='O' )
     matrix[0][0]=player;
      else if (pos== 2 && matrix[0][1] !='X' && matrix[0][1] !='O' )
      matrix[0][1] =player;
      else if (pos== 3&& matrix[0][2] !='X' && matrix[0][2] !='O' )
      matrix[0][2] =player;
      else if (pos== 4 && matrix[1][0] !='X' && matrix[1][0] !='O' )
      matrix[1][0] =player;
      else if (pos== 5 && matrix[1][1] !='X' && matrix[1][1] !='O' )
      matrix[1][1] =player;
 else if (pos == 6 && matrix[1][2] !='X' && matrix[1][2] !='O' )
      matrix[1][2] =player;
      else if (pos== 7 && matrix[2][0] !='X' && matrix[2][0] !='O' )
      matrix[2][0] =player;
      else if (pos == 8 && matrix[2][1] !='X' && matrix[2][1] !='O' )
      matrix[2][1] =player;
 else if (pos == 9&& matrix[2][2] !='X' && matrix[2][2] !='O' )
      matrix[2][2] =player;

      else { cout<<"Invalid choice ";
       r-- ;
       Input();
      }
         }
       void TogglePlayer()
       { if (player == 'X')
      player = 'O';
     else player = 'X'; }
     char Winner() {

     int cx=0,co=0;
   for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
      if(matrix[i][j]=='X')
      cx++;
   else  if(matrix[i][j]=='O')
      co++;
       if(cx==3 ||co==3 ){
  if(cx>co)return'X';
  else
  return 'O';
  }}cx=0; co=0;}


  for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
      if(matrix[j][i]=='X')
      cx++;
   else  if(matrix[j][i]=='O')
      co++;
       if(cx==3 ||co==3 ){
  if(cx>co)return'X';
  else
  return 'O';
  }
  }cx=0; co=0;}

    if(cx==3 ||co==3 ){
    if (cx>co )
    return'X';
  else
  return 'O';}

   if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') return 'X';
  if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X') return 'X';
 if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') return 'O';
  if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O') return 'O';
      return '/';
      }
      int main(){
       int choice;
     Draw();
      start:
     while (1) {
        Input();
       Draw();
       if (Winner() == 'X')
   { cout << "X wins";
     break;
     } else if (Winner() == 'O') {
      cout <<"O wins";
      break;}
   else if(r==9) { cout<<"Draw"<<endl;
    break; }
  TogglePlayer();
    }
    cout<<endl;
    cout<<" Do you want to play another game?\nEnter 0 to exit,1 to continue ";
     cin>>choice;
   if(choice==1) {
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        matrix[i][j]=i*3+(j+1)+48;
    }
}
r=0;
player='X';
goto start;
            }

 else {
return 0;
}


 return 0; }
