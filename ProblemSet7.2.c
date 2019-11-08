#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>
/*
## Problem 7.2 - Audio File I/O
- Create a file named `ProblemSet7.2.c`.
- Write a program that reads `sine.wav` (included in the problem set folder) and extends the duration to 5 second.
- Write out the resulting 5 second sine wave to `sine10.wav` file in the same directory.
- Use `libsndfile` for this problem set.
*/

#define kSampleRate 44100
#define kSec 1
#define kNumFrames (kSampleRate * kSec)
#define kNumChannels 2
#define kFormat (SF_FORMAT_WAV | SF_FORMAT_PCM_24)
#define kFileName "sine.wav"

#define kBufferSize 4096


int main(void) {
float *sindata;
float *readdata;
SNDFILE *sinaudio = NULL, *sinoutput = NULL;
SF_INFO sininfo;
static float buffer[kBufferSize];

memset(&sininfo, 0, sizeof(SF_INFO)); 

sinaudio = sf_open("sine.wav", SFM_READ, &sininfo);

sininfo.frames *= 5;

sindata = (float*) malloc(sininfo.frames * sizeof(float));

while(sf_read_float(sinaudio, sindata, sininfo.frames)){
sf_seek(sinaudio, 0, SEEK_SET);
}


while(
    sf_write_float(sindata, sinoutput, sininfo.frames);

int counter;

for(; counter < 5;);{
readdata++;
}






return;
}