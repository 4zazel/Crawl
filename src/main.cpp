#include <ncurses.h>

WINDOW *create_win(int height, int width, int starty, int startx);
void destory_win(WINDOW *win);

int main()
{
  WINDOW *game_win, *stats_win, *inv_win;
  int height, width, starty, startx;
  char ch;

  initscr();
  cbreak();

  keypad(stdscr, TRUE);

  refresh();

  height = LINES - 12;
  width = COLS - 50;
  starty = 0;
  startx = 0;

  game_win = create_win(height, width, starty, startx);

  startx = width;
  width = 50;

  inv_win = create_win(height, width, starty, startx);

  startx = 0;
  starty = height;

  width = COLS;
  height = 12;

  stats_win = create_win(height, width, starty, startx);
  
  while((ch = getch()) != 'q')
  {
    
  }

  endwin();
  return 0;
}

WINDOW *create_win(int height, int width, int starty, int startx)
{
  WINDOW *win;
  win = newwin(height, width, starty, startx);
  box(win, 0, 0);
  wrefresh(win);
  return win;
}

void destroy_win(WINDOW *win)
{
   wborder(win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
   wrefresh(win);
   delwin(win); 
}
