#pragma once

#ifndef __WAVHEADER_H__
#define __WAVHEADER_H__

#ifdef USER_SOUNDS
#ifdef CURSES_GRAPHICS

int convInt(unsigned char *header, int start);
short convShort(unsigned char *header, int start);
int parseWavHeader(char *data, int *channels, int *bits, int *size, int *samplingrate);
void playWavFile(char* path);
void playWav(char* data);

#endif /* USER_SOUNDS */
#endif /* CURSES_GRAPHICS */

#endif /* WAVHEADER_H */
