#ifndef FILE_H
#define FILE_H

// namespace ���O��Ԃ̏�����(����q)
/*
namespace namespace�̖��O�P{
	namespace namespace�̖��O�Q{
		// �O���[�o���ϐ���N���X��`�Ȃ�
	}
}
*/

// �t�@�C��
namespace File{
	//�e�N�X�`��
	namespace Texture{
		static const int Max = 100;
	}

	// �T�E���h
	namespace Sound{
		static const int Max = 20;
	}

	static const int Max = Texture::Max + Sound::Max;
}

#endif FILE_H
