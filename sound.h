//=============================================================================
//
//�T�E���h����[ sound.h ]
//HAL����_GP11A248-08_���� ���M
//
//=============================================================================
#ifndef _SOUND_H_
#define _SOUND_H_

#include "main.h"
#include "xaudio2.h"		// XAudio2�֘A�̃w�b�_�[

// �T�E���h�t�@�C��
typedef enum
{
	BGM_STAGE_CHOICE,		//�X�e�[�W�I����ʂ�BGM(WAV�t�@�C��)
	BGM_STAGE001,			//�X�e�[�W1��BGM(WAV�t�@�C��)
	SOUND_LABEL_BGM002,		//�T���v��BGM(WAV�t�@�C��)
	SOUND_LABEL_SE000,		//�T���v��SE(WAV�t�@�C��)
	SOUND_LABEL_SE001,		//�T���v��SE(WAV�t�@�C��)
	SOUND_LABEL_SE002,		//�T���v��SE(WAV�t�@�C��)
	SE_STAGE_CHOICE,		//�X�e�[�W�Z���N�gSE(WAV�t�@�C��)
	SE_ENTER,				//�G���^�[�L�[SE(WAV�t�@�C��)
	SOUND_LABEL_SE005,		//�T���v��SE(WAV�t�@�C��)
	SOUND_LABEL_SE006,		//�T���v��SE(WAV�t�@�C��)
	SOUND_LABEL_SE007,		//�T���v��SE(WAV�t�@�C��)
	SOUND_LABEL_MAX,
} SOUND_LABEL;

//*****************************************************************************
// �v���g�^�C�v�錾
//*****************************************************************************
HRESULT InitSound(HWND hWnd);
void UninitSound(void);
HRESULT PlaySound(SOUND_LABEL label);
void StopSound(SOUND_LABEL label);
void StopSound(void);

#endif
