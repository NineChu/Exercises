#include <IOSTREAM.H>
#include <CONIO.H>

char grd[25][80][2];
int plr[2] = {12, 39}, level = 0, maxlv = 0;
char plrchr = '\x94', wallchr = '\x30', boxchr = '\x23', endchr = '\xea';

void fillarea(int y1, int x1, int y2, int x2, int layer, char fillchar)
{
  if (y1 <= y2 && x1 <= x2)
  {
    for (int i = y1; i <= y2; i++)
    {
      for (int i2 = x1; i2 <= x2; i2++)
      {
        grd[i][i2][layer] = fillchar;
      }
    }
  }
  else if (y1 <= y2 && x1 > x2)
  {
    for (int i = y1; i <= y2; i++)
    {
      for (int i2 = x2; i2 >= x1; i2--)
      {
        grd[i][i2][layer] = fillchar;
      }
    }
  }
  else if (y1 > y2 && x1 <= x2)
  {
    for (int i = y2; i >= y1; i--)
    {
      for (int i2 = x1; i2 <= x2; i2++)
      {
        grd[i][i2][layer] = fillchar;
      }
    }
  }
  else if (y1 > y2 && x1 > x2)
  {
    for (int i = y2; i >= y1; i--)
    {
      for (int i2 = x2; i2 >= x1; i2--)
      {
        grd[i][i2][layer] = fillchar;
      }
    }
  }
}

void cnglv(int lv)
{
  fillarea(0, 0, 24, 79, 0, ' ');
  fillarea(0, 0, 24, 79, 1, ' ');
  switch (lv)
  {
  case 0:
    plr[0] = 21;
    plr[1] = 35;
    fillarea(15, 24, 24, 42, 0, wallchr);
    fillarea(16, 30, 24, 41, 0, ' ');
    fillarea(17, 31, 24, 39, 0, wallchr);
    fillarea(18, 32, 24, 38, 0, ' ');
    fillarea(19, 40, 19, 41, 0, wallchr);
    fillarea(16, 41, 17, 41, 0, wallchr);
    fillarea(16, 40, 18, 40, 0, ' ');
    fillarea(24, 26, 24, 29, 0, ' ');
    fillarea(18, 25, 18, 28, 0, ' ');
    fillarea(19, 28, 23, 28, 0, ' ');
    fillarea(22, 25, 22, 26, 0, ' ');
    fillarea(20, 25, 21, 27, 0, ' ');
    fillarea(16, 25, 17, 25, 0, ' ');
    grd[18][39][0] = ' ';
    grd[17][24][0] = ' ';
    fillarea(24, 28, 24, 29, 1, boxchr);
    fillarea(22, 25, 22, 26, 1, boxchr);
    grd[18][39][1] = boxchr;
    grd[17][25][1] = boxchr;
    grd[17][23][0] = endchr;
    break;
  }
}

void movebox(int locy, int locx, int y, int x)
{
  if (locy + y >= 0 && locy + y < 25 && locx + x >= 0 && locx + x < 80 && grd[locy + y][locx + x][0] != wallchr && grd[locy + y][locx + x][0] != endchr)
  {
    if (grd[locy + y][locx + x][1] != ' ')
    {
      movebox(locy + y, locx + x, y, x);
    }
    if (grd[locy + y][locx + x][1] == ' ')
    {
      grd[locy + y][locx + x][1] = grd[locy][locx][1];
      grd[locy][locx][1] = ' ';
    }
  }
}

void move(int y, int x)
{
  if (plr[0] + y >= 0 && plr[0] + y < 25 && plr[1] + x >= 0 && plr[1] + x < 80)
  {
    if (grd[plr[0] + y][plr[1] + x][0] == endchr)
    {
      level++;
      cnglv(level);
    }
    else
    {
      if (grd[plr[0] + y][plr[1] + x][1] != ' ')
      {
        movebox(plr[0] + y, plr[1] + x, y, x);
      }
      if (grd[plr[0] + y][plr[1] + x][0] != wallchr && grd[plr[0] + y][plr[1] + x][1] == ' ' && grd[plr[0] + y][plr[1] + x][0] != endchr) // detector de colisão
      {
        plr[0] = plr[0] + y;
        plr[1] = plr[1] + x;
      }
    }
  }
}

void main()
{
  clrscr();
  char key = 'w';
  cout << "\n Aperte \"WASD\" para se mover";
  cout << "\n Aperte \"t\" para sair";
  cout << "\n Representação dos caracteres:";
  cout << "\n   \"" << plrchr << "\" É você";
  cout << "\n   \"" << wallchr << "\" É uma parede";
  cout << "\n   \"" << boxchr << "\" É uma caixa";
  cout << "\n   \"" << endchr << "\" É o final da fase";
  cout << "\n\n O jogo tem " << maxlv+1 << " fases.";
  getch();
  cnglv(level);
  while (key != 't')
  {
    clrscr();
    for (int i = 0; i < 25; i++)
    {
      for (int i2 = 0; i2 < 80; i2++)
      {
        if (i == 24 && i2 == 79)
        {
          break;
        }
        if (grd[i][i2][1] == ' ')
        {
          if (i != plr[0] || i2 != plr[1])
          {
            cout << grd[i][i2][0];
          }
          else
          {
            cout << plrchr;
          }
        }
        else
        {
          cout << grd[i][i2][1];
        }
      }
    }
    key = getch();
    switch (key)
    {
    case 'w':
      move(-1, 0);
      break;
    case 'a':
      move(0, -1);
      break;
    case 's':
      move(1, 0);
      break;
    case 'd':
      move(0, 1);
      break;
    }
    if (level > 0)
    {
      key = 't';
    }
  }
  if (level > 0)
  {
    do
    {
      clrscr();
      cout << "\n Parabéns, você ganhou o jogo !!! (Aperte Enter)";
    } while (getch() != '\r');
  }
}