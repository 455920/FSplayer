
#ifndef VIDEO_H
#define VIDEO_H

#include "PacketQueue.h"
#include "FrameQueue.h"


/**
 * ������Ƶ��������ݷ�װ
 */
struct VideoState
{
	PacketQueue videoq;        // �����video packet�Ķ��л���

	int video_stream;          // index of video stream
	AVCodecContext *video_ctx; // have already be opened by avcodec_open2

	FrameQueue frameq;         // ���������ԭʼ֡����,�Ѿ�������Ҫת��������Ӧ�ĸ�ʽ

	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *bmp;
	SDL_Rect rect;

	void video_play();
	
	VideoState();
};


int decode(void *arg); // ��packet���룬����������Frame����FrameQueue������


#endif