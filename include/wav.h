#pragma once

#ifndef __WAVHEADER_H__
#define __WAVHEADER_H__

#ifdef SND_LIB_MACSOUND

void playWavFile(char* path);
void playWav(char* data);
void initWav(char* directory);

#endif /* SND_LIB_MACSOUND */

#endif /* WAVHEADER_H */
