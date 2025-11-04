#include <ncurses.h>

int main()
{
  initscr();
  printw("Hello, CRAWL!");
  refresh();
  getch();
  endwin();

  return 0;
}
