#include <ncurses.h>
#include <stdlib.h>
#include <time.h>


#define MAX_SNAKE_SIZE 25

typedef struct {
    int x, y;
} Point;

typedef struct {
    Point body[MAX_SNAKE_SIZE];
    int length;
    int direction;
}   Snake;

void initGame(Snake *snake, Point *fruit);
void draw(Snake *snake, Point *fruit);
void moveSnake(Snake *snake, Point *fruit);

int main(void){
    // initscr();
    // clear();


    // refresh();
    // curs_set(0);

    // mvprintw(10, 10, "Hello");

    Snake python;
    Point apple;

    initGame(&python, &apple);
    draw(&python, &apple);
    moveSnake(&python, &apple);


    getch();
    endwin();
}

void initGame(Snake *snake, Point *fruit) {
    srand(time(0));

    initscr();
    curs_set(0);
    timeout(100);


    snake->length = 5;
    snake->direction = KEY_RIGHT;

    //init the array of points
    for(int i = 0; i < snake->length; i++) {
        snake->body[i].x = snake->length - i - 1;
        snake->body[i].y = 0;
    }

    fruit->x = rand() % COLS;
    fruit->y = rand() % LINES;

}


void draw(Snake *snake, Point *fruit){
    clear();

    mvprintw(fruit->y, fruit->x, "O");


    //print snake
    for(int i = 0; i < snake->length; i++) {
        if (i==0) {
            mvprintw(snake->body[i].y, snake->body[i].x, "@");
        } else {
            mvprintw(snake->body[i].y, snake->body[i].x, "#");
        }
    }
}

void moveSnake(Snake *snake, Point *fruit) {
    Point new_head = snake->body[0];
    new_head.x++;
    //shift body
    for(int i = snake->length - 1; i > 0; i--) {
        snake->body[i] = snake->body[i - 1];
    }
    snake->body[0] = new_head;
}