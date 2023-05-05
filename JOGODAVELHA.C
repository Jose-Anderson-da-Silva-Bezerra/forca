#include <stdio.h>

int main() {
   char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
   int player = 1, choice, i;

   char mark;
   do {
      printf("\nJogador %d, escolha um número: ", player);
      scanf("%d", &choice);

      mark = (player == 1) ? 'X' : 'O';

      if (choice == 1 && square[0] == '1') {
         square[0] = mark;
      } else if (choice == 2 && square[1] == '2') {
         square[1] = mark;
      } else if (choice == 3 && square[2] == '3') {
         square[2] = mark;
      } else if (choice == 4 && square[3] == '4') {
         square[3] = mark;
      } else if (choice == 5 && square[4] == '5') {
         square[4] = mark;
      } else if (choice == 6 && square[5] == '6') {
         square[5] = mark;
      } else if (choice == 7 && square[6] == '7') {
         square[6] = mark;
      } else if (choice == 8 && square[7] == '8') {
         square[7] = mark;
      } else if (choice == 9 && square[8] == '9') {
         square[8] = mark;
      } else {
         printf("Jogada inválida!");

         player--;
         getchar();
      }
      i = checkwin(square);

      player = (player == 1) ? 2 : 1;

   } while (i == -1);

   display(square);

   if (i == 1) {
      printf("\nParabéns, jogador %d venceu!", --player);
   } else {
      printf("\nEmpate!");
   }

   return 0;
}

int checkwin(char square[]) {
   if (square[0] == square[1] && square[1] == square[2]) {
      return 1;
   } else if (square[3] == square[4] && square[4] == square[5]) {
      return 1;
   } else if (square[6] == square[7] && square[7] == square[8]) {
      return 1;
   } else if (square[0] == square[3] && square[3] == square[6]) {
      return 1;
   } else if (square[1] == square[4] && square[4] == square[7]) {
      return 1;
   } else if (square[2] == square[5] && square[5] == square[8]) {
      return 1;
   } else if (square[0] == square[4] && square[4] == square[8]) {
      return 1;
   } else if (square[2] == square[4] && square[4] == square[6]) {
      return 1;
   } else if (square[0] != '1' && square[1] != '2' && square[2] != '3' 
            && square[3] != '4' && square[4] != '5'
