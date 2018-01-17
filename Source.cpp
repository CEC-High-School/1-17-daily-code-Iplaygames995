#include<allegro5\allegro.h>
#include<allegro5/allegro_image.h>

int main() {
	ALLEGRO_DISPLAY *display = NULL;
	al_init();
	al_init_image_addon();

	display = al_create_display(700, 500);
	//loads bitmaps from folder
	ALLEGRO_BITMAP *a = al_load_bitmap("ninja.jpg");
	ALLEGRO_BITMAP *b = al_load_bitmap("Fire.JPG");
	ALLEGRO_BITMAP *c = al_load_bitmap("");
	//png files have automatic transparency, jpgs and other file types do not


	//render section//////////////////////////////////////////////////////////
	al_clear_to_color(al_map_rgb(50, 10, 0));
	
	//the order these things are drawn in matters
	al_draw_bitmap(a, 200, 200, 0);
		al_draw_bitmap(b, 0, 0, 0);
		al_flip_display();
		al_rest(5);

		al_destroy_display(display);

}