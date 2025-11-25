//WOW

#include <ncurses.h>

WINDOW *create_win(int height, int width, int starty, int startx);
void destroy_win(WINDOW *win);

int main(int argc, char* argv[])
{
  WINDOW *win;
  int startx, starty, width, height;
  int ch;
  
  initscr();
  cbreak();

  keypad(stdscr, TRUE);

  height = 3;
  width = 10;
  starty = (LINES - height) /2;
  startx = (COLS - width) / 2;
  refresh();
  win = create_win(height, width, starty, startx);

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
