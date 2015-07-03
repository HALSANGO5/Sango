//=============================================================================
//
//サウンド処理[ sound.h ]
//HAL東京_GP11A248-08_加藤 勝貴
//
//=============================================================================
#ifndef _SOUND_H_
#define _SOUND_H_

#include "main.h"
#include "xaudio2.h"		// XAudio2関連のヘッダー

// サウンドファイル
typedef enum
{
	BGM_STAGE_CHOICE,		//ステージ選択画面のBGM(WAVファイル)
	BGM_STAGE001,			//ステージ1のBGM(WAVファイル)
	SOUND_LABEL_BGM002,		//サンプルBGM(WAVファイル)
	SOUND_LABEL_SE000,		//サンプルSE(WAVファイル)
	SOUND_LABEL_SE001,		//サンプルSE(WAVファイル)
	SOUND_LABEL_SE002,		//サンプルSE(WAVファイル)
	SE_STAGE_CHOICE,		//ステージセレクトSE(WAVファイル)
	SE_ENTER,				//エンターキーSE(WAVファイル)
	SOUND_LABEL_SE005,		//サンプルSE(WAVファイル)
	SOUND_LABEL_SE006,		//サンプルSE(WAVファイル)
	SOUND_LABEL_SE007,		//サンプルSE(WAVファイル)
	SOUND_LABEL_MAX,
} SOUND_LABEL;

//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
HRESULT InitSound(HWND hWnd);
void UninitSound(void);
HRESULT PlaySound(SOUND_LABEL label);
void StopSound(SOUND_LABEL label);
void StopSound(void);

#endif
