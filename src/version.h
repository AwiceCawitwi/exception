#ifndef version_h
#define version_h

#ifndef _WIN32_WINNT
  #define _WIN32_WINNT 0x0500
#endif
#ifndef WINVER
  #define WINVER 0x0500
#endif

// �g���C�A���o�[�W����(2,4,5�ʖ���)�ɂ��邩 
//#define EXCEPTION_TRIAL

#define EXCEPTION_REPLAY_VERSION 106
#define EXCEPTION_VERSION 111

#ifdef EXCEPTION_DEBUG
  #define EXCEPTION_ENABLE_PROFILE          // �v���t�@�C���_�C�A���O�̗L�� 
  #define EXCEPTION_ENABLE_SCENE_EDIT       // �V�[���Z���N�g�̗L�� 
  #define EXCEPTION_ENABLE_STATE_SAVE       // �X�e�[�g�Z�[�u�@�\�̗L�� 
  #define EXCEPTION_ENABLE_DATA_RESCUE      // Win32Exception����񂾎������v���C�Ƃ���ۑ�����B/EHa�K�{�B�x���Ȃ� 
//  #define EXCEPTION_ENABLE_RUNTIME_CHECK    // �e�탉���^�C���`�F�b�N�̗L���B���Ȃ�x���Ȃ� 
#else
#endif

#ifdef WIN32
  #define EXCEPTION_ENABLE_NETRANKING // �l�b�g�����L���O�̗L�� 
  #define EXCEPTION_ENABLE_NETPLAY    // �l�b�g�z�������l�v���C�̗L�� 
  #ifndef EXCEPTION_TRIAL
    #define EXCEPTION_ENABLE_NETUPDATE // �����A�b�v�f�[�g�̗L�� 
  #endif
#endif


#endif
