
#ifndef VIDEO_H
#define VIDEO_H

#include "PacketQueue.h"
#include "FrameQueue.h"

/**
 * ������Ƶ��������ݷ�װ
 */
struct AudioState
{
	PacketQueue videoq;        // �����video packet�Ķ��л���

	int video_stream;          // index of video stream
	AVCodecContext *video_ctx; // have already be opened by avcodec_open2

	FrameQueue frameq;         // ���������ԭʼ֡����,�Ѿ�������Ҫת��������Ӧ�ĸ�ʽ

	void decode(const AVPacket *packet); // ��packet���룬����
	
};

#endif