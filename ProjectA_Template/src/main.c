#include <screen.h>
#include <keypad.h>

int main() {
    
    
    clear_screen(BLUE);
    puts(10, 10, MAGENTA, BLACK, "Hello");
    puts(10, 16, YELLOW, BLACK, "World");
    puts(11, 16, RED, BLACK, "GRANDEeee");
    return 0;
}
