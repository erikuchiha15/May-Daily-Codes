#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>
using namespace std;

int main() {

	al_init();
	al_init_primitives_addon();
	int level[10][10];


	ALLEGRO_DISPLAY *display = al_create_display(500, 500);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			level[i][j]=rand() % 4 + 1;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			cout << level[i][j] << " ";
	cout << endl;
	}
	//print to game window
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			if (level[i][j] == 1)
				al_draw_filled_rectangle(i * 50, j * 50, i * 50 + 50, j * 50 + 50, (al_map_rgb(50, 100, 230)));
			else if (level[i][j] == 2)
				al_draw_filled_circle(i * 50 + 25, j * 50 + 25, 25, (al_map_rgb(50, 250, 20)));
			else if (level[i][j] == 3)
				al_draw_filled_triangle(i * 50 + 25, j * 50 + 50, i * 50 + 70, j * 50 + 80, i * 50 + 140, j * 50 + 170, (al_map_rgb(210, 50, 90)));
			else if (level[i][j] == 4)
				al_draw_line(i * 50 + 30, j * 50 + 40, i * 50 + 150, j * 50 + 230, (al_map_rgb(90, 176, 35)), 5);
	}
	al_flip_display();
	system("pause");
}