#include "Vec.h"
#include <iostream>

const double eps = 1e-6;

Vec trace1()
{
	if (depth >= 20) return;
	double t;
	// �I�u�W�F�N�gID
	int id = -1;
	// ������
	double mint = inf;
	// object�̐����J�E���g
	const unsigned int size = scene.size();

	// ���ׂẴI�u�W�F�N�g�ɑ΂��Č���������s��
	for (unsigned int x = 0; x < size; x++)
	{
		// �ڐG�����ꏊ���擾
		t = scene[x]->intersect(ray);
		// ���ȐڐG�A��ԍŏ��ɐڐG�����I�u�W�F�N�g���擾����
		if (t > eps && t < mint) { mint = t; id = x; }
	}
	// �ڐG�Ȃ��̏ꍇ�I��
	if (id == -1) return;
	// hit�����ꏊ���擾
	Vec hp = ray.o + ray.d * mint;
	// hit�����ꏊ�̃I�u�W�F�N�g�̃m�[�}�����擾
	Vec N = scene[id]->normal(hp);
	// �q�b�g�����ꏊ��ray�̎n�_�ɕύX
	ray.o = hp;
	// emission�������� 2�̓}�W�b�N�i���o�[
	clr = clr + Vec(scene[id]->emission, scene[id]->emssion, scene[id]->emission) * 2;
}

double rrFactor = 1;
if (depth >= 5)
{

}


int main()
{

}