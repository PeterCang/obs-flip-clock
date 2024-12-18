#ifndef __CLOCK_H__
#define __CLOCK_H__

#include <stdbool.h>

#include <SDL.h>

struct flipclock_clock {
	struct flipclock *app;
	SDL_Window *window;
	SDL_Renderer *renderer;
// 	SDL_Texture *renderTexture;

	struct flipclock_card *hour;
	struct flipclock_card *minute;
	struct flipclock_card *second;
	int i;
	int w;
	int h;
	bool waiting;
};

struct flipclock_clock *flipclock_clock_create(struct flipclock *app, int i);
void flipclock_clock_set_show_hour(struct flipclock_clock *clock,
				     bool show_hour);
void flipclock_clock_set_show_second(struct flipclock_clock *clock,
				     bool show_second);
void flipclock_clock_set_hour(struct flipclock_clock *clock, const char hour[],
			      bool flip);
void flipclock_clock_set_minute(struct flipclock_clock *clock,
				const char minute[], bool flip);
void flipclock_clock_set_second(struct flipclock_clock *clock,
				const char second[], bool flip);
void flipclock_clock_set_ampm(struct flipclock_clock *clock, const char ampm[]);
void flipclock_clock_animate(struct flipclock_clock *clock);
void flipclock_clock_destroy(struct flipclock_clock *clock);

#endif
